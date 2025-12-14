/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41127
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
    var_19 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) 732458855))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)238))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((min((arr_9 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_4] [i_4]), (arr_9 [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_0 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [6ULL] [i_1] [i_1] [i_2] [i_3] [i_4])) != (((/* implicit */int) arr_9 [i_0 - 4] [i_1] [i_2] [i_3] [i_3] [i_4]))))) : (((arr_9 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [7ULL] [i_3] [i_3] [i_1] [i_2])) : (((/* implicit */int) arr_9 [i_1] [i_3] [i_3] [(short)8] [i_1] [i_0]))))));
                                arr_12 [i_2] [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 4]), (((/* implicit */signed char) var_5))))) ? ((-(((long long int) (unsigned char)246)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3])))) : (((/* implicit */int) var_12))))));
                                arr_13 [i_3] [i_4] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) max((((max((17983735719323346095ULL), (((/* implicit */unsigned long long int) 4294967295U)))) - (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3])))))))), (max((144115188075855871ULL), (((/* implicit */unsigned long long int) (unsigned short)58725))))));
                                arr_14 [i_2] [(unsigned char)4] [i_3] [i_3] [i_0 - 4] [i_0 - 4] |= ((/* implicit */signed char) (~((-(arr_8 [i_1] [i_1] [i_1] [i_1])))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(((((/* implicit */_Bool) var_10)) ? (18302628885633695744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (!(arr_9 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_2] [i_2] [i_5] [i_5] [i_1] [i_0 - 4] = ((/* implicit */unsigned short) min((144115188075855864ULL), (((/* implicit */unsigned long long int) var_4))));
                                var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_1] [i_5]), (((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [5LL]))))) ? (((int) 9223372036854775794LL)) : (((/* implicit */int) ((unsigned short) (unsigned char)182)))))) == (((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [i_6 + 2] [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_0]))) : (arr_8 [i_1] [i_1] [(unsigned char)17] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_6 + 2] [i_0 - 3] [i_5 + 1])))))));
                                var_25 = ((/* implicit */signed char) 4275024633094743799ULL);
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (~(4450138016849934318ULL))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18302628885633695770ULL)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0 - 3] [i_0 + 1] [(signed char)0] [i_0]))))))) : (((/* implicit */int) var_13))));
    }
}
