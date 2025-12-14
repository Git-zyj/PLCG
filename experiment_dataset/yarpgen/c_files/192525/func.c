/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192525
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_0]);
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (var_6)))) : (max((127), (((/* implicit */int) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_21 = arr_3 [i_1];
        arr_4 [i_1] = ((/* implicit */signed char) ((int) (signed char)23));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_22 = ((/* implicit */int) arr_6 [(signed char)0]);
            var_23 = ((/* implicit */int) min((var_23), (arr_0 [i_2 - 1])));
        }
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
        {
            var_25 &= (signed char)-46;
            var_26 += ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) (signed char)-2))));
            var_27 = ((/* implicit */int) (signed char)123);
        }
        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
        {
            arr_17 [i_3] [i_3] [i_5 - 3] = ((/* implicit */int) (signed char)-67);
            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)-1)) : (var_6)))));
        }
        for (signed char i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_25 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (-(arr_9 [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_3] [i_7] [i_3])) != (2097024)))) : ((~(((/* implicit */int) (signed char)45)))));
                        arr_26 [i_3] [i_6 - 3] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) var_3)) == (((arr_5 [i_8]) ^ (arr_15 [i_3])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (int i_10 = 3; i_10 < 8; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 6; i_11 += 1) 
                        {
                            arr_39 [i_3] [i_6] [i_3] [i_10 - 3] [i_3] = arr_29 [i_3] [i_3] [i_3] [i_3];
                            arr_40 [i_3] [i_3] [i_6 - 3] [i_3] [(signed char)6] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_6 - 3] [i_10 - 3] [i_3])) != (-663193970)));
                            arr_41 [i_3] [i_3] [i_3] [i_9] [i_10] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_3] [i_6] [i_9] [i_3] [i_11 + 2] [(signed char)2]))))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)-91)))) : (((552802727) + (arr_19 [i_3])))));
                            arr_42 [7] [i_6] [i_9] [i_3] [i_11 + 1] = ((arr_38 [(signed char)5] [i_10] [i_10] [i_11] [i_11 + 4] [i_11 + 4] [i_11 + 2]) + (((/* implicit */int) arr_20 [i_3] [i_3] [i_3])));
                        }
                        for (signed char i_12 = 1; i_12 < 8; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 100663296))))) | (((/* implicit */int) var_17)))))));
                            arr_46 [(signed char)8] [i_6] [i_9] [i_10] [i_3] [i_12] = ((((/* implicit */int) (signed char)-77)) & (((/* implicit */int) (signed char)56)));
                        }
                        for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_30 = ((arr_9 [i_6]) | (arr_44 [i_3] [i_6] [i_9] [i_10] [i_13]));
                            arr_49 [i_9] [i_3] [(signed char)2] = ((/* implicit */signed char) ((((arr_36 [i_3] [i_3] [i_3] [i_3]) != (arr_45 [i_3] [i_3]))) ? (((/* implicit */int) arr_28 [i_3] [i_6 + 1])) : (((((/* implicit */_Bool) 1048064)) ? (((/* implicit */int) (signed char)3)) : (arr_7 [i_10] [i_9] [i_3])))));
                        }
                        var_31 *= ((/* implicit */signed char) arr_15 [i_9]);
                        arr_50 [i_3] [(signed char)1] [i_3] = ((/* implicit */signed char) ((arr_22 [i_3]) == (arr_22 [i_3])));
                        var_32 -= ((((/* implicit */_Bool) arr_34 [i_6 - 3] [i_10 + 1])) ? (((/* implicit */int) ((-131072) >= (arr_0 [i_9])))) : ((~(-1064962136))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((arr_19 [i_6 + 1]) + (((/* implicit */int) var_1))));
                            arr_53 [(signed char)8] [i_3] [i_6] [i_9] [i_9] [i_14] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-115)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_3] [i_6] [i_9] [i_10 - 3])) && (((/* implicit */_Bool) arr_37 [i_3] [i_6] [i_9] [i_10])))))));
                            var_34 = ((/* implicit */signed char) ((((int) arr_23 [i_3] [i_6] [i_9] [i_10 - 2] [0] [i_14])) == (((((/* implicit */int) arr_1 [i_6 - 3])) - (((/* implicit */int) arr_52 [i_3] [i_6] [i_9] [i_10 - 3] [i_9] [9] [i_14]))))));
                            var_35 = ((/* implicit */signed char) arr_45 [i_6 - 2] [i_10 + 2]);
                        }
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                        {
                            var_36 = arr_6 [i_3];
                            arr_56 [i_3] [i_6] [i_9] [i_3] [2] = ((/* implicit */signed char) ((arr_23 [i_6 - 3] [i_6 - 3] [i_15] [i_10] [i_15] [i_10 - 2]) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) (signed char)-1)))))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_3] [i_6 + 1])) ? (arr_34 [(signed char)4] [i_6 + 1]) : (arr_34 [(signed char)1] [i_6 + 1])));
            var_38 = ((arr_23 [i_3] [i_6 - 3] [(signed char)2] [i_6 - 2] [i_6] [i_6 + 1]) >> (((236499345) - (236499329))));
        }
        for (int i_16 = 4; i_16 < 7; i_16 += 1) 
        {
            arr_60 [i_3] [i_3] [i_16 - 2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_16])))) ? (arr_45 [i_3] [i_16 - 4]) : (((/* implicit */int) arr_18 [i_16 + 1] [i_16 + 1] [i_16 + 2]))));
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                for (int i_18 = 2; i_18 < 9; i_18 += 1) 
                {
                    {
                        var_39 = ((/* implicit */int) (signed char)112);
                        arr_66 [i_3] = ((/* implicit */signed char) arr_0 [i_18]);
                        arr_67 [i_3] [i_16] = ((/* implicit */int) ((0) == (((/* implicit */int) (signed char)89))));
                        arr_68 [i_3] [i_17] [i_17] = ((/* implicit */int) var_9);
                    }
                } 
            } 
            arr_69 [i_3] [i_16] [i_16] = ((/* implicit */signed char) (-(267911168)));
            var_40 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))) - (((/* implicit */int) (signed char)63))));
            var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)62)) != (((/* implicit */int) arr_43 [i_16 + 2] [i_3] [i_16] [i_3] [5] [i_3] [(signed char)6]))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 10; i_19 += 1) 
        {
            for (int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                {
                    var_42 |= ((/* implicit */int) ((arr_22 [i_3]) < (var_7)));
                    /* LoopSeq 1 */
                    for (int i_21 = 3; i_21 < 9; i_21 += 3) 
                    {
                        var_43 -= ((/* implicit */int) ((((/* implicit */int) arr_72 [i_20])) <= (939524096)));
                        var_44 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [i_21 - 3])) || (((/* implicit */_Bool) var_4))));
                        var_45 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_21 - 1] [i_21 + 1]))));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [9] [i_3])) ? (1360033692) : (((/* implicit */int) ((26) < (arr_44 [i_3] [i_3] [i_3] [i_3] [i_3]))))));
        var_47 += ((/* implicit */int) arr_1 [i_3]);
    }
    for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
    {
        arr_78 [i_22] [14] = arr_77 [i_22] [i_22];
        var_48 = max((min((((var_4) ^ (((/* implicit */int) arr_1 [i_22])))), (((/* implicit */int) arr_1 [i_22])))), ((~((-(((/* implicit */int) arr_76 [i_22])))))));
        arr_79 [i_22] = ((((((/* implicit */_Bool) min((1623456396), (arr_0 [i_22])))) ? (((((/* implicit */_Bool) arr_1 [i_22])) ? (((/* implicit */int) arr_77 [i_22] [i_22])) : (arr_0 [i_22]))) : (((((/* implicit */_Bool) 1074229890)) ? (-2012559409) : (arr_0 [i_22]))))) + (((((/* implicit */int) arr_76 [i_22])) | (((/* implicit */int) arr_1 [i_22])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_23 = 2; i_23 < 10; i_23 += 1) /* same iter space */
    {
        var_49 = ((/* implicit */signed char) -1303974935);
        var_50 = arr_0 [i_23 - 2];
        var_51 = ((((/* implicit */_Bool) arr_80 [i_23 - 2])) ? (arr_80 [i_23 + 1]) : (arr_80 [i_23 - 1]));
    }
    for (int i_24 = 2; i_24 < 10; i_24 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_25 = 0; i_25 < 11; i_25 += 3) 
        {
            arr_88 [i_24] [i_24] = ((/* implicit */signed char) min((262143), (((/* implicit */int) (signed char)-6))));
            var_52 = ((/* implicit */int) max((var_52), (((((((/* implicit */int) (signed char)-56)) + (2147483647))) << (((((((((/* implicit */int) (signed char)-91)) == (((/* implicit */int) (signed char)-1)))) ? (-663193977) : (max((((/* implicit */int) (signed char)10)), (1303974935))))) - (1303974935)))))));
        }
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 11; i_26 += 2) 
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 11; i_27 += 1) 
            {
                for (int i_28 = 0; i_28 < 11; i_28 += 4) 
                {
                    {
                        arr_97 [i_24] [i_26] [i_28] [i_28] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_83 [i_24]) | (26))))));
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-1)) >= (arr_82 [i_24]))))), (((((/* implicit */int) arr_96 [i_24] [i_27])) + (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) (signed char)127))))))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_29 = 0; i_29 < 11; i_29 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_30 = 0; i_30 < 11; i_30 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_31 = 2; i_31 < 10; i_31 += 4) /* same iter space */
                    {
                        var_54 *= (signed char)(-127 - 1);
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)124)) ? (arr_92 [i_24]) : ((-(((/* implicit */int) (signed char)-1))))));
                    }
                    for (signed char i_32 = 2; i_32 < 10; i_32 += 4) /* same iter space */
                    {
                        arr_109 [i_24] [i_26] [i_29] [i_30] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_84 [i_24] [i_30])) ? (((112452347) / (((/* implicit */int) arr_91 [i_24] [i_26] [i_29] [i_30])))) : (((/* implicit */int) arr_100 [i_24 - 1] [i_32 - 1] [i_32]))));
                        var_56 |= ((/* implicit */signed char) var_10);
                    }
                    for (signed char i_33 = 2; i_33 < 10; i_33 += 4) /* same iter space */
                    {
                        arr_113 [i_24 - 1] [i_24 - 1] [i_29] [i_24] [i_29] [i_29] = ((/* implicit */int) ((arr_98 [i_24 + 1] [i_24] [i_33 - 2] [i_33 + 1]) != (((/* implicit */int) arr_108 [i_24 - 2] [i_24]))));
                        var_57 = ((/* implicit */int) min((var_57), (((((/* implicit */_Bool) (signed char)-25)) ? (((((/* implicit */_Bool) 1818045538)) ? (((/* implicit */int) arr_81 [i_24])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_112 [i_24 - 1] [i_24 - 2] [8]))))));
                    }
                    arr_114 [i_30] [i_29] [i_29] [i_30] [i_24 - 1] [i_30] |= ((/* implicit */int) ((((/* implicit */int) ((var_12) >= (((/* implicit */int) arr_1 [i_26]))))) < (136109499)));
                    arr_115 [i_24] [i_24] [i_29] = (i_24 % 2 == 0) ? ((((((+(((/* implicit */int) (signed char)-7)))) + (2147483647))) << (((((((((/* implicit */_Bool) 803241112)) ? (arr_111 [i_24] [i_26] [i_29] [i_30] [i_30]) : (15))) + (958087445))) - (25))))) : ((((((+(((/* implicit */int) (signed char)-7)))) + (2147483647))) << (((((((((((/* implicit */_Bool) 803241112)) ? (arr_111 [i_24] [i_26] [i_29] [i_30] [i_30]) : (15))) + (958087445))) - (25))) - (218967665)))));
                    arr_116 [i_24] [i_26] [i_29] [i_24] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_24 - 2]))));
                }
                for (int i_34 = 3; i_34 < 10; i_34 += 1) 
                {
                    arr_121 [i_24] [i_26] [i_24] [i_34] [i_24 + 1] [i_29] = (signed char)0;
                    var_58 &= ((/* implicit */signed char) 0);
                    arr_122 [i_24] [i_24] [(signed char)8] [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) -282017239)) ? (-795645701) : (((/* implicit */int) (signed char)42))));
                    /* LoopSeq 1 */
                    for (signed char i_35 = 2; i_35 < 9; i_35 += 1) 
                    {
                        arr_126 [i_24] [4] [4] [i_34] [i_35 + 1] = (~(((arr_80 [i_34]) | (arr_84 [i_34] [i_35]))));
                        var_59 -= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_102 [(signed char)6] [i_29] [2] [i_26]))))));
                        var_60 = arr_82 [i_24];
                        arr_127 [i_24 - 1] [i_24] [i_29] [i_34] [i_35] = ((/* implicit */signed char) 554327488);
                        var_61 = ((/* implicit */signed char) arr_94 [(signed char)9] [i_26] [(signed char)9] [i_34] [i_35]);
                    }
                    var_62 = ((/* implicit */signed char) -1346796989);
                }
                var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) (signed char)-52))));
            }
            /* vectorizable */
            for (int i_36 = 0; i_36 < 11; i_36 += 1) /* same iter space */
            {
                arr_132 [i_24] [i_24] [9] [3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_131 [i_24] [i_26] [i_24])) ? (((/* implicit */int) arr_95 [i_24] [7])) : (321518930))) ^ (((-27) ^ (((/* implicit */int) var_5))))));
                var_64 = (signed char)-1;
                arr_133 [i_24 + 1] [i_26] [i_24] = ((/* implicit */int) (signed char)-10);
            }
            /* vectorizable */
            for (int i_37 = 0; i_37 < 11; i_37 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_38 = 0; i_38 < 11; i_38 += 1) 
                {
                    arr_141 [i_24] [i_26] [i_37] [i_38] = ((/* implicit */signed char) (+(arr_119 [i_24] [i_38] [i_38] [9])));
                    var_65 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_107 [i_24] [(signed char)6] [i_26] [i_37] [i_26] [i_38]))))) ? (((/* implicit */int) arr_6 [i_24 - 2])) : (((/* implicit */int) var_0)));
                    var_66 = arr_129 [i_24] [i_38] [i_24 + 1];
                }
                var_67 = ((/* implicit */signed char) arr_82 [i_24]);
                var_68 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_104 [i_24 - 2] [i_24] [i_24] [i_24] [i_24] [i_24 + 1]))));
                var_69 = ((/* implicit */signed char) -3);
            }
        }
    }
    var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) (~((~(((/* implicit */int) var_14)))))))));
    var_71 = min((((/* implicit */int) (signed char)63)), (((max((var_6), (((/* implicit */int) var_15)))) | (((int) var_14)))));
}
