/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235950
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((var_0) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1)))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_8 [i_0] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0])) ? (((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (arr_6 [i_0]));
                arr_9 [i_0] [i_2] [i_0 + 2] = (-(arr_7 [i_0] [i_1] [i_2] [0U]));
            }
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0 - 1] [i_3] [i_0] [i_5 + 2] = ((/* implicit */signed char) (+(16962410313306915478ULL)));
                            arr_20 [i_0] [3] [i_1] [3] [i_4 + 2] [i_0] [(_Bool)1] = ((/* implicit */signed char) (~(arr_10 [i_0 - 2] [i_4 + 1])));
                            arr_21 [(unsigned short)3] [i_0] = ((/* implicit */long long int) ((var_9) << (((arr_10 [i_0 - 1] [i_1]) + (1422344485)))));
                            arr_22 [i_0] [i_4 - 2] [i_3] [i_4] [i_5] [i_0] = (~((~(var_5))));
                            arr_23 [i_0] [i_1] [i_0] [i_4] [i_4] [(short)8] = (~(arr_13 [i_0] [i_5 + 2] [i_0]));
                        }
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
            }
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                arr_27 [(unsigned short)2] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_26 [i_0 - 1] [i_1] [i_6 + 1] [i_0 - 1]);
                arr_28 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */_Bool) (short)-28037)) ? (arr_14 [i_0 - 2] [i_0 - 2] [6ULL] [6ULL]) : (((/* implicit */long long int) ((/* implicit */int) (short)-5854))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0])) || (((/* implicit */_Bool) arr_6 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-117)) ? (5574960283259731326ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_6 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 2] [i_0 - 2] [6] [(unsigned char)6] [i_0]))) : (arr_14 [i_0] [i_7] [i_6 + 1] [i_0]))))));
                            arr_35 [i_0 - 2] [i_0] [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8])))))));
                            arr_36 [i_0] [i_1] [i_6] [i_0] [i_8] = ((/* implicit */short) ((arr_10 [i_6 - 1] [i_0 + 2]) ^ (arr_10 [i_6 - 2] [i_0 - 1])));
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) 4055797870059940492LL));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_6] [(unsigned short)8] [i_10] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_16 [i_0 - 1] [(_Bool)0] [5LL] [i_9] [(signed char)3])) << (((((/* implicit */int) var_3)) - (19401)))))));
                            arr_45 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -5877110116724649896LL))));
                            arr_46 [i_0] [i_0] [i_0] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((unsigned int) (short)23388));
                            arr_47 [3ULL] [i_1] [i_6 + 1] [i_0] [(unsigned char)0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-29150)) ? (((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_25 [i_9] [i_10])) : (arr_13 [i_0] [i_9] [i_0]))) : (arr_7 [i_0 + 2] [i_0 - 1] [i_0] [0ULL])));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 2; i_11 < 8; i_11 += 4) 
            {
                arr_52 [(short)0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_2))))));
                arr_53 [i_1] [i_1] [(short)0] [i_1] = ((/* implicit */short) (-(arr_7 [i_0 + 2] [i_0 - 1] [i_1] [i_0 - 2])));
                arr_54 [i_11] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_0 + 2] [i_0] [i_1] [i_11 + 1])) ? (((/* implicit */int) arr_38 [i_0 + 2] [i_11 - 2] [i_11] [7ULL])) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_43 [i_11 - 2] [i_0] [i_0] [i_0])))))));
            }
            arr_55 [i_1] [i_0] = ((/* implicit */long long int) (+(arr_17 [i_0] [i_0] [i_0] [i_1] [i_0])));
            /* LoopSeq 2 */
            for (signed char i_12 = 1; i_12 < 7; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            arr_63 [i_0 + 1] [i_0] [i_12 + 2] [i_12 + 2] [9] [i_0] = ((/* implicit */_Bool) arr_14 [i_0 + 2] [i_1] [i_12] [i_0 + 2]);
                            arr_64 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_12 - 1] [i_12 + 1] [i_12] [(_Bool)1] [i_12 + 2])) + (((/* implicit */int) arr_42 [i_0 - 2] [i_0 + 1] [i_12 - 1] [i_12 - 1] [i_14] [i_14]))));
                        }
                    } 
                } 
                arr_65 [i_0] [i_0] [i_0] [i_1] = arr_50 [i_0] [i_0];
                arr_66 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_1] [i_12])) ? (var_6) : (((/* implicit */unsigned long long int) arr_41 [i_0 - 1] [i_0 - 1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    arr_70 [i_1] |= ((/* implicit */int) ((unsigned short) arr_43 [i_12 + 2] [i_1] [i_1] [i_0 - 2]));
                    arr_71 [i_15] [0ULL] [i_1] [i_1] [i_1] [i_0 - 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14116)) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_15] [i_15] [i_12 - 1] [(signed char)2] [i_0] [i_0 + 2])))));
                    arr_72 [i_0] [2U] [i_0 - 1] [i_0] [i_12 + 2] [i_1] = ((/* implicit */long long int) var_1);
                }
            }
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_79 [i_0] [i_0] [i_16] [i_16] = (((+(var_12))) >= (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_16] [i_17]))));
                    arr_80 [i_1] [i_1] [i_16] [i_17] |= ((/* implicit */signed char) (+(var_6)));
                }
                arr_81 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_77 [i_16] [i_16] [i_1] [i_0])) ? (arr_59 [i_0] [8U] [i_1] [i_1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0 + 2])))));
                arr_82 [i_1] = ((((((/* implicit */int) var_3)) & (((/* implicit */int) var_8)))) ^ (((/* implicit */int) arr_15 [i_0])));
                arr_83 [i_0] [i_1] [i_16] = ((17873288944742868987ULL) + (19ULL));
            }
        }
        arr_84 [i_0] = ((/* implicit */unsigned long long int) ((((18446744073709551615ULL) == (arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) ^ (3786132569U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_0]))) * (var_9)))));
        arr_85 [8U] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)127)))) && (((/* implicit */_Bool) (short)-6))));
        arr_86 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_73 [i_0] [i_0] [i_0 - 2] [4ULL]));
    }
    for (unsigned long long int i_18 = 4; i_18 < 17; i_18 += 4) 
    {
        arr_91 [9] = arr_87 [i_18];
        arr_92 [i_18] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned short i_19 = 2; i_19 < 9; i_19 += 3) 
    {
        arr_96 [i_19 + 2] = ((/* implicit */unsigned char) max((max((max((arr_88 [i_19] [(signed char)9]), (var_6))), (((/* implicit */unsigned long long int) max((arr_90 [i_19 - 1]), (((/* implicit */int) (unsigned short)1729))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_87 [i_19])))))));
        arr_97 [i_19] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((arr_88 [i_19 - 1] [i_19 - 1]), (((/* implicit */unsigned long long int) var_5))))) ? (min((3560436229887744970ULL), (((/* implicit */unsigned long long int) var_1)))) : (arr_88 [i_19] [i_19 + 2])))));
    }
    for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
    {
        arr_100 [i_20] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_99 [i_20] [i_20])) ? (((/* implicit */int) (short)-18045)) : (arr_98 [i_20] [i_20]))), (((/* implicit */int) arr_99 [i_20] [i_20])))), ((~(min((arr_98 [(unsigned short)15] [(signed char)0]), (arr_98 [20U] [i_20])))))));
        /* LoopNest 3 */
        for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                for (unsigned short i_23 = 2; i_23 < 20; i_23 += 2) 
                {
                    {
                        arr_110 [(unsigned char)6] [i_23] [i_23] [i_20] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-1))))), (((long long int) arr_106 [i_23] [i_21] [i_22] [i_22]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_24 = 1; i_24 < 20; i_24 += 1) 
                        {
                            arr_113 [i_20] [i_21] [i_20] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_106 [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1]))));
                            arr_114 [i_22] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_105 [i_22] [i_22] [i_22])) ? (var_0) : (((/* implicit */unsigned long long int) var_5))))));
                        }
                        for (long long int i_25 = 1; i_25 < 20; i_25 += 1) 
                        {
                            arr_117 [i_20] [i_20] [i_23] [i_20] [i_20] = ((/* implicit */unsigned short) var_8);
                            arr_118 [i_22] [(unsigned short)15] [i_22] [(unsigned short)15] [i_22] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) (+(arr_109 [i_20] [i_20] [i_22] [9LL] [(short)8] [i_25])))));
                        }
                    }
                } 
            } 
        } 
        arr_119 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435200ULL)) ? (((/* implicit */int) (short)22306)) : (((/* implicit */int) (signed char)-61))))) ? (arr_98 [(unsigned short)18] [i_20]) : (min((2147483647), (2147483647)))));
    }
    /* LoopNest 3 */
    for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
    {
        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            for (short i_28 = 4; i_28 < 24; i_28 += 1) 
            {
                {
                    arr_129 [i_26] [i_26] [i_26] [i_26] = ((/* implicit */short) max((min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_128 [i_27] [(signed char)18])))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */int) arr_121 [i_26]))))))), (((/* implicit */unsigned long long int) min((((arr_126 [i_26] [i_26] [3ULL] [i_26]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_123 [i_26]))))), (((/* implicit */long long int) arr_121 [i_26])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_29 = 0; i_29 < 25; i_29 += 3) 
                    {
                        arr_133 [(signed char)14] [i_27] [i_26] [(signed char)14] = ((arr_120 [i_28 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) 2546919074U)))))));
                        arr_134 [i_29] [i_26] [i_26] = ((/* implicit */short) arr_125 [(short)3] [i_27] [i_27]);
                    }
                    for (unsigned char i_30 = 2; i_30 < 24; i_30 += 2) 
                    {
                        arr_137 [i_26] [22LL] [(unsigned short)0] [i_27] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)28997), (((/* implicit */unsigned short) (unsigned char)19))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (18446744073709551615ULL))))));
                        arr_138 [i_26] [i_28] [i_27] [i_27] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_131 [i_30 + 1] [i_30] [i_26] [i_26] [i_28 - 4] [i_28 - 3])) ? (((/* implicit */int) arr_131 [i_30 - 1] [(unsigned short)5] [i_26] [i_26] [i_28] [i_28 - 1])) : (((/* implicit */int) arr_131 [i_30 - 1] [i_30] [i_26] [i_26] [15U] [i_28 - 1]))))) | (((unsigned int) arr_131 [i_30 - 1] [i_28 - 1] [i_26] [i_26] [i_28 + 1] [i_28 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
}
