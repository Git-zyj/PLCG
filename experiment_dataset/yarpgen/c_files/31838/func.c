/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31838
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) min((335108365), (((/* implicit */int) ((((arr_4 [i_0]) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) < ((~(((/* implicit */int) arr_0 [3U])))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_20 += ((/* implicit */signed char) var_1);
                    arr_8 [i_2] [(signed char)1] [(signed char)14] = ((/* implicit */_Bool) var_1);
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [(signed char)17] [(signed char)1])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1] [20]))) <= (12U))))));
                }
                for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_22 = min((min((var_2), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [(signed char)4] [i_1] [i_4] [13ULL])));
                                arr_19 [i_0] [(_Bool)1] [16LL] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-13843)) && (var_18))) || ((!(((((/* implicit */_Bool) -913793803)) || (((/* implicit */_Bool) var_8))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */short) ((arr_11 [i_1 + 1]) ? (((/* implicit */int) ((1666614772227360770ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_16 [17U] [18] [i_1])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) ((var_13) > (1666614772227360779ULL))))));
                        /* LoopSeq 2 */
                        for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)146)) <= (((/* implicit */int) var_9))))) > (arr_6 [i_3]))))));
                            arr_26 [i_1] [(_Bool)1] [i_6] [i_6] [i_7 + 2] [0] [i_6 - 1] = ((/* implicit */_Bool) arr_4 [i_7 - 1]);
                            arr_27 [i_7] [i_6 - 1] [i_3 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_11 [22LL]) || (((/* implicit */_Bool) var_2))));
                        }
                        for (short i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            var_25 *= ((/* implicit */int) arr_31 [i_8] [i_6 - 1] [i_3 - 3] [i_0] [i_0]);
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_2 [1] [(short)20])))) && (((/* implicit */_Bool) arr_24 [i_0] [(signed char)3] [(signed char)3] [(signed char)22] [(signed char)22]))));
                            var_27 = ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)59)) * (((/* implicit */int) arr_3 [i_0] [9ULL] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((arr_22 [i_0] [i_1] [(signed char)7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))), (arr_17 [i_0] [i_1] [i_1] [i_3] [i_6] [i_8]))))) : (((arr_28 [i_0] [i_1 - 1] [i_3] [22LL] [i_8]) ? ((((_Bool)1) ? (arr_25 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_8] [i_8 + 2]))))));
                            arr_32 [(unsigned char)13] [(signed char)3] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 - 2] [i_6 - 1])) && (((/* implicit */_Bool) var_17))))) != (((/* implicit */int) (((+(arr_7 [i_0] [i_1] [i_3 - 2]))) > ((+(((/* implicit */int) arr_30 [i_0] [(signed char)15] [i_0] [22LL] [i_0])))))))));
                        }
                        var_28 &= ((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_3 + 2] [i_6 - 1]);
                        arr_33 [(unsigned char)18] [(_Bool)1] [i_1 - 1] = ((/* implicit */unsigned int) var_5);
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 -= (((!(((/* implicit */_Bool) min((arr_36 [13ULL] [(signed char)18] [i_3] [(signed char)4] [i_9] [i_9]), (((/* implicit */signed char) arr_11 [(signed char)18]))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_5)))) <= (arr_31 [i_0] [i_1 - 1] [2U] [i_6] [i_9])))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-6)) + (2147483647))) << (((((arr_13 [i_6 - 1]) + (5893209875108291756LL))) - (1LL)))))) | (min((arr_13 [i_6 - 1]), (arr_13 [i_6 - 1]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_40 [i_0] [i_1] [i_3 + 1] [i_6] [i_10] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_19))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_18))));
                            var_32 = ((/* implicit */signed char) ((127) * (((/* implicit */int) (short)15492))));
                            var_33 = ((/* implicit */signed char) (short)-4772);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) arr_28 [i_1 - 1] [i_1 + 1] [i_3] [i_3 + 2] [i_6 - 1])) : (((/* implicit */int) arr_28 [i_1 + 1] [i_1] [i_1] [i_3 - 1] [i_6 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((arr_28 [i_0] [i_1] [i_3] [i_3 + 3] [21]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) || (((/* implicit */_Bool) arr_30 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(unsigned char)5]))))) : (((((/* implicit */int) arr_3 [i_0] [i_1] [i_11])) | (arr_4 [i_0]))))))));
                        var_36 = ((/* implicit */short) arr_41 [i_11] [i_3] [i_1] [i_1] [i_0]);
                    }
                }
                arr_44 [i_1] [i_0] = ((/* implicit */signed char) ((min((arr_35 [i_0] [i_1]), (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_1]) : (arr_35 [i_0] [i_1]))))) / (((/* implicit */int) min((arr_12 [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_16))))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) var_11);
}
