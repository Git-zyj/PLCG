/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230232
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_10 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1834893638)) ? (673301470U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10111)))));
                            arr_11 [i_0] [(unsigned short)0] [i_2] [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) -1834893638)) || (((/* implicit */_Bool) (unsigned short)11611)))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                var_11 |= ((/* implicit */unsigned short) arr_8 [i_4]);
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned char)7] [i_2] [2U] [i_3 + 1] [4ULL])) ? (arr_15 [i_0] [i_1 - 2] [i_0] [i_3 - 1] [i_3 + 1]) : (var_0))))));
                                var_13 |= ((/* implicit */signed char) 4294967279U);
                                var_14 = ((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1 - 2] [(signed char)4]), (arr_7 [i_0] [i_1 + 1] [i_2])))) >= (max((((/* implicit */unsigned long long int) arr_15 [(unsigned short)4] [(unsigned short)4] [i_1] [i_3] [i_4])), (3714529616552675926ULL))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    arr_19 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) var_0)) : (((9271921973004915407ULL) + (384934370926083316ULL)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((min((min((((/* implicit */unsigned int) arr_5 [i_0])), (arr_1 [7ULL] [7ULL]))), (((/* implicit */unsigned int) (short)127)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_7])), (arr_24 [9])))) ? (max((1834893637), (((/* implicit */int) (unsigned char)1)))) : (arr_13 [i_0] [i_6] [(_Bool)0] [i_0] [i_7] [i_6] [i_5]))))));
                                var_16 -= ((/* implicit */unsigned int) 14732214457156875681ULL);
                                arr_26 [i_0] [i_1] [i_1 - 1] [i_5] [i_6] [8] = max(((-(max((((/* implicit */unsigned long long int) var_6)), (arr_24 [i_5]))))), (((/* implicit */unsigned long long int) max((var_3), (arr_1 [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    var_17 = ((/* implicit */int) ((short) arr_20 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_8 + 1]));
                    var_18 = ((/* implicit */unsigned long long int) (signed char)-19);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_33 [(unsigned short)0] [i_10] [i_10] = (~(((/* implicit */int) (signed char)-26)));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 4; i_11 < 23; i_11 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) (unsigned short)54741);
                    var_20 *= ((/* implicit */unsigned int) max((arr_31 [i_9] [(unsigned short)13]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_9] [i_10] [(unsigned short)14])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                }
                arr_38 [i_9] [i_9] [(unsigned short)3] = ((/* implicit */int) var_4);
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((arr_30 [i_9]), (((/* implicit */long long int) (_Bool)1)))))));
                        arr_44 [i_9] = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (short i_14 = 2; i_14 < 23; i_14 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (arr_39 [i_14 + 1] [(unsigned char)21] [(short)2])));
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_14 + 1] [i_14 + 1] [i_12] [i_14 - 1])) ? (arr_45 [i_14 - 1] [i_14 - 2] [i_15] [(signed char)15]) : (((/* implicit */int) arr_40 [i_14 - 2] [23] [i_14 - 2] [7ULL]))));
                            arr_50 [i_9] [i_10] [i_12] [i_10] [i_9] |= ((/* implicit */short) ((unsigned short) var_5));
                            var_24 = ((/* implicit */signed char) var_1);
                        }
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned short) -1570864066446099067LL)))));
                            var_26 = ((/* implicit */signed char) arr_40 [i_9] [i_10] [i_14] [i_14 + 1]);
                        }
                        var_27 = ((/* implicit */_Bool) ((int) 6604660600726667170LL));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_34 [i_9] [i_10] [i_12] [i_10]))));
                        var_29 = ((/* implicit */int) var_3);
                        arr_57 [i_9] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */int) ((unsigned int) var_2));
                    }
                    var_30 = ((((/* implicit */_Bool) max((arr_39 [i_9] [i_9] [i_12]), ((signed char)0)))) ? (((long long int) arr_39 [i_9] [i_10] [i_12])) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_10] [i_12]))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) ((arr_52 [i_9] [(short)5] [i_12] [i_12] [i_9] [i_12] [i_12]) > (((/* implicit */unsigned int) arr_45 [i_9] [11ULL] [i_12] [i_10]))))) : (((/* implicit */int) (_Bool)1))));
                    var_32 |= ((/* implicit */int) (signed char)-103);
                }
                for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_9] [i_10] [(unsigned char)15] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_42 [i_9] [23LL] [i_18] [i_9])));
                    var_34 |= ((/* implicit */unsigned short) arr_31 [i_9] [i_10]);
                    var_35 = ((/* implicit */unsigned char) ((var_4) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9] [i_10] [i_18])) ? (arr_46 [i_9] [i_10] [i_18] [(short)9]) : (((/* implicit */int) arr_39 [i_9] [i_10] [i_10])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) 237838954);
                        var_37 = ((/* implicit */_Bool) (unsigned char)66);
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_9] [i_10] [i_18] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [(signed char)8] [i_10] [(signed char)8] [i_19]))) : (var_6)));
                    }
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((signed char) min((arr_36 [i_9] [i_10] [i_18]), (((/* implicit */unsigned short) arr_32 [i_9] [i_10] [i_10]))))))));
                }
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) max((((int) var_2)), (((/* implicit */int) var_1))));
    var_41 = ((/* implicit */_Bool) var_5);
}
