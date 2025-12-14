/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234790
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
                {
                    arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 + 1] [i_1])) - (((/* implicit */int) arr_3 [i_2 - 2] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_1] [i_2] [i_1]))) ? (arr_4 [i_1] [i_2 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2]))))))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((unsigned int) arr_4 [i_2] [i_2 + 1] [i_1])) >> (((/* implicit */int) ((arr_4 [i_1] [i_2 + 1] [i_1]) != (arr_4 [i_0] [i_2 + 1] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_0] [i_3] [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_1 [i_3 + 1]));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12380481156345473402ULL)) ? (13353861944753122427ULL) : (18281979648029919470ULL)));
                                arr_18 [i_5] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((int) 1034132807U));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1])))));
                    arr_19 [i_1] [i_3] = ((short) arr_9 [i_1]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((arr_14 [i_3 - 1] [i_3] [i_3] [i_0] [i_0] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_1] [i_0]))))))));
                }
                for (int i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    arr_22 [i_1] [i_6] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_16 [i_7] [i_6] [i_1] [i_1] [19] [i_0])) == (arr_23 [i_6] [i_1] [i_6] [i_0] [i_7] [i_7]))))) * (((unsigned int) max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_6] [i_1])), (arr_14 [i_0] [i_1] [i_1] [i_6] [15ULL] [i_7]))))));
                        arr_26 [i_0] [i_1] [i_6] [i_1] [i_7] = ((((((/* implicit */_Bool) arr_15 [i_0] [i_6 - 1] [i_6] [i_1] [i_1])) || (((/* implicit */_Bool) arr_15 [i_1] [i_6 - 1] [i_0] [i_1] [i_0])))) || (((_Bool) arr_15 [i_0] [i_6 - 1] [i_7] [i_7] [(short)9])));
                        arr_27 [i_0] [i_1] [i_6 - 2] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_8 [(signed char)2] [i_1] [i_1] [i_6 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_6 + 1] [i_1]) > (arr_21 [i_1] [i_6] [i_6 - 2] [i_7]))))) : (((unsigned long long int) 4884866036518696027ULL))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_30 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_24 [i_0] [i_8])) % (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */long long int) arr_20 [i_1] [i_1])) / (arr_29 [i_6 + 1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_6 - 2] [i_1]))) != (arr_23 [i_0] [i_1] [i_6 - 2] [i_6] [(short)20] [i_6])))))));
                        var_21 = ((/* implicit */unsigned int) ((short) ((long long int) (short)32762)));
                    }
                }
                arr_31 [i_1] = ((/* implicit */short) arr_20 [i_0] [i_1]);
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) - (arr_23 [(_Bool)1] [i_1] [i_1] [i_0] [i_0] [i_0]))) >= (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [3ULL]))) : (arr_23 [i_0] [i_1] [i_0] [i_0] [4ULL] [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((unsigned int) (signed char)50));
}
