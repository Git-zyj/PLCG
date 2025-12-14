/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222432
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] = (-((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_1 - 2])))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) < (arr_2 [i_0])))))))));
            }
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                var_13 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1] [i_1]);
                var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_3] [i_1] [(_Bool)1]))));
            }
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_15 [i_0] = ((/* implicit */long long int) (-2147483647 - 1));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2013265920)) ? (-6084983158874158729LL) : (arr_11 [i_0] [i_4] [i_4] [i_4])))) ? (-6084983158874158733LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-126)), (var_9)))));
            }
            var_16 ^= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) : (arr_6 [i_1 + 1] [(_Bool)1] [i_1 - 1] [i_1 - 2]))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (unsigned char)42);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (short)-8219)))) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) arr_21 [14U] [i_5] [14U]))))) >= (((((/* implicit */_Bool) arr_2 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6 + 1]))) : (min((arr_6 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_6 - 1]), (((/* implicit */long long int) arr_14 [i_0] [i_5] [i_5]))))))))));
                            var_19 -= ((/* implicit */unsigned short) ((int) var_0));
                            var_20 = ((/* implicit */short) (((!((_Bool)1))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [(unsigned char)0]))) % (var_9)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_21 = ((((/* implicit */_Bool) arr_6 [i_8] [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [(signed char)13] [5ULL]) : (arr_6 [i_0] [i_0] [(_Bool)1] [(_Bool)1]));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_8])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) var_3);
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((short) arr_0 [i_0])))));
        }
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((arr_16 [i_0] [i_0] [i_9] [i_0]), (((/* implicit */unsigned int) arr_18 [i_0]))))))) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_10] [(short)6]))))) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_12 [i_10] [i_10] [i_10 + 1] [i_10])) + (59))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_0))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_10] [i_12] [i_12] = ((/* implicit */int) arr_31 [i_12] [i_10 + 1] [i_10]);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_9] [i_10] [(unsigned short)9] [i_0] [i_0])))))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_10 + 1] [i_10 + 1])) != (((/* implicit */int) arr_29 [i_9] [i_9] [(short)13] [i_11 + 1])))) ? (min((((/* implicit */long long int) ((_Bool) -18121896))), (arr_11 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_9])) >= (((/* implicit */int) ((arr_2 [i_9]) < (((/* implicit */int) var_5)))))))))));
                            var_27 |= ((/* implicit */unsigned long long int) arr_29 [i_0] [i_10 + 1] [i_10 - 1] [i_12]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((var_9) % (var_9))))));
                        var_29 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_9] [i_0])) ? (arr_4 [15] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_14])))))));
                        var_30 = ((/* implicit */long long int) var_6);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_14 + 2] [i_14 - 2] [i_14 - 3] [i_13 + 2])) ? (((/* implicit */int) ((short) var_9))) : ((-(((/* implicit */int) arr_33 [i_14] [i_13 + 2] [13ULL] [i_0]))))));
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 465824450U)) | (-6084983158874158739LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_9])) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((unsigned short) arr_14 [i_15] [(_Bool)1] [(_Bool)1]))))))));
                        arr_46 [i_0] [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [(short)1])))));
                        var_33 |= ((/* implicit */unsigned int) arr_41 [i_15] [i_15] [i_13] [i_10] [i_9] [i_15] [i_0]);
                    }
                    for (short i_16 = 4; i_16 < 16; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */short) arr_9 [(short)11] [i_9] [i_10 + 1]);
                        arr_51 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(_Bool)1] [i_10] [(unsigned short)2]))))) ? (((/* implicit */int) arr_27 [i_16 + 2] [i_10 - 1])) : (((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_9] [i_10 - 1] [i_9] [i_16])))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_13 - 2] [i_10 - 1] [(short)6] [i_9])) ? (arr_28 [i_13 + 2] [i_10 - 1]) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0])))));
                    }
                    for (short i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0])))));
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_13 - 2] [i_13 - 1] [i_9] [i_13 + 2] [i_13 + 2] [i_13 + 2])) && (((/* implicit */_Bool) arr_43 [i_13 - 2] [i_13 - 1] [i_9] [i_13 + 2] [i_13 + 2] [i_13 + 2])))))));
                    }
                    arr_55 [i_13] [i_13] [i_13] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_47 [i_9] [i_10 - 1] [i_13 - 1] [i_13] [i_13 + 1]))));
                }
                /* vectorizable */
                for (unsigned short i_18 = 1; i_18 < 16; i_18 += 3) 
                {
                    var_38 &= ((/* implicit */unsigned short) arr_22 [i_0] [i_9] [i_10 + 1] [i_10 + 1] [i_18 + 2]);
                    /* LoopSeq 1 */
                    for (short i_19 = 2; i_19 < 16; i_19 += 1) 
                    {
                        var_39 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_18] [i_19])) ? (((((/* implicit */_Bool) arr_48 [i_10] [i_9] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [(short)14] [(_Bool)1]))) : (6084983158874158736LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [(short)10] [i_10 - 1] [(short)7] [i_0]) || (((/* implicit */_Bool) var_5))))))));
                        var_40 = ((/* implicit */unsigned short) arr_42 [i_0] [i_0] [i_9] [8LL] [(signed char)15] [i_19 + 2]);
                        var_41 = ((/* implicit */int) arr_12 [i_9] [i_9] [i_18] [i_19 + 2]);
                    }
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_20 = 2; i_20 < 17; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) arr_31 [i_20 + 1] [i_9] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 1; i_22 < 16; i_22 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_60 [i_20 + 1] [i_20 + 1] [i_20 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((unsigned char) arr_61 [i_0] [i_20] [i_22]))))))));
                            var_44 -= ((/* implicit */unsigned short) arr_33 [i_0] [i_20] [(unsigned short)17] [i_22]);
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [(unsigned short)16])))))));
                            var_46 *= ((/* implicit */signed char) (+(min((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_70 [i_0] [i_9] [i_21] [i_22 + 1] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((int) arr_6 [i_0] [(unsigned short)8] [(short)10] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_23 = 4; i_23 < 17; i_23 += 2) 
                        {
                            arr_75 [i_23] [i_21] [i_20] [i_9] = ((/* implicit */long long int) var_3);
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_20] [i_20])) ? (((((/* implicit */_Bool) (unsigned char)144)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_23 - 1] [9U] [i_23] [i_23 - 3]))))))))));
                            var_48 = arr_3 [i_0] [i_23 - 2] [i_20];
                        }
                        for (unsigned int i_24 = 3; i_24 < 16; i_24 += 4) 
                        {
                            var_49 = ((/* implicit */_Bool) (((+(min((arr_31 [i_20] [(signed char)4] [i_20]), (arr_6 [(_Bool)1] [i_21] [i_20] [i_9]))))) / (min((((/* implicit */long long int) arr_23 [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_24 + 2] [i_24 - 3] [i_24 - 2])), (arr_57 [i_20 + 1] [i_24] [i_24] [i_24 - 2])))));
                            var_50 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_53 [(signed char)0] [i_9] [i_20] [i_9] [i_24])), (var_5))))) > ((-(arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        arr_78 [i_0] [i_20 + 1] [i_21] |= ((/* implicit */signed char) max((((/* implicit */int) min((var_11), (((/* implicit */short) arr_40 [i_20 + 1] [i_20 - 2] [i_20 - 2] [i_20 - 2]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_30 [i_9] [i_9] [(_Bool)1])), (var_1)))) ? (((int) arr_66 [i_0] [i_0] [(signed char)16] [i_20 + 1] [i_21])) : ((~(((/* implicit */int) var_7))))))));
                        var_51 = ((/* implicit */_Bool) ((signed char) (+(arr_76 [i_20 - 2]))));
                    }
                } 
            } 
            arr_79 [i_0] [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_33 [i_0] [i_9] [i_9] [i_9]))))), (var_1)))));
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 18; i_25 += 1) 
            {
                for (int i_26 = 4; i_26 < 14; i_26 += 1) 
                {
                    {
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_26 + 4] [i_26 + 4] [5] [i_26 + 3] [i_26 - 4])) ? (5169226975528474026LL) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0]))) : (var_8)))) ? ((+(((/* implicit */int) arr_54 [(signed char)9])))) : (((/* implicit */int) arr_82 [i_9] [i_9] [i_9])))) : (((/* implicit */int) arr_68 [i_0] [i_0] [i_9] [i_25] [(unsigned char)16] [i_26])))))));
                        var_53 = ((/* implicit */_Bool) arr_57 [i_0] [i_26] [(unsigned short)14] [1U]);
                        var_54 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_26 [i_0] [i_26 - 3])) ? (((/* implicit */int) var_3)) : (arr_62 [i_26 - 3] [i_26 + 1] [i_26 - 3] [i_26]))), ((~(((/* implicit */int) var_0))))));
                    }
                } 
            } 
        }
        var_55 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_9))))))));
        /* LoopNest 3 */
        for (long long int i_27 = 1; i_27 < 16; i_27 += 1) 
        {
            for (short i_28 = 4; i_28 < 16; i_28 += 3) 
            {
                for (unsigned int i_29 = 2; i_29 < 15; i_29 += 3) 
                {
                    {
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_59 [i_0] [i_0] [i_27] [i_27] [i_28] [i_29] [(signed char)2])) : (((/* implicit */int) var_3)))) / ((-(((/* implicit */int) arr_80 [i_0] [i_0]))))))))));
                        arr_94 [i_0] [i_27] [i_28] [i_27] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_83 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_7 [(unsigned short)7] [i_29 - 2] [i_29 - 2] [i_29])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_30 = 1; i_30 < 17; i_30 += 3) 
                        {
                            arr_97 [i_27] [i_28 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_30 + 1] [i_27 - 1])), (min((arr_85 [i_28 - 3] [i_0]), (((/* implicit */unsigned long long int) var_1))))))) ? (((long long int) (-(((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_28 + 2] [(short)1] [i_30] [i_30] [i_30])) ? (2465899004U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_0] [i_27] [i_28])))))))))));
                            arr_98 [i_0] [i_27] [i_28] [i_28] [i_27] [i_30 - 1] [(unsigned short)13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_28 - 1] [(short)11] [i_30]))) : (arr_6 [(short)0] [i_28] [i_29] [i_28])))) ? (((/* implicit */int) max((var_6), (((/* implicit */short) (_Bool)1))))) : ((~(((/* implicit */int) arr_5 [i_28 + 2] [i_29] [i_27])))))) >= (((((/* implicit */int) arr_13 [i_28 + 1] [i_27 - 1])) | (((/* implicit */int) arr_13 [i_28 - 4] [i_27 - 1]))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_57 = ((/* implicit */signed char) (unsigned char)255);
    /* LoopNest 3 */
    for (long long int i_31 = 0; i_31 < 17; i_31 += 1) 
    {
        for (short i_32 = 0; i_32 < 17; i_32 += 3) 
        {
            for (signed char i_33 = 1; i_33 < 15; i_33 += 4) 
            {
                {
                    var_58 = ((/* implicit */short) arr_34 [i_31] [i_33 - 1] [i_33] [i_33 + 2] [i_33]);
                    arr_105 [i_31] [i_32] [i_33] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((arr_61 [i_31] [i_33 - 1] [i_33 + 2]) ? (((/* implicit */int) arr_61 [i_33] [(_Bool)1] [i_33 + 2])) : (((/* implicit */int) arr_61 [(unsigned char)9] [i_31] [i_33 + 2])))) : ((-(((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
}
