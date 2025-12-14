/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46190
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
    var_14 = ((/* implicit */unsigned int) min(((-((~(((/* implicit */int) var_4)))))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-26310)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((arr_9 [i_1 - 1] [i_2] [i_2 + 4] [i_2 - 3] [6] [i_2]) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 2])) : (((/* implicit */int) var_1))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_16 [i_2] [i_3] [4] [i_3] [i_3] = ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(short)8]))))));
                        arr_17 [i_0] [i_4] [(short)5] [i_2] = ((/* implicit */_Bool) var_0);
                        var_17 = ((/* implicit */unsigned int) var_11);
                    }
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        arr_20 [i_5 - 2] [i_3] [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) var_2);
                        arr_21 [i_2] [i_1] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (((/* implicit */unsigned int) var_7)) : (var_13)))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        var_19 ^= ((/* implicit */short) ((arr_5 [i_5 + 1] [i_1 - 1]) - (arr_5 [i_5 - 1] [i_1 - 1])));
                        var_20 *= ((/* implicit */short) 1182732926303233640LL);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_2] [i_0] [i_2] [i_2] [i_2 + 4] [i_3] [i_6] = ((/* implicit */short) (~(arr_3 [i_2 + 3] [i_1 - 1])));
                        arr_26 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)117))));
                        arr_27 [i_2] = var_13;
                        var_21 *= ((/* implicit */unsigned long long int) arr_7 [(short)7] [i_1] [i_1] [i_1]);
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_28 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_22 [(unsigned short)3] [i_2 + 2] [i_2 + 4]) : (arr_24 [i_2] [i_2 - 3] [i_2 - 3] [i_2 + 2] [(signed char)10]))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_33 [(unsigned char)19] [(unsigned char)19] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) -76543256)) ^ (4169497063249842147LL)));
                        var_23 *= ((/* implicit */int) ((((/* implicit */int) arr_31 [i_8 - 1] [(short)15] [i_8] [i_8 + 1] [i_8 + 1])) < (((/* implicit */int) var_4))));
                        var_24 = ((/* implicit */signed char) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8 + 1] [i_2] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1]))) : ((-(166190083U)))));
                    }
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        arr_36 [i_9] [i_9] &= ((((/* implicit */_Bool) arr_31 [i_1 - 1] [i_1 - 1] [i_2] [i_7] [i_9 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 1] [i_2] [i_7] [i_9 + 1])));
                        var_25 = arr_7 [i_0] [i_1] [(unsigned short)16] [i_1];
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_39 [i_10] [i_7] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (arr_14 [i_2] [i_2 - 3] [i_2 + 2] [i_7] [i_1 - 1])));
                        arr_40 [i_10] [i_1] |= ((/* implicit */int) ((arr_24 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 3] [i_2 + 1]) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_2 + 4] [i_1 - 1] [i_10] [i_10])))));
                        var_26 = ((/* implicit */signed char) ((arr_9 [i_2 + 1] [i_2] [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_2 + 2]) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 1]))));
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    arr_44 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_11] [i_2] [i_11] [i_11] [i_11] [i_11]);
                    var_27 = ((/* implicit */short) 4294967275U);
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */short) var_9);
                        arr_48 [i_2] [i_1] [(unsigned short)11] [i_1] [i_2] [i_12] = ((/* implicit */unsigned char) ((arr_24 [(unsigned short)13] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) | (arr_24 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_2] [i_1 - 1])) && (((/* implicit */_Bool) arr_43 [i_1] [i_1 - 1] [i_2] [i_1 - 1]))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 + 2] [i_2 - 3] [i_14 + 1])) ? (76543255) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2 + 2] [i_2 - 3] [i_14 + 1]))));
                            var_31 = ((/* implicit */short) arr_8 [i_0] [i_2] [i_0] [(signed char)1] [i_0] [i_0]);
                            arr_54 [i_0] [i_1] [10ULL] [i_2] [i_14] = ((/* implicit */unsigned char) arr_7 [i_1 - 1] [i_2 - 1] [i_14 - 1] [i_14]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    arr_58 [i_0] [i_15] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((arr_22 [i_2 - 2] [i_2 - 1] [i_1 - 1]) / (arr_8 [i_0] [i_15] [i_15] [i_2 + 3] [i_2 + 2] [18LL])));
                    arr_59 [(short)16] [i_15] [i_2] = arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                }
            }
            for (short i_16 = 4; i_16 < 17; i_16 += 4) 
            {
                arr_62 [i_0] [i_0] [i_0] [i_0] = arr_5 [i_16 + 4] [i_1 - 1];
                var_32 += arr_60 [i_0] [(_Bool)1] [i_16 + 2];
                arr_63 [i_1] [i_1] [i_0] = ((/* implicit */int) (short)-5618);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                var_33 = ((/* implicit */int) 3562641232U);
                var_34 = ((/* implicit */unsigned short) arr_6 [i_17]);
                /* LoopSeq 1 */
                for (signed char i_18 = 1; i_18 < 20; i_18 += 4) 
                {
                    arr_69 [i_18] [(unsigned char)2] [i_0] [i_18] = ((/* implicit */unsigned char) var_12);
                    arr_70 [i_18] = ((/* implicit */long long int) arr_68 [i_18]);
                    arr_71 [i_0] [i_18] = ((/* implicit */signed char) 7620911760723596729ULL);
                }
            }
            arr_72 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_34 [(unsigned short)17] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_1] [i_1 - 1])) ? (arr_64 [i_1] [i_1 - 1]) : (((/* implicit */long long int) arr_49 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])))))));
        }
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_20] [i_20] [i_20] [i_20]))));
                /* LoopSeq 2 */
                for (unsigned char i_21 = 4; i_21 < 20; i_21 += 2) 
                {
                    var_37 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 7620911760723596716ULL)) ? ((+(((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) arr_29 [i_21 + 1]))));
                    arr_81 [i_19] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_21 - 4] [i_21 - 3] [i_21 - 4] [i_21] [i_21] [i_21]))) / (14996754899143531648ULL)));
                    var_38 |= ((/* implicit */signed char) 1225078086);
                    /* LoopSeq 4 */
                    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_21 - 2])) ? (((/* implicit */int) arr_1 [i_21 - 4])) : (((/* implicit */int) arr_1 [i_21 - 3]))));
                        arr_84 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_21] [i_21] [i_21 - 3] [i_21 - 2] [i_21 - 4] [i_21 + 1]))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -786935054)) ? (76543255) : (((/* implicit */int) (unsigned char)125))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-2693949063368710279LL)))) : (((/* implicit */int) var_9))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_15 [i_0] [i_21] [i_20] [i_20] [i_21 - 2] [(unsigned char)18])))))))));
                        arr_87 [(short)1] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_42 [i_21] [i_21 - 3] [i_21 - 2] [i_21] [i_21 - 3] [i_21])));
                        var_42 ^= ((/* implicit */signed char) ((arr_82 [i_20] [i_20] [i_20] [i_21 - 3] [i_21 - 2] [i_21 - 1]) % (arr_82 [5LL] [i_0] [i_20] [i_21 + 1] [i_21 - 1] [i_21 - 4])));
                    }
                    for (unsigned int i_24 = 0; i_24 < 21; i_24 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) var_12);
                        arr_90 [i_24] = ((((/* implicit */_Bool) arr_23 [i_20] [i_20] [i_20] [i_20] [i_21 - 4] [i_21] [i_21 - 3])) ? (((/* implicit */int) arr_23 [i_0] [i_19] [i_19] [2ULL] [i_21 - 3] [i_21] [i_21 - 2])) : (((/* implicit */int) var_5)));
                        var_44 = ((/* implicit */unsigned long long int) (~(var_7)));
                        arr_91 [i_0] = ((/* implicit */int) ((long long int) var_0));
                        arr_92 [i_0] [i_19] [i_20] [i_21 - 4] [i_19] = ((((((/* implicit */_Bool) arr_41 [i_24] [i_21] [i_21 + 1] [i_20] [i_21] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [0LL] [i_21] [i_0]))) : (arr_61 [i_20] [i_19] [i_0]))) ^ (((((/* implicit */_Bool) var_11)) ? (4439069489963062520LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))))));
                    }
                    for (unsigned long long int i_25 = 3; i_25 < 20; i_25 += 1) 
                    {
                        var_45 *= ((/* implicit */unsigned int) arr_24 [i_21 + 1] [i_0] [i_25 + 1] [i_21 + 1] [i_25]);
                        var_46 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_19] [i_20] [i_21] [i_25])))))));
                    }
                }
                for (long long int i_26 = 1; i_26 < 17; i_26 += 2) 
                {
                    arr_99 [i_0] [5LL] [5LL] [i_26] [i_26] [i_0] = ((/* implicit */short) ((unsigned char) var_7));
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_85 [i_0] [i_19] [i_20] [i_20] [i_0])) ? (((/* implicit */int) arr_15 [18] [8ULL] [i_19] [i_26] [i_26 - 1] [i_26])) : (((/* implicit */int) arr_31 [i_26 + 4] [i_26] [i_26 + 1] [i_26] [i_26]))));
                }
                /* LoopSeq 1 */
                for (signed char i_27 = 2; i_27 < 20; i_27 += 1) 
                {
                    arr_103 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5610)) ? (4439069489963062507LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_29 [i_27 - 1]))));
                    var_48 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_27 - 1] [4U] [i_27 - 2] [16] [i_27]))));
                    var_49 = ((/* implicit */unsigned short) (-(arr_30 [i_27 - 1] [i_27] [(_Bool)1] [i_27 + 1] [i_19])));
                }
                arr_104 [i_0] [i_0] [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_19] [i_19] [(signed char)20] [i_19])) ? (var_7) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_79 [i_20] [i_19] [i_19] [i_0]))))));
            }
            for (int i_28 = 1; i_28 < 20; i_28 += 2) 
            {
                var_50 = ((/* implicit */short) var_10);
                arr_107 [i_0] [i_19] [i_0] = ((/* implicit */_Bool) (unsigned char)98);
            }
            for (short i_29 = 1; i_29 < 20; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_30 = 0; i_30 < 21; i_30 += 1) 
                {
                    for (signed char i_31 = 0; i_31 < 21; i_31 += 4) 
                    {
                        {
                            var_51 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_0] [i_29 + 1] [i_29] [i_30] [i_31] [i_31]))));
                            var_52 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_96 [i_31] [i_30] [i_29] [i_19] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [2] [i_29] [i_30])) : (arr_65 [i_0] [i_0]))))));
                            arr_116 [i_29] [i_19] = ((/* implicit */int) ((((/* implicit */int) var_0)) >= (arr_98 [i_19] [i_29] [i_30] [i_31])));
                        }
                    } 
                } 
                var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (arr_66 [i_0]) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_2))));
                var_54 = ((/* implicit */short) (~(((/* implicit */int) arr_102 [i_29] [(short)3] [i_29 - 1] [i_29] [(unsigned short)2]))));
                arr_117 [i_29] [i_19] [18] = ((/* implicit */unsigned long long int) arr_95 [i_29] [i_29 + 1] [i_29 + 1] [i_29]);
                arr_118 [i_19] [i_29] [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((arr_5 [i_19] [i_19]) - (254289354))))))));
            }
            arr_119 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_68 [(_Bool)1]))) / (arr_111 [i_19] [i_19] [20LL] [i_19] [i_19])));
        }
    }
    var_55 &= ((/* implicit */int) ((unsigned short) var_12));
    var_56 = ((/* implicit */_Bool) ((signed char) -273628290));
}
