/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190258
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0] [(short)1]);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */short) arr_12 [i_4 - 1] [i_0] [i_2] [i_3 - 2] [i_0 - 1] [(short)9]);
                            var_13 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)181)) << (((arr_1 [i_0]) - (3899855058609439203ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)181)) << (((((arr_1 [i_0]) - (3899855058609439203ULL))) - (18360116622356327166ULL))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            var_14 -= (~(((((/* implicit */int) (unsigned char)75)) / (arr_2 [i_1] [i_1]))));
                            var_15 = ((/* implicit */short) arr_6 [2] [(_Bool)1] [i_0]);
                            arr_18 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_7 [i_0] [(unsigned char)9]))))));
                        }
                        for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_1] [i_6 + 1] [i_0 + 1] [(short)8])) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_2]))));
                            var_16 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0 - 2] [i_0]) : (((/* implicit */int) arr_13 [i_6 - 1] [i_3 + 1] [i_0 - 2])));
                            var_17 *= ((/* implicit */_Bool) var_2);
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_25 [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_2]);
                            var_18 *= ((((/* implicit */_Bool) -7)) || (((/* implicit */_Bool) arr_17 [i_3 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 2])));
                            var_19 = ((arr_10 [i_0 - 2] [i_0 - 2] [i_2] [(unsigned char)9] [6] [i_0]) / (arr_10 [i_7] [(_Bool)1] [(short)1] [(short)1] [(short)1] [i_0]));
                            arr_26 [i_0] [i_0] = ((/* implicit */short) (((~(arr_2 [i_0] [(unsigned char)7]))) <= (((((/* implicit */int) (unsigned char)33)) ^ (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    arr_27 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * ((+(((/* implicit */int) arr_0 [i_1]))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [4] [i_1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_17 [7] [(_Bool)1] [i_8] [i_1] [(short)5]))))) : (((/* implicit */int) (short)31829))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_9] [(short)3] [i_0] [i_0 + 2] [i_0] = ((((/* implicit */int) arr_7 [i_0] [(short)7])) < (arr_2 [i_0] [(short)2]));
                        var_21 = ((arr_16 [i_0 - 2]) > (((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0 + 2] [(_Bool)1] [i_0] [i_0 + 2])));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_38 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [(short)7] [i_0] = ((/* implicit */unsigned long long int) arr_24 [i_11] [i_0] [i_0] [i_8] [i_8] [i_0] [i_0]);
                            arr_39 [i_11] [i_10] [i_0] [i_0] [i_1] [i_0 - 2] = ((/* implicit */short) arr_2 [i_0] [i_1]);
                            arr_40 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-18397))));
                            arr_41 [i_0] [i_0] [i_0] = arr_21 [i_11] [i_0] [i_10] [3] [i_1] [i_1] [i_0];
                        }
                        arr_42 [i_0] [i_0] [i_8] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (~(var_8)));
                    }
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_12] [(_Bool)1] [4ULL] [i_1] [i_1])) << (((((((/* implicit */_Bool) max((12209528105588157638ULL), (arr_28 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12] [i_1] [i_0 + 2] [i_0 + 2] [i_1] [i_0]))) : ((~(arr_34 [i_12] [i_12] [i_12] [8ULL] [i_1]))))) - (44ULL)))));
                    arr_47 [i_0] [i_12] [i_1] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                }
                for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (short)-28949))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_32 [i_0] [(short)3] [i_14 - 2] [i_14] [4] [i_15]))));
                            arr_57 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_0 + 2] [i_1] [i_14 - 1] [i_0 + 2] [i_15] [i_0]))));
                            arr_58 [i_0] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                        arr_59 [i_0] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_25 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_36 [i_0 - 1])), (arr_48 [i_1] [i_1] [i_13] [i_0 + 1]))))) & (((((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_0 + 1] [i_1])) ? ((+(var_5))) : (arr_1 [i_1])))));
                        arr_64 [i_13] [i_1] [i_0] [i_13] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)19478)), (arr_1 [i_0])))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_45 [i_0] [i_1]))))));
                        var_26 = ((min((arr_36 [i_0 - 2]), ((_Bool)1))) ? (((((/* implicit */int) (_Bool)1)) - (-1676352432))) : (((((/* implicit */int) max(((short)18397), (((/* implicit */short) (_Bool)1))))) - (((((/* implicit */int) arr_48 [i_16] [i_13] [1] [i_0 + 2])) << (((((/* implicit */int) (short)13520)) - (13494))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_17] [(_Bool)1] [(_Bool)1])) << (((max((1566825203), (((/* implicit */int) arr_50 [i_1] [i_1] [i_1] [i_1])))) - (1566825186)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-23164)) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_13]), (arr_67 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_28 *= ((/* implicit */_Bool) ((((68719476735ULL) << (((-1566825203) + (1566825208))))) % (((/* implicit */unsigned long long int) ((-769799283) - (-1676352432))))));
                        arr_69 [i_0] [i_1] [i_1] [i_1] [i_1] = arr_20 [i_0] [i_1] [i_13] [i_17] [i_1] [(_Bool)0] [i_17];
                        arr_70 [i_0] [i_0] [i_0 + 1] [(short)1] = (unsigned char)191;
                    }
                    var_29 = (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) arr_50 [i_0] [i_0] [3] [i_0 + 1]))))) ? (((/* implicit */int) arr_67 [i_0 - 2] [i_1] [i_13] [i_0 - 2])) : (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) arr_14 [i_13] [i_1] [i_0] [i_0] [i_0]))))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    var_30 -= ((/* implicit */unsigned long long int) 1676352444);
                    arr_73 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)-14342);
                    var_31 ^= ((((arr_8 [i_0 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (short)-8192)))) == ((+(((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2])))));
                    /* LoopSeq 3 */
                    for (short i_19 = 4; i_19 < 9; i_19 += 3) 
                    {
                        arr_77 [i_19] [i_19 - 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_61 [i_19] [(_Bool)0] [(_Bool)0] [i_1] [(_Bool)0]);
                        arr_78 [i_0] = ((/* implicit */_Bool) ((min((((((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_1])) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_52 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])))) % (((/* implicit */int) (short)-18398))));
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 1) 
                    {
                        var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned long long int) -697232734)) : (0ULL)))) ? (2147483647) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-3382))))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)0)) >> (((arr_81 [i_0 + 2] [i_0 - 1] [2ULL] [i_0 - 2]) + (1167997538)))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 10; i_21 += 1) 
                        {
                            arr_84 [i_0] [i_0] [i_0] [i_21] [(_Bool)1] = ((arr_55 [i_0] [i_20 + 1] [i_20 + 1] [i_0 - 2] [i_0 + 1] [i_0]) || (((/* implicit */_Bool) (short)14314)));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((arr_16 [i_0 - 1]) & (((((/* implicit */int) (short)16934)) ^ (((/* implicit */int) (_Bool)1)))))))));
                            var_35 *= ((/* implicit */int) (_Bool)1);
                        }
                        /* vectorizable */
                        for (short i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            arr_88 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)-39)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_62 [(_Bool)0]))))));
                            var_36 = ((/* implicit */short) ((((/* implicit */int) arr_21 [6] [i_1] [i_18] [i_1] [i_22] [i_20 + 1] [1ULL])) < (arr_10 [i_0] [i_22] [i_20 + 1] [i_0 + 2] [i_0 + 1] [i_0])));
                            arr_89 [i_0] [1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_68 [i_20 - 1] [i_0] [i_0 + 1] [i_0] [i_0])) < (((/* implicit */int) (_Bool)1))));
                            arr_90 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0 - 1] = ((/* implicit */short) ((((217564924) * (((/* implicit */int) (_Bool)0)))) < (arr_2 [i_0] [i_1])));
                        }
                        for (int i_23 = 0; i_23 < 10; i_23 += 3) 
                        {
                            arr_93 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_19 [i_23] [i_0] [(unsigned char)5] [(unsigned char)5] [i_0] [i_0]))))));
                            var_37 = ((/* implicit */int) arr_34 [i_0] [i_0] [i_18] [i_18] [i_1]);
                        }
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (~(((((1137829523453410500ULL) ^ (((/* implicit */unsigned long long int) -2147483637)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 + 1]))))))))));
                        arr_94 [(short)0] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (-697232738)));
                    }
                    for (unsigned char i_24 = 1; i_24 < 9; i_24 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_25 = 0; i_25 < 10; i_25 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (short)-5112)))) || (((/* implicit */_Bool) arr_14 [0ULL] [i_1] [0ULL] [i_25] [0ULL]))))));
                            arr_99 [i_0] [i_1] [i_24] [i_18] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)31361)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)30309)))))), (((/* implicit */int) var_1))));
                            var_40 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((arr_43 [i_0] [i_0 - 1] [i_0] [i_0 - 2]) - (251903757)))))) ? (arr_98 [i_0] [i_18] [(_Bool)1] [i_0]) : (arr_65 [i_0] [i_1] [i_1] [i_24 + 1] [i_24]))), (((/* implicit */int) var_10))));
                            var_41 = ((/* implicit */unsigned char) arr_56 [i_0 + 1] [i_0 + 1] [i_0 - 2] [(unsigned char)9] [i_0] [7]);
                        }
                        var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)16953))));
                    }
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (+((~(max((18045142664363807175ULL), (((/* implicit */unsigned long long int) (short)5028)))))))))));
                }
                arr_100 [i_0] [i_0] = min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (85783070) : (((/* implicit */int) (short)-4967)))) / (arr_14 [i_1] [i_0] [(short)4] [i_0] [(short)4]))));
                var_44 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)80)) != (((/* implicit */int) (short)-12022)))) ? (((/* implicit */int) arr_20 [i_0 - 2] [i_0 - 2] [i_1] [(unsigned char)3] [i_0 - 2] [i_0] [(_Bool)1])) : ((~(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [(short)7] [i_0] [i_0 - 2] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_26 = 1; i_26 < 21; i_26 += 4) 
    {
        var_45 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_26 - 1]))) >= ((~(var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_103 [i_26]))))) <= (arr_101 [i_26 + 1] [i_26 + 1])))) : (((/* implicit */int) arr_103 [i_26]))));
        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((((((/* implicit */int) arr_103 [i_26])) >> (((arr_101 [i_26] [i_26 - 1]) - (1988063852660265185ULL))))) < (0)))))))));
        /* LoopNest 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_29 = 1; i_29 < 19; i_29 += 4) 
                    {
                        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)32767)))))));
                        arr_113 [i_27] [i_27] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (0ULL));
                    }
                    /* vectorizable */
                    for (unsigned char i_30 = 2; i_30 < 21; i_30 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_31 = 3; i_31 < 21; i_31 += 2) 
                        {
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */int) arr_106 [(short)3])) * (((/* implicit */int) arr_106 [i_30 - 1]))));
                            arr_121 [i_31 - 3] [i_31 - 3] [i_27] [i_31 - 2] = ((/* implicit */_Bool) arr_106 [i_30 - 1]);
                        }
                        arr_122 [i_26 - 1] [i_27] [i_27] [i_26 - 1] [i_26 - 1] = (short)-31961;
                        arr_123 [i_27] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_107 [i_26] [i_26] [i_26]))));
                        arr_124 [i_27] [i_30 + 1] [i_28] [i_28] [i_26] [i_28] = ((/* implicit */int) ((((/* implicit */int) (short)12022)) >= (-2147483626)));
                        arr_125 [i_30 + 1] [i_27] [i_27] [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_117 [i_30] [i_27] [i_30 - 1] [13ULL]))));
                    }
                    arr_126 [i_27] = ((/* implicit */int) (_Bool)1);
                    arr_127 [i_26] [i_27] [i_27] = (short)10989;
                    var_49 -= (!(((-741350701) >= (((/* implicit */int) arr_116 [i_26 + 1] [(_Bool)1] [i_26 + 1] [(_Bool)1] [i_26])))));
                    /* LoopNest 2 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        for (short i_33 = 0; i_33 < 22; i_33 += 2) 
                        {
                            {
                                arr_135 [i_27] = ((/* implicit */unsigned char) (short)8);
                                arr_136 [i_27] [i_32] [i_28] [i_26] [i_27] = ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)114)))), (arr_130 [i_26 - 1] [i_26 + 1] [i_26 + 1] [i_26 + 1])));
                                arr_137 [i_27] [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_119 [i_27] [i_27] [i_28] [i_33] [i_33]))))) & (((/* implicit */int) max(((short)-29887), (((/* implicit */short) (_Bool)1)))))));
                                var_50 = ((/* implicit */unsigned char) ((143833713099145216ULL) < (((/* implicit */unsigned long long int) -2147483647))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_138 [i_26] = ((/* implicit */unsigned char) ((((-2147483607) + (2147483647))) >> (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_103 [(short)6])) > (var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_131 [i_26] [15ULL] [15ULL] [(short)21]))) * (var_5)))))));
    }
}
