/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197418
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
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((arr_0 [i_0] [i_0]) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (128))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (var_13) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_1]);
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] [i_0] = (((!(((/* implicit */_Bool) var_10)))) ? (arr_0 [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
            arr_10 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 4; i_3 < 8; i_3 += 3) /* same iter space */
            {
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 4] [i_3 - 4] [i_3 - 3])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 2] [i_3] [i_3 + 2])))));
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 6; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_6)) ? (134217696) : (arr_15 [i_0] [i_2] [i_0] [i_0])))));
                        }
                    } 
                } 
                var_19 = var_0;
                arr_19 [i_0] [i_2 - 2] [i_2 + 1] [i_0] = ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0]) : (arr_4 [i_0]));
                var_20 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
            }
            for (unsigned int i_6 = 4; i_6 < 8; i_6 += 3) /* same iter space */
            {
                arr_23 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)76))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
            }
            for (unsigned int i_7 = 4; i_7 < 8; i_7 += 3) /* same iter space */
            {
                arr_26 [i_7] [i_2 + 1] [i_7 - 3] [i_0] = ((/* implicit */signed char) var_12);
                arr_27 [(signed char)0] [i_0] [(signed char)0] |= ((/* implicit */unsigned int) var_7);
                var_22 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_0] [i_2] [i_0])) : (((/* implicit */int) (short)-13782))))));
                arr_28 [i_0] [i_2 - 2] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
            }
            var_23 = ((/* implicit */signed char) min((var_23), (arr_14 [i_0] [i_0] [i_2 - 2] [i_2])));
        }
        for (signed char i_8 = 1; i_8 < 9; i_8 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((11752041725576615098ULL), (((/* implicit */unsigned long long int) (unsigned char)80)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13083))))))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (var_4)))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 3839830412U)))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))))));
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_8 - 1] [i_0] [i_0])) ? (((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_8 - 1]))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_8 + 1]))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_8])) : (((/* implicit */int) var_11))))) : (var_6)))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 8; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)-41)))) - (49))))) << (((((/* implicit */int) arr_33 [i_0] [i_8] [i_9 + 1] [i_10])) - (241)))));
                        arr_36 [i_0] = ((/* implicit */unsigned short) arr_34 [i_0] [i_8 - 1] [i_0] [i_10]);
                    }
                } 
            } 
        }
    }
    for (signed char i_11 = 1; i_11 < 15; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                {
                    arr_44 [i_13] = ((/* implicit */unsigned char) ((((arr_43 [i_11 + 2] [i_11 - 1] [i_11]) << (((/* implicit */int) var_4)))) << (((((/* implicit */int) var_10)) - (162)))));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned short) max((arr_49 [i_11] [i_11] [i_11 + 2] [i_11] [(short)2] [i_11] [i_11]), (arr_49 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11] [(_Bool)1] [i_11 - 1] [i_11 - 1])));
                                var_27 = ((/* implicit */int) max((3870908700U), (((/* implicit */unsigned int) arr_39 [i_11] [i_12] [i_14]))));
                                arr_50 [i_15] [i_13] [i_13] [i_13] [i_11 - 1] = ((/* implicit */unsigned short) min((((/* implicit */short) var_10)), ((short)12379)));
                            }
                        } 
                    } 
                    arr_51 [i_11 - 1] [i_13] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13] [i_12] [i_11 + 1])) ? (((/* implicit */long long int) ((arr_49 [i_11] [i_12] [i_13] [i_11 + 1] [i_13] [i_13] [i_12]) ? (((/* implicit */int) arr_49 [i_11] [i_11] [i_13] [i_11 + 2] [i_13] [i_11] [i_13])) : (((/* implicit */int) arr_49 [i_13] [i_13] [i_13] [i_11 - 1] [i_13] [i_13] [i_11]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_49 [i_12] [i_12] [i_12] [i_11] [i_13] [i_13] [i_12])) : (((/* implicit */int) var_1))))) : (arr_42 [i_11 + 1] [i_12] [i_13] [i_13])))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) arr_41 [8U] [i_11] [i_11 + 1] [8U]);
        var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((arr_49 [i_11 + 1] [i_11] [8U] [i_11] [8U] [i_11] [i_11]), (arr_49 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2] [(_Bool)1] [i_11] [i_11 - 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) max((arr_45 [i_11] [i_11 - 1] [(short)2] [i_11 + 1]), (((/* implicit */signed char) arr_46 [16LL] [i_11] [i_11 + 1] [16LL] [i_11 + 1] [16LL]))))) ? (arr_41 [i_11 - 1] [i_11] [i_11 + 1] [(signed char)0]) : ((~(11752041725576615098ULL)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_18 = 2; i_18 < 15; i_18 += 1) /* same iter space */
                {
                    arr_62 [i_18] [i_18] [i_18] = ((/* implicit */signed char) (unsigned char)90);
                    arr_63 [i_18] [i_18] [i_18] [i_16] = (!(((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_58 [i_16] [i_17] [i_18])), (arr_57 [i_16] [i_18 + 3]))))))));
                }
                /* vectorizable */
                for (unsigned short i_19 = 2; i_19 < 15; i_19 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        for (short i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                arr_73 [i_20] = ((/* implicit */unsigned char) arr_60 [i_19] [i_19 + 1] [i_19 + 2] [i_19 + 2]);
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) arr_58 [i_16] [i_20] [i_20]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_19 + 1] [i_19 + 1] [i_19 - 1]))) : ((~(var_8)))));
                                var_31 ^= arr_64 [i_21] [i_20] [i_19 - 2] [i_16];
                                arr_74 [i_16] [i_17] [i_19] [i_19] [i_21] [i_21] [i_19] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_4)) << (((var_0) - (6106032418783057332LL))))) : (arr_60 [i_19] [i_19 - 1] [i_19] [i_19])));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 3) 
                        {
                            {
                                var_33 = var_13;
                                arr_81 [i_23] [i_23] [i_19] [i_19] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) arr_70 [i_23 + 1] [i_22] [i_17] [i_17] [i_17] [i_16]);
                                arr_82 [i_23 + 1] [i_22] [i_19 + 1] [i_17] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) 4294967265U)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_61 [i_17] [i_23 - 2]))))));
                            }
                        } 
                    } 
                }
                for (int i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    arr_85 [i_16] [i_17] [i_24] [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_5)))));
                    arr_86 [i_16] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_64 [i_16] [i_16] [i_16] [i_16]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_64 [i_16] [i_17] [i_24] [i_17]))))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))));
                    var_34 = ((/* implicit */signed char) ((var_3) << (((max((arr_56 [i_16]), (((/* implicit */unsigned long long int) arr_78 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) - (9243336033745401726ULL)))));
                }
                for (signed char i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    arr_90 [i_25] [i_17] [i_17] [i_16] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_77 [i_25] [i_25] [i_25] [i_17])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) arr_59 [i_17] [i_16] [i_25]))))))) & (min((((/* implicit */unsigned long long int) arr_75 [i_17] [i_17])), (((((/* implicit */_Bool) arr_68 [i_16] [i_17] [i_25])) ? (arr_88 [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    arr_91 [i_16] [i_16] [i_25] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)12))));
                    var_35 = ((/* implicit */long long int) arr_89 [i_16] [i_17]);
                }
                var_36 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_87 [i_17] [i_17] [i_16] [i_17])))) << ((((((~(((/* implicit */int) var_11)))) + (253))) - (19)))));
            }
        } 
    } 
}
