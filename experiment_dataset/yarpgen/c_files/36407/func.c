/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36407
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
    var_18 = ((/* implicit */short) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) var_7))))));
    var_19 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) ((arr_0 [i_0 - 4] [i_1 + 1]) > (arr_0 [i_0 - 4] [i_1 + 1]))));
                arr_5 [i_0] [i_0 - 3] [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 4] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 - 3] [i_1 + 1]))) : (arr_0 [i_1 - 4] [i_0]))))));
                var_20 += ((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_1 [i_0 + 2]))));
                arr_6 [14ULL] [i_0] [i_0] |= ((/* implicit */long long int) (-((-(1003710635U)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((var_3) <= (((/* implicit */long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((3291256661U) - (3291256661U))))))))), ((-(((((/* implicit */_Bool) var_11)) ? (3291256648U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_22 += ((/* implicit */unsigned int) var_14);
}
