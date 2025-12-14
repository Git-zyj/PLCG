/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204708
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) && ((!(((/* implicit */_Bool) var_10))))))) != (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)21111))))));
                                arr_15 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) (~(arr_13 [i_4 - 2] [i_4 + 2] [i_4 - 1] [i_4] [i_4])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) arr_4 [i_1] [i_2] [i_5 - 1] [i_6])))) < (((/* implicit */int) var_4))));
                                var_15 ^= ((/* implicit */signed char) arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                                var_16 = ((/* implicit */unsigned char) ((arr_6 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) << (((arr_6 [i_2] [i_5 - 1] [i_5 - 1] [i_5 - 1]) - (5129268398884062259LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 1])))))));
                                var_18 = var_7;
                                var_19 = ((/* implicit */unsigned long long int) ((short) var_0));
                            }
                        } 
                    } 
                    arr_25 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2])) << (((((/* implicit */int) arr_11 [i_2])) - (30471)))));
                }
            } 
        } 
        var_20 = var_8;
        arr_26 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) arr_27 [i_0]);
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_30 [i_0] [i_0] [i_0] [i_0])));
                    arr_33 [i_0] [i_9] [4LL] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_0] [i_9]))));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_28 [i_10] [i_10]))));
                    arr_34 [i_0] [i_0] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_11] [i_10] [i_9] [i_0])) : (((/* implicit */int) arr_16 [(unsigned short)8] [2LL] [i_10] [i_10]))))) : (((unsigned int) arr_20 [i_0] [(short)9] [i_10] [i_11] [i_10] [i_11] [i_11]))));
                }
                for (short i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_36 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((arr_3 [i_10] [2U] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_9] [i_13])) : (((/* implicit */int) arr_3 [i_9] [i_10] [i_12]))));
                        var_26 ^= ((/* implicit */unsigned short) (+((((_Bool)1) ? (arr_38 [i_0] [i_9] [i_10] [i_9] [i_13]) : (((/* implicit */long long int) var_5))))));
                        var_27 = ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_9] [i_10] [(_Bool)1])));
                        var_28 = var_5;
                    }
                }
                for (signed char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (arr_32 [i_14] [i_9] [i_9] [i_0])));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        arr_46 [i_0] &= ((/* implicit */long long int) ((unsigned int) arr_18 [i_14]));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_5 [i_9] [i_0]) == (arr_5 [i_9] [i_14]))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        arr_50 [i_0] [i_0] [10U] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_41 [i_0] [i_9] [i_10] [i_14])));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_0]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                    {
                        arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) arr_40 [(_Bool)1] [i_14])) : (((/* implicit */int) var_8))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [3U] [3U] [i_10] [i_9] [i_0])) ? (arr_39 [i_0] [i_17] [i_10] [i_14] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_17] [i_17] [i_17])))));
                        arr_56 [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */signed char) (+(arr_41 [i_10] [(short)0] [i_10] [i_10])));
                        var_33 = var_1;
                    }
                    for (unsigned char i_18 = 1; i_18 < 7; i_18 += 2) 
                    {
                        var_34 &= ((/* implicit */unsigned char) arr_10 [i_0]);
                        var_35 = ((/* implicit */short) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) - (40))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1))))));
                    }
                    var_36 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (2040036123U))) >> (((((/* implicit */int) var_1)) + (163)))));
                    arr_59 [i_14] [i_14] [i_10] [i_9] [i_0] = ((/* implicit */short) ((arr_39 [i_0] [i_9] [i_10] [i_10] [i_14]) ^ (((/* implicit */unsigned long long int) arr_53 [i_0] [i_0] [i_10] [i_14] [i_0] [i_14] [i_14]))));
                }
                for (signed char i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */short) ((65535U) << (((((/* implicit */int) (unsigned short)65535)) - (65510)))));
                    arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [(unsigned char)0] [i_10] [i_9] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [(unsigned char)6] [(unsigned char)6] [i_9] [(unsigned char)6])) / (((/* implicit */int) var_6)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            arr_70 [i_21] [i_20] [i_10] [i_9] [i_0] |= ((/* implicit */short) ((((/* implicit */int) var_3)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            var_38 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807ULL)));
                            var_39 = (!(((/* implicit */_Bool) arr_41 [i_0] [i_10] [i_20] [i_21])));
                        }
                    } 
                } 
            }
            for (unsigned short i_22 = 2; i_22 < 7; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_22 + 3] [i_22 - 1]))) : (var_12))))));
                            var_41 += ((/* implicit */unsigned short) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_22 - 1] [i_22 - 2] [i_22 - 2] [i_22] [i_22])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                {
                    for (long long int i_26 = 0; i_26 < 11; i_26 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */short) ((((arr_72 [i_26] [i_9] [i_0]) + (9223372036854775807LL))) << (((((arr_72 [i_22] [i_9] [i_0]) + (6003920197282333591LL))) - (55LL)))));
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7716180139224747885LL)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (4294901761U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((144115188075855871ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) ((arr_19 [i_0] [i_9] [i_9] [i_9] [i_22 - 2]) <= (var_10)));
                /* LoopSeq 1 */
                for (long long int i_27 = 0; i_27 < 11; i_27 += 2) 
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_22 + 2] [i_22] [i_22 - 1] [i_22] [i_22 + 1] [i_22])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0]))) + (4294901760U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
                        var_46 = ((/* implicit */_Bool) ((arr_0 [i_22 + 3] [i_22 + 3]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_6 [i_22 - 1] [(unsigned char)1] [i_22 + 2] [i_22 + 2])));
                        arr_89 [i_0] [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_9])) << (((((/* implicit */int) arr_7 [i_9])) - (32530)))));
                    }
                    for (unsigned char i_29 = 0; i_29 < 11; i_29 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */short) ((((/* implicit */int) arr_63 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) < (((/* implicit */int) var_8))));
                        var_48 = ((/* implicit */unsigned char) (!(arr_64 [i_22 + 4] [i_22] [i_22] [i_22 + 3] [i_22 + 3])));
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((arr_88 [i_29] [i_22] [i_22 + 1] [i_22 + 2] [i_22] [i_22 + 4]) - (2046566670U)))));
                        var_50 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)9924)) == (((/* implicit */int) (short)-12533))));
                    }
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1] [i_9] [i_9] [i_0] [(unsigned char)0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_86 [i_22 + 2] [i_22 + 3] [i_22 + 3] [i_22 + 3] [i_22]))));
                }
                var_52 = ((arr_13 [i_0] [i_22 - 2] [i_22] [i_22 - 2] [i_22 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_22 + 1] [i_22] [i_22 + 4] [(short)8] [i_22 + 4] [i_22 + 4]))));
            }
        }
        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_92 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_92 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
}
