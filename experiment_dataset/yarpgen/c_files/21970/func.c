/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21970
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
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 4294967295U))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [11ULL] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [(short)0]);
        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 15440161724031114753ULL)) ? (((/* implicit */long long int) var_9)) : (arr_1 [13LL]))) | (9223372036854775807LL)))) ? (((14U) << (((((/* implicit */_Bool) 1025558972U)) ? (1U) : (640242947U))))) : (4294967295U)));
        var_20 = ((/* implicit */unsigned long long int) var_1);
        var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_2 [11LL] [i_0]) < (((/* implicit */unsigned long long int) -33809053))))), (((((arr_1 [i_0]) / (arr_1 [(short)4]))) & (arr_0 [i_0])))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        arr_7 [18U] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 4])) || (((/* implicit */_Bool) var_15))));
        var_23 = ((/* implicit */short) var_1);
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((arr_11 [i_5] [i_3] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */int) arr_6 [(signed char)13])))))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_25 = (+(((/* implicit */int) arr_6 [i_2])));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2] [(short)0] [i_4] [i_5])) ? (((((/* implicit */_Bool) 6U)) ? (arr_2 [(short)15] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))) : (((/* implicit */unsigned long long int) var_7))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_10 [i_4]))));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)-10525);
                        }
                        for (long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                        {
                            arr_27 [i_2] [i_3] [i_4] [(short)7] [i_5] [i_8] = ((/* implicit */unsigned int) (-(var_1)));
                            arr_28 [i_2] [(short)8] [(signed char)12] [i_2] [i_4] [(signed char)4] [i_2] &= ((/* implicit */signed char) arr_17 [i_8] [i_4] [(short)0] [i_4] [i_4] [i_2]);
                        }
                        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5 + 2])) ? (((/* implicit */long long int) arr_29 [14U] [i_5 + 2] [8U] [i_4] [0])) : (arr_5 [i_5 - 1]))))));
                            arr_31 [i_2] = ((/* implicit */int) var_4);
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            arr_32 [i_2] [i_3] [14LL] [(signed char)6] [i_5] [8] [(short)0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [12] [i_5] [i_5 + 2] [(unsigned char)7])) ? (((/* implicit */long long int) arr_8 [i_2] [i_5 - 1])) : (arr_17 [i_2] [i_2] [(signed char)5] [i_5] [i_5 + 1] [(_Bool)1])));
                        }
                        var_30 *= ((/* implicit */_Bool) arr_1 [i_5]);
                    }
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        arr_35 [i_2] [(signed char)5] [i_4] [i_4] [i_10] [i_2] = ((/* implicit */long long int) arr_29 [i_2] [i_2] [i_4] [i_2] [i_2]);
                        arr_36 [(short)10] [2LL] [2LL] [i_4] [(_Bool)1] |= ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_11)))));
                        var_31 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 217828664U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)1]))))), (((/* implicit */unsigned int) arr_19 [i_4] [8] [12LL])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_7)) : ((+(arr_14 [12U] [i_3] [i_4] [9U])))));
                            arr_39 [(unsigned char)13] [(short)6] [i_2] [3U] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_2]))) : (-210986771076936478LL)));
                            arr_40 [i_2] = arr_34 [i_2] [12] [i_2] [i_2] [i_2] [i_2];
                        }
                    }
                    var_33 = ((/* implicit */short) var_8);
                    var_34 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [13LL] [12ULL]))));
                    var_35 ^= arr_25 [i_2] [i_3] [1U] [11] [i_3] [(short)4];
                    arr_41 [i_2] [i_2] [11LL] = ((/* implicit */short) (-(4294967287U)));
                }
            } 
        } 
        var_36 = min((-2434817475615643467LL), (((/* implicit */long long int) 4294967292U)));
        var_37 ^= ((/* implicit */signed char) arr_1 [i_2]);
    }
}
