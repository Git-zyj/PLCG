/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21751
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
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [(unsigned char)10] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [20ULL] [20ULL]))))), (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))) & (((/* implicit */unsigned long long int) min(((~(arr_0 [(unsigned char)17]))), ((~(((/* implicit */int) (unsigned char)163)))))))));
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_2 [i_1 + 2])))));
                var_19 = var_13;
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (arr_13 [i_0] [i_0] [3U] [i_1 - 1] [i_1 - 1] [i_0])))), (((long long int) arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] [i_0]))));
                            arr_16 [i_0] [i_2] [i_2] [12] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_13)))), (((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_1] [i_2])), (var_16)))) / (((unsigned long long int) (short)768))))));
                            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2])) / (((/* implicit */int) var_9))))));
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                arr_19 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
                                var_21 = ((/* implicit */unsigned int) var_10);
                            }
                            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */int) (~(min((((/* implicit */long long int) max((arr_0 [8]), (var_1)))), (min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2])), (arr_10 [i_0] [i_1] [i_2])))))));
                                arr_24 [i_2] [i_3] = ((/* implicit */int) (~(max((var_2), (((/* implicit */long long int) (signed char)-64))))));
                                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_2]))))) == (((/* implicit */unsigned int) (~((~(var_16))))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_5 + 1] [i_2])) ? (arr_18 [i_0] [i_5 + 1] [i_1 + 1] [i_3] [i_2]) : (((/* implicit */int) arr_20 [i_3] [i_5 + 1] [i_2]))))) ? (((/* implicit */int) arr_11 [i_0] [i_5 + 1] [i_2])) : (((/* implicit */int) max((arr_20 [i_0] [i_5 + 1] [i_2]), (arr_20 [i_0] [i_5 + 1] [i_2]))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_3] [i_2]), (((/* implicit */long long int) var_16))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1808581528)) ? (((/* implicit */int) (short)762)) : (((/* implicit */int) (unsigned char)45))))))) : (((((/* implicit */_Bool) arr_23 [i_1 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-769))))))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((arr_6 [i_0] [i_0] [16]) + (((/* implicit */unsigned long long int) arr_17 [i_0] [10] [i_2] [i_2] [i_1 - 2]))))));
                            }
                            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_7 + 3])) ? (((((/* implicit */_Bool) (unsigned char)178)) ? (1494959048) : (((/* implicit */int) (_Bool)0)))) : (max((arr_17 [i_0] [i_1] [i_2] [i_3] [i_7 + 3]), (arr_17 [14ULL] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (~((~(max((((/* implicit */unsigned int) arr_29 [i_2] [i_0] [i_0] [i_7 - 2] [11])), (var_8)))))));
                                arr_34 [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_2] [(short)11] [17LL] [17LL] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_2] [i_2])))) >> (((arr_1 [i_2]) - (11695888336074927214ULL)))))), ((~(arr_21 [i_2] [i_1] [i_2] [i_3] [i_1] [i_2] [i_2])))));
                                arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_7 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_25 [i_1 + 2] [i_1] [i_7 + 2] [i_2] [i_7 + 3] [i_7 + 2]))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_16))))) : ((~(((((/* implicit */_Bool) 1837334516)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-776))) : (1855134186163758118LL)))))));
                            }
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) ((long long int) ((_Bool) arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 1])));
            }
        } 
    } 
}
