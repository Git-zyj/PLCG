/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */signed char) (~(((max((var_7), (((/* implicit */long long int) (signed char)13)))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 + 1])))))));
                                var_19 = min((((((/* implicit */_Bool) arr_8 [i_3 + 4] [i_3 + 4] [i_4 - 2])) ? (arr_8 [i_3 + 4] [i_3 + 4] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((9223372036854775807LL) | (((((/* implicit */_Bool) arr_7 [i_4] [i_3 + 2] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (9223372036854775807LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (signed char)24)), (max((var_9), (((/* implicit */long long int) (signed char)125)))))), (((/* implicit */long long int) var_3))));
                        var_21 = var_6;
                        arr_15 [i_0] [i_2] [19LL] [i_1 + 3] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 2] [i_2] [i_5]))) : (arr_8 [i_0 + 1] [i_1 + 3] [i_2 + 2]))));
                        var_22 = var_0;
                        arr_16 [i_0] [i_0] [i_2] [i_0 - 1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 - 1])) ? (((long long int) (signed char)12)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_1 [i_0]))))))));
                    }
                    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) / (var_9)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_24 = (+(arr_3 [i_0 + 1] [i_2 - 2] [i_6]));
                                arr_22 [i_2] [i_0] [i_1 + 2] [i_1 + 2] [i_2 - 2] [17LL] [i_7] = arr_17 [i_0 - 2];
                                arr_23 [i_0] [i_0] [i_2] [2LL] [i_6] [i_2] = arr_13 [i_2];
                                arr_24 [i_0 + 2] [i_0 + 2] [i_0] [i_2] [i_0 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-127))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = max((var_13), (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) + (6754400554297278304LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))));
}
