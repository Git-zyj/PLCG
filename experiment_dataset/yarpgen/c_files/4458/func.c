/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4458
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
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) -1900399810);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2 + 2])) || (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 + 1] [i_2] [i_2 + 2]))));
                        var_12 = ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0]))));
                        arr_11 [i_3] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) (unsigned short)17757);
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        var_14 = ((/* implicit */unsigned int) (short)-21039);
                        arr_14 [i_0] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_1 - 1] [i_0 - 4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 625269940822274775LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-14)) || (((/* implicit */_Bool) -737206399)))))));
                            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned int) var_4))))) ? (max((arr_10 [i_0] [i_2] [i_4] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_4] [6U]))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (unsigned short)65510))));
                            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((-1589340804), (((/* implicit */int) (short)-17672))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 737206407)) || (((/* implicit */_Bool) 2147483647)))))) : (-625269940822274775LL)));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_23 [i_0 + 2] [i_0 + 2] [i_2 + 2] [8U] [i_4] = ((/* implicit */short) 18429615003884108177ULL);
                            var_18 |= ((/* implicit */short) max((arr_12 [i_6 + 1] [2U] [i_6] [i_6] [i_6 + 1] [i_0 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -737206399)))))));
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)0] [(short)0] [i_2 - 1] [i_2 - 1] [(short)0] [i_2])) ? (((/* implicit */int) ((short) (short)0))) : (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [5U]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1 + 4]))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_4] [i_0 + 1] [i_0 + 1])))))))));
                            arr_24 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) arr_0 [(signed char)7]);
                        }
                        for (int i_7 = 1; i_7 < 8; i_7 += 4) 
                        {
                            arr_27 [i_0 + 3] [i_0] [i_0 + 1] [i_7] [i_0 - 2] = ((/* implicit */unsigned int) var_1);
                            arr_28 [i_0] [(unsigned short)5] [i_4] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) -1483003134)) : (772100937U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((737206399), (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_7 + 2]))))) ? (max((arr_16 [i_7]), (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0 + 1] [1] [(signed char)1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2])) || (((/* implicit */_Bool) var_0))))))))));
                            arr_29 [i_7] [i_4] [i_2] [9U] [i_7] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-14))));
                            var_21 += ((/* implicit */signed char) var_1);
                        }
                        var_22 = ((/* implicit */unsigned int) arr_0 [i_1 + 2]);
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) var_8);
                        var_24 *= ((/* implicit */short) min((((((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_1] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1 - 2] [i_2] [i_2] [i_8])))))) & (max((((/* implicit */long long int) (short)-30630)), (-625269940822274775LL))))), (((/* implicit */long long int) arr_6 [i_1]))));
                    }
                    arr_33 [i_0] [0U] [i_0 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [(_Bool)1])) ? (arr_25 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) : (arr_25 [i_0] [i_0] [i_0 - 4] [i_0 - 2] [i_0 + 2])))) ? (max((arr_25 [i_1] [i_0] [i_0 - 3] [i_0 - 2] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 4]))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (772100937U)))));
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_25 = ((/* implicit */signed char) min((737206399), (1249504083)));
                    arr_37 [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) (!(var_6))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)182)), (4263629885U)));
                                arr_42 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_9]))));
                                var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20667)) - (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 3]))))));
                            }
                        } 
                    } 
                }
                arr_43 [i_1 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned int) var_1)), (((/* implicit */unsigned int) arr_20 [i_1 + 1] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 - 3])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)3)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_6)) < (var_3)))) - (((/* implicit */int) var_6))));
    var_30 = ((/* implicit */unsigned char) var_0);
    var_31 = ((/* implicit */unsigned int) var_4);
}
