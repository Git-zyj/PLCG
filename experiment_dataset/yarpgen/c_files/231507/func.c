/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231507
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = arr_6 [i_0] [i_1];
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 15U))));
                arr_7 [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-8)), (var_14)))) <= (((/* implicit */int) (signed char)15))))), ((+(((/* implicit */int) (unsigned short)61517))))));
                arr_8 [i_0] = arr_4 [i_0 - 1];
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(var_2))))));
}
