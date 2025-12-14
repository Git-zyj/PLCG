/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192163
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
    var_16 = min((-1788095812), (-1788095812));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_5);
        arr_3 [i_0] = ((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */long long int) -1174896191))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_4))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1174896191)) ? (-1788095812) : (-1788095787)))) ? (((((/* implicit */_Bool) 1174896190)) ? (-1174896190) : (((/* implicit */int) (_Bool)0)))) : (((int) 0)))))));
                            arr_20 [i_1] [i_2] [3] [i_2] [i_4] = ((/* implicit */unsigned int) arr_12 [i_2 + 2] [i_2 - 2] [i_1] [i_2 - 2]);
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((arr_17 [i_2] [i_3] [i_4] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_2 + 2] [i_3]))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1040187392LL))))));
                            var_21 = ((/* implicit */short) arr_14 [i_1] [i_2] [i_2] [2U]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2 - 3] [i_2 - 3] [i_3] [i_2] [i_7])))));
                            arr_29 [i_2] [2] = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 1788095811)) : (var_11))) / (((unsigned int) var_12)));
                            var_23 = ((/* implicit */int) arr_25 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1]);
                            arr_30 [i_2] [i_2] = ((/* implicit */int) arr_11 [i_4] [i_3] [i_1]);
                        }
                        arr_31 [i_3] [i_2] = ((/* implicit */long long int) var_0);
                        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_2 + 1] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned int) arr_1 [i_8]);
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 1148417904979476480LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1148417904979476480LL)) >= (arr_32 [i_8]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_15)))));
        arr_35 [i_8] = ((/* implicit */int) ((max((arr_32 [i_8]), (arr_32 [i_8]))) & (((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_8])))));
    }
}
