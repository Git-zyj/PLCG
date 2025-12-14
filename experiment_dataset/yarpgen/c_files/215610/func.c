/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215610
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)7265))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) var_12);
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) && ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1)))))));
            arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)-18269)) : (((/* implicit */int) var_15))))) ? ((-(arr_4 [i_0]))) : (arr_4 [i_0]));
        }
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_2 + 1]) - (arr_1 [i_0] [i_2 + 2])));
            var_20 = ((/* implicit */unsigned char) ((((int) arr_11 [i_2])) % (((/* implicit */int) arr_11 [2]))));
        }
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_3])) % (arr_1 [i_0] [i_3])));
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_3]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) var_16);
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_22 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                    arr_26 [i_6] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_6 - 1] [i_5 - 1]))));
                    var_23 = ((/* implicit */unsigned short) arr_0 [i_6]);
                }
                for (short i_7 = 2; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_4] [i_5] [i_7] = ((/* implicit */long long int) arr_15 [i_0]);
                    var_24 &= ((/* implicit */short) arr_13 [1U] [i_4]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_35 [i_0] [i_4] [i_4] [i_5 - 1] [i_7] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30050)) % ((~(((/* implicit */int) arr_33 [(unsigned char)8] [i_8]))))));
                        arr_36 [i_0] [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned int) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_4] [i_4])))));
                    }
                }
                for (short i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14383185453969233193ULL)) ? (((/* implicit */unsigned long long int) arr_39 [i_0] [i_4] [(_Bool)1] [i_4])) : (14383185453969233193ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0]))))) : (701701723)));
                    var_26 = ((/* implicit */short) max((var_26), ((short)-7266)));
                    var_27 = ((/* implicit */unsigned int) arr_28 [0U] [i_4] [i_5] [(short)8]);
                }
                for (short i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    arr_43 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) << (((((/* implicit */int) arr_29 [i_0] [i_10])) - (77)))))) ? ((-(arr_10 [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0])) - (arr_4 [i_0]))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        arr_48 [i_0] [i_4] [i_10] [i_5] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_11] [i_5 + 1] [i_10] [i_4] [i_0])) | (((/* implicit */int) arr_45 [i_11] [i_5 + 1] [i_10] [i_4] [i_0]))));
                        arr_49 [i_0] [i_4] [i_4] [i_10] [i_4] [i_10 - 1] [(unsigned char)11] = ((/* implicit */unsigned int) (unsigned short)35491);
                        var_29 = ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_4] [i_5])))) : (arr_42 [i_5 - 1] [i_5 + 1] [i_10 - 1] [i_10]));
                    }
                    for (short i_12 = 2; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_54 [i_4] [i_4] [i_10] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))) | (((/* implicit */int) arr_30 [i_4] [i_10] [i_12]))));
                        arr_55 [i_4] [i_4] [i_4] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_12])) && (((/* implicit */_Bool) arr_45 [i_0] [i_4] [i_10] [i_10] [11LL]))))) : (((/* implicit */int) arr_23 [i_10] [i_10 - 2] [i_10 - 2] [i_5 + 1] [i_10]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                    {
                        arr_59 [(short)11] [7] [i_5] [4U] [i_10] = ((/* implicit */unsigned long long int) arr_25 [i_4] [i_4] [i_4] [2LL]);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_44 [i_0] [i_4] [i_5] [i_10] [i_13])) : ((-(((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        arr_60 [i_10] [i_5] [i_4] [i_10] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)80)))) + (2147483647))) << (((((/* implicit */int) (unsigned short)7)) - (7)))));
                    }
                    for (int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_10 + 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_30 [i_10 + 1] [i_10] [i_5 + 3])) : (((/* implicit */int) arr_30 [i_10 + 1] [i_5] [i_5 + 2]))));
                        arr_64 [i_0] [i_0] [i_10] [(unsigned char)8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) != (var_8)));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (arr_20 [i_0])));
                        arr_69 [i_10] [i_4] [i_5] [i_10] [i_15] = ((/* implicit */unsigned int) var_12);
                        arr_70 [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_15));
                        arr_71 [i_10] [i_10] = ((/* implicit */unsigned short) var_9);
                    }
                }
                var_32 = ((/* implicit */unsigned char) (~(arr_41 [i_5 - 1] [i_5 + 1] [i_5 + 3])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_68 [i_17] [i_16] [i_5] [i_0] [i_0])) < (((/* implicit */int) arr_57 [i_17] [i_16] [i_5] [i_16] [i_0])))))));
                            arr_77 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_16] [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 + 2]))) : (arr_39 [i_5 - 1] [10] [i_16] [i_5 - 1])));
                            var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-7266)) ? (((/* implicit */int) (unsigned short)35486)) : (((/* implicit */int) (unsigned short)35485))));
                        }
                    } 
                } 
            }
            for (short i_18 = 1; i_18 < 9; i_18 += 1) /* same iter space */
            {
                arr_82 [i_0] [i_4] [i_4] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) (short)-7265))));
                arr_83 [5U] [i_18] = arr_15 [(unsigned char)1];
            }
            arr_84 [i_0] = ((/* implicit */unsigned int) 1953142242);
            arr_85 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_28 [(short)2] [i_4] [(short)2] [(short)2]))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_88 [i_0] [i_19] [i_0] = ((/* implicit */int) ((unsigned int) var_1));
            arr_89 [i_19] [(unsigned short)4] = ((/* implicit */unsigned long long int) arr_25 [i_19] [i_0] [7ULL] [i_0]);
            arr_90 [i_0] [i_19] = ((/* implicit */int) var_7);
            arr_91 [i_19] = ((/* implicit */unsigned short) arr_30 [i_0] [(unsigned char)8] [i_0]);
        }
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-104)) / (((/* implicit */int) arr_37 [i_20] [i_20] [i_20]))))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_34 [i_20] [i_20] [i_20] [i_20] [i_20])))))));
        arr_94 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_20])) | (((/* implicit */int) arr_0 [i_20]))));
        arr_95 [i_20] = ((/* implicit */short) (+(((/* implicit */int) arr_50 [i_20]))));
        var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [(signed char)4] [(signed char)4] [i_20])) ? (2633099646U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_20] [i_20] [i_20])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_0) < (arr_21 [0U] [i_20] [i_20]))))));
    }
    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (~(var_1))))));
}
