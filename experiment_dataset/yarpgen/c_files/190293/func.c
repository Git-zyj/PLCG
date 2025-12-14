/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190293
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
    var_20 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_11));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [6] [i_2] [(unsigned char)4] [i_1] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_1] [i_4 - 3] [i_4] [i_4] [i_4] [i_1] [i_4 - 2]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_0] [i_1] [i_0])))));
                        arr_17 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_19))) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_18))));
                        var_21 = ((/* implicit */unsigned short) (signed char)10);
                    }
                    for (int i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
                    {
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-6894259976572077902LL), (var_5)))), (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))) ? (min((max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0])), (arr_20 [i_0] [i_0] [i_2] [15LL] [i_3 + 1] [i_5 + 2]))), (((/* implicit */unsigned int) arr_5 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        arr_22 [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), ((~(arr_14 [i_3 - 2] [i_3] [i_3 + 1] [i_3 + 1] [i_5 - 1] [i_5 - 2])))));
                        arr_23 [i_0] [i_1] [i_2] [i_2] [i_5] = (!(((/* implicit */_Bool) var_7)));
                        arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                    }
                    for (int i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) arr_18 [i_6] [i_3 - 2] [(unsigned char)9] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_3 + 1] [i_1]))))))), (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3 - 2] [i_3] [i_6 - 3] [i_3 - 2])) ? (((/* implicit */long long int) arr_15 [i_1] [i_2] [i_3 + 1] [(short)5] [i_3] [i_6])) : (var_3)))));
                        arr_28 [(unsigned char)15] [(unsigned char)15] [14] [i_1] = ((/* implicit */unsigned short) arr_0 [(short)4]);
                        arr_29 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3] [i_3 - 2] [i_3] [i_3])) ? (min((((/* implicit */long long int) arr_0 [i_1])), (3530012157285407341LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_12 [i_6 - 2] [i_6 - 2] [i_2] [i_3] [i_6] [i_1] [i_3 - 1])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_6 - 2] [i_2] [i_3 - 1] [i_3] [i_6 - 1])) ? (arr_26 [i_0] [i_6] [i_6] [i_3] [i_3 - 1] [i_2] [(short)0]) : (((/* implicit */int) var_16))))));
                    }
                    var_25 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_1]))))));
                    arr_30 [(_Bool)1] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_12 [2U] [i_0] [2U] [i_1] [2U] [i_1] [2U]), (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_0] [i_2] [i_3 + 1] [i_0]) >> (((((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_1])) - (188)))))) : ((+(arr_21 [15ULL] [i_3 - 2] [i_3 - 2] [0ULL] [i_3] [i_1])))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_12 [2U] [i_0] [2U] [i_1] [2U] [i_1] [2U]), (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_0] [i_2] [i_3 + 1] [i_0]) >> (((((((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_1])) - (188))) + (201)))))) : ((+(arr_21 [15ULL] [i_3 - 2] [i_3 - 2] [0ULL] [i_3] [i_1]))))));
                }
                arr_31 [i_2] [i_1] [i_2] |= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1358777862)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))) : ((~(((/* implicit */int) var_16)))));
                arr_32 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2]);
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_26 [i_1] [i_1] [(short)10] [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */int) ((unsigned char) 11U)))))) ? (((/* implicit */unsigned long long int) ((-1358777865) * (((/* implicit */int) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_21 [(unsigned short)11] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        }
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */long long int) var_14)) < (((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_3)))))), (max((((int) var_9)), (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))));
            var_28 += ((/* implicit */_Bool) (short)-30616);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_20 [11ULL] [i_0] [(short)14] [11ULL] [i_0] [i_7 + 2]) : (arr_20 [i_0] [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1])))) > (((unsigned long long int) arr_20 [i_0] [i_0] [i_7] [i_7] [i_7] [i_7 - 2]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) arr_34 [i_7] [i_7 - 1] [i_8])) : (((/* implicit */int) arr_19 [i_7 - 2] [i_8] [i_9] [i_10] [i_9]))));
                            var_31 = ((int) ((arr_27 [i_9] [i_8]) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_12))));
                        }
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            arr_50 [i_7] [i_9] = ((/* implicit */_Bool) (-(var_15)));
                            var_32 &= ((/* implicit */long long int) ((0U) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_14)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8)))) : (((arr_46 [i_0] [4] [i_8] [i_9] [i_11]) / (((/* implicit */int) var_12)))))) + (103)))));
                            var_33 = ((/* implicit */unsigned char) arr_13 [i_11]);
                            arr_51 [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))), (min((min((((/* implicit */int) arr_4 [i_9] [i_11])), (arr_8 [i_8]))), (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_9] [i_11])) ? (arr_26 [i_0] [i_7 - 1] [i_8] [i_8] [i_9] [i_9] [i_11]) : (((/* implicit */int) var_18))))))));
                        }
                        arr_52 [i_9] [i_7] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */signed char) min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_14)))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_7]) | (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_16)))) << (((arr_41 [i_0] [i_0] [i_7 - 2] [i_0] [i_0]) - (1565143112141710929ULL))))))));
        }
        /* vectorizable */
        for (short i_12 = 2; i_12 < 20; i_12 += 4) 
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((((long long int) var_0)) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_0] [i_12] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_19)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 2; i_13 < 20; i_13 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_12 - 2] [i_13])) ? (((/* implicit */int) arr_38 [i_12 + 1] [i_12 + 1] [i_13 - 2] [i_13])) : (((/* implicit */int) arr_48 [i_12 - 2] [i_13 - 1]))));
                var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_35 [i_12 - 1]))));
                arr_57 [(unsigned char)12] [(unsigned char)12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((arr_0 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_12]))))));
                var_38 = ((/* implicit */long long int) max((var_38), (var_3)));
                /* LoopSeq 2 */
                for (short i_14 = 1; i_14 < 17; i_14 += 3) /* same iter space */
                {
                    var_39 *= ((/* implicit */short) (-(((int) arr_9 [i_0] [i_12 - 1] [i_14]))));
                    arr_61 [i_0] [i_0] [i_0] [i_13] = ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_33 [i_12 - 1] [i_12 - 2] [i_12 - 1])));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_12] [i_12] [i_14])) + (arr_54 [i_12 - 1] [i_13 - 2] [i_14 + 3])));
                }
                for (short i_15 = 1; i_15 < 17; i_15 += 3) /* same iter space */
                {
                    var_41 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_47 [i_0] [i_12] [i_13] [i_0] [i_15] [i_15])) == (((/* implicit */int) var_18)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_15 + 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_55 [i_0] [i_0] [i_13] [i_15]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
                    {
                        arr_70 [i_15] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_13] [i_0] [i_15]))) > (var_14))))));
                        var_42 = ((/* implicit */int) var_15);
                        arr_71 [i_12] [i_13 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_16]))))) ? (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) : (arr_21 [i_12 - 1] [i_12] [i_15] [i_15 + 2] [i_15] [i_16])));
                        arr_72 [i_15] [i_12 - 2] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                        arr_73 [i_15] [i_12 + 1] [i_12 + 1] [i_13 - 2] [i_15] [(unsigned char)8] = ((/* implicit */unsigned long long int) (-(22)));
                    }
                    var_43 = ((/* implicit */short) arr_10 [i_0] [i_12] [3U] [i_15]);
                }
            }
            /* LoopNest 3 */
            for (short i_17 = 1; i_17 < 20; i_17 += 2) 
            {
                for (unsigned short i_18 = 4; i_18 < 20; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        {
                            arr_81 [i_17] [i_17] [i_17 - 1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_10)) | (arr_46 [i_0] [i_12] [i_12] [i_18] [10])))));
                            var_44 = (~(((/* implicit */int) var_4)));
                            var_45 ^= ((/* implicit */short) ((arr_14 [i_19] [i_19] [i_19] [i_18 - 4] [i_18 - 4] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            var_46 = ((/* implicit */int) arr_78 [i_0] [i_0] [i_0] [i_17] [i_19] [i_17]);
                        }
                    } 
                } 
            } 
        }
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_3)))) ? (min((((/* implicit */unsigned int) arr_5 [i_0])), (arr_43 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_74 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (arr_26 [i_0] [i_0] [i_0] [(short)15] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (short i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
    {
        var_48 &= (-(((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_2 [i_20] [i_20]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) arr_21 [5] [i_20] [i_20] [i_20] [i_20] [i_20])))))) : (((long long int) var_0)))));
        var_49 -= ((/* implicit */_Bool) (((((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((arr_42 [i_20] [i_20] [i_20] [9ULL] [i_20] [i_20]) - (15734162429258171493ULL))))) / (((((/* implicit */_Bool) -1358777865)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18))))));
        arr_84 [i_20] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL))));
        var_50 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_20] [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_67 [i_20] [i_20])))))))), (var_3)));
    }
    /* LoopNest 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (int i_22 = 3; i_22 < 20; i_22 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_23 = 0; i_23 < 23; i_23 += 2) /* same iter space */
                {
                    var_51 = ((/* implicit */long long int) min((arr_85 [i_21] [i_22]), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_16)), (arr_89 [i_21]))))) & ((+(arr_87 [i_22 + 3])))))));
                    var_52 = arr_90 [11] [i_21] [i_23];
                    arr_92 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) var_9);
                    var_53 = ((/* implicit */unsigned char) min((((_Bool) ((var_12) ? (var_17) : (((/* implicit */unsigned long long int) var_14))))), ((!(((((/* implicit */_Bool) arr_87 [i_22])) || (((/* implicit */_Bool) var_11))))))));
                }
                for (int i_24 = 0; i_24 < 23; i_24 += 2) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned short) var_5);
                    arr_95 [i_21] [i_22 + 3] [i_22 - 3] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) / (arr_91 [i_21] [i_22]))) + ((+(((/* implicit */int) arr_90 [3] [i_22] [i_24]))))))) ? (((((/* implicit */_Bool) arr_85 [i_22 + 1] [i_22 - 3])) ? (arr_85 [i_22 - 3] [i_22 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) >> (((((((/* implicit */_Bool) var_3)) ? (arr_94 [i_21] [i_21] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_24]))))) - (3701415963U))))))));
                }
                var_55 = ((/* implicit */unsigned char) var_6);
                var_56 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_85 [i_22 + 2] [i_22 - 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))));
                arr_96 [i_22] [i_22] [19LL] = (~(((int) var_12)));
            }
        } 
    } 
}
