/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32662
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-60)), (var_8)));
    var_17 = min((max((max((((/* implicit */unsigned long long int) (signed char)56)), (var_8))), (var_8))), (((/* implicit */unsigned long long int) var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) 1919477221U)) & (var_15))), (((/* implicit */long long int) arr_3 [i_1]))));
                var_18 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) max((((/* implicit */short) var_11)), ((short)30591)))), (3970304975384998241LL))), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [i_1])))))))));
            }
        } 
    } 
}
