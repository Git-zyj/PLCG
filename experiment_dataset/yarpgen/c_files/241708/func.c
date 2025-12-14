/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241708
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
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_2)) % (max((((/* implicit */unsigned long long int) 1401597261U)), (18446744073709551615ULL)))));
    var_15 = ((/* implicit */long long int) ((int) var_9));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (85172948)))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        arr_3 [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))), (((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */unsigned int) 0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */long long int) 0))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) max((min((((arr_0 [i_1]) * (arr_0 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) > (1309190894))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_4])) ? (var_4) : (arr_0 [10U]))))) ? (min((arr_14 [i_4 + 3] [i_4] [i_4] [i_3] [i_4 + 3] [i_4 + 3]), (arr_14 [i_4 + 3] [i_4] [i_4 + 2] [i_3] [i_4 + 3] [i_4 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0])), (arr_7 [i_0] [i_1] [i_3])))))));
                                arr_16 [i_3] [i_3] = (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (1357360904U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [19] [i_2]), (arr_2 [i_2] [i_1]))))) : (arr_12 [i_4] [(short)21] [i_4 + 1] [i_3] [i_4]))));
                                var_19 -= ((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [i_2] [i_1] [i_4]), (min((arr_12 [i_1] [i_4 + 1] [i_4] [i_1] [i_4 + 3]), (((/* implicit */long long int) (~(arr_6 [i_0]))))))));
                            }
                        } 
                    } 
                    arr_17 [3] [(short)6] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])) ? (arr_11 [20U] [i_0] [i_2] [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2])), (arr_7 [i_1] [i_1] [19])))) : ((+(((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) ((int) max((arr_7 [i_0] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_2]))));
                    var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) max((arr_6 [i_1]), (((/* implicit */unsigned int) (short)-1))))) : (((unsigned long long int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)9] [i_1] [i_2]))))) : (((((/* implicit */int) (unsigned char)247)) / (1983294941))));
                }
            } 
        } 
    }
    var_22 -= ((/* implicit */short) var_12);
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_4)))))))));
}
