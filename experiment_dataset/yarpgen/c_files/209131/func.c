/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209131
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
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_4)))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) < (arr_0 [i_0 + 1])))))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)14000)), (var_18)))) ? (arr_2 [i_0 - 1]) : (min((396232435), (396232435)))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) var_7)), (var_16))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0]) / (((/* implicit */int) (unsigned char)2)))))))) ? (((/* implicit */int) (signed char)79)) : (arr_2 [i_0 + 1])));
                arr_7 [i_0] [i_0] [(unsigned char)9] &= ((/* implicit */unsigned short) arr_1 [i_1]);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((short) (unsigned char)189)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 + 1]) >= (((/* implicit */long long int) -396232433)))))) : (max((((/* implicit */unsigned long long int) (short)7672)), (5794141008141307557ULL))))))));
            }
        } 
    } 
    var_22 = ((int) ((unsigned long long int) max((2147483647), (((/* implicit */int) var_1)))));
}
