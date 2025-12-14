/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22987
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
    var_19 = ((/* implicit */unsigned short) (+((((((+(((/* implicit */int) var_2)))) + (2147483647))) << ((((((((+((-2147483647 - 1)))) - (-2147483632))) + (28))) - (12)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) max(((unsigned short)36064), (((/* implicit */unsigned short) (_Bool)0))));
                arr_6 [i_0] = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1]);
                var_20 = ((/* implicit */unsigned int) arr_0 [i_1] [i_0 + 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (var_1))), (((/* implicit */unsigned long long int) min((var_10), ((short)-5951))))))));
    var_22 = ((/* implicit */unsigned long long int) var_5);
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_3))));
}
