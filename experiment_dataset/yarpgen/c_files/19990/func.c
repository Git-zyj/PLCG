/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19990
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
    var_20 = ((/* implicit */long long int) var_16);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [6LL] &= ((/* implicit */unsigned int) max((arr_3 [12LL] [12LL]), (((arr_3 [10U] [i_0 - 1]) + (arr_3 [12ULL] [i_0 - 1])))));
        var_21 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0 + 1])))));
        arr_5 [i_0 + 1] [i_0] = max((arr_1 [i_0]), (max((((unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 0U)) ? (6609234080179182368ULL) : (17013527442999737684ULL))));
        var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_6 [i_1]));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        arr_9 [21LL] = ((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1]));
    }
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_6 [11ULL]))) ? (((unsigned int) arr_7 [11ULL])) : (((unsigned int) arr_11 [i_2 + 3])))) >> (((max((((/* implicit */unsigned long long int) (+(arr_6 [i_2])))), (max((arr_10 [i_2 + 4]), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2])))))) - (7700494327075562658ULL)))));
        arr_12 [3ULL] = ((/* implicit */unsigned int) ((min((arr_11 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2])))) <= (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_2 + 1])))));
        arr_13 [i_2 + 4] [i_2] = max(((+(max((arr_10 [i_2]), (0ULL))))), (((((/* implicit */_Bool) arr_11 [i_2 - 1])) ? (max((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_11 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1])))))))));
    }
    var_25 = ((/* implicit */long long int) var_9);
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (1943931660073058416ULL) : (((/* implicit */unsigned long long int) 2019898229U)))))) ? (var_18) : (((/* implicit */unsigned long long int) ((long long int) ((var_3) + (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_25 [i_4] [i_4] [3U] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 13U)), (-3739855857070815231LL))))))), (3704415538U));
                    var_27 = ((/* implicit */unsigned long long int) -4625642382091747710LL);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 2) 
                    {
                        arr_28 [i_3 - 2] [i_4] [i_5] [i_5] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_6 - 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_3 - 4] [i_4])) <= (((((/* implicit */_Bool) 16502812413636493178ULL)) ? (arr_17 [19ULL]) : (((/* implicit */unsigned long long int) arr_27 [i_3] [i_5] [i_6 - 2])))))))) : (arr_26 [i_3 - 4] [i_4] [i_4] [i_5] [i_6])));
                        var_28 = ((/* implicit */unsigned int) min(((-(max((arr_18 [i_3] [3ULL] [i_3]), (((/* implicit */unsigned long long int) arr_16 [19ULL])))))), (((/* implicit */unsigned long long int) ((((long long int) arr_19 [i_3 - 2] [i_3 - 2])) + (arr_23 [i_4] [i_5]))))));
                        var_29 *= ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2230283068U)), (1632004770769233594LL)))) * (((unsigned long long int) arr_17 [i_3 - 2])));
                        arr_29 [i_5] [i_6 + 2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_22 [i_4])) ? (arr_22 [i_3 - 1]) : (arr_22 [i_5])))));
                    }
                    arr_30 [i_5] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((long long int) arr_14 [i_4] [i_3 - 1]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_16 [i_5]) : (((/* implicit */long long int) arr_22 [i_3]))))), (((((/* implicit */_Bool) 16502812413636493200ULL)) ? (1943931660073058465ULL) : (((/* implicit */unsigned long long int) 2230050540U))))))));
                    var_30 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_4] [i_4])) || (((/* implicit */_Bool) arr_23 [i_4] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_3 - 2] [i_4])))))) : (max((arr_23 [i_3] [i_5]), (arr_23 [i_3 - 3] [i_5])))));
                }
                arr_31 [i_3] [i_4] = ((unsigned int) max((((/* implicit */unsigned long long int) arr_14 [i_3 - 3] [i_3 - 3])), (arr_17 [i_3 - 3])));
                var_31 ^= ((/* implicit */unsigned int) ((min((arr_18 [i_3] [i_3] [i_4]), (arr_18 [i_3 - 1] [i_4] [i_3 - 2]))) < (arr_18 [i_3] [i_3 - 2] [i_3 + 2])));
            }
        } 
    } 
}
