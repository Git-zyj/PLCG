/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35148
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) 6917529027641081856ULL);
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 54840892994194673ULL)) ? (min((((/* implicit */unsigned long long int) (signed char)-40)), (arr_3 [(signed char)6]))) : (arr_3 [i_0 - 1]))) & (max((arr_3 [i_0 - 2]), (arr_3 [i_0 + 1])))));
                var_21 += ((/* implicit */unsigned int) ((54840892994194673ULL) / (54840892994194673ULL)));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) + (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_4 [2U] [i_1] [16ULL]) != (arr_1 [i_1] [i_0])))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2253103114U))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) 161562618U)))), (arr_3 [i_1])))) ? (min(((+(arr_0 [i_0]))), (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) 4294967295U))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_14)))) + (2147483647))) >> (((/* implicit */int) ((((0U) + (var_1))) <= (((4294967295U) << (((((/* implicit */int) var_7)) - (14))))))))));
}
