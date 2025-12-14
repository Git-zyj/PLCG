/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208467
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) max((var_7), (arr_1 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_4 [i_0 - 1])))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned char)127))))))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))) * ((~(((/* implicit */int) (unsigned char)255))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) && (((/* implicit */_Bool) (unsigned char)0)))))));
                arr_16 [i_0] [i_0] [i_3] [i_0] = (unsigned char)0;
                arr_17 [i_0] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (((/* implicit */int) var_13)))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)232)))) - (137)))));
            }
            for (unsigned char i_4 = 4; i_4 < 16; i_4 += 3) 
            {
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_2 + 2] [i_4])) : (((/* implicit */int) arr_0 [(unsigned char)11] [i_2]))))));
                arr_21 [i_0] [i_4] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_2 + 4])) > (((/* implicit */int) (unsigned char)57))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                arr_24 [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                arr_25 [i_0] [i_0] = (unsigned char)0;
                /* LoopSeq 4 */
                for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    arr_29 [i_0] [(unsigned char)10] = arr_27 [i_0 + 1];
                    arr_30 [i_0] [i_0] [(unsigned char)6] [(unsigned char)2] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37))))) << (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_18 [(unsigned char)16] [i_2 + 1] [i_5] [i_2 + 1])) : (((/* implicit */int) var_0))))));
                    arr_31 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5]))))) <= (((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (((/* implicit */int) var_12))))));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    arr_36 [i_0] [(unsigned char)16] [i_0] [(unsigned char)10] = var_13;
                    arr_37 [i_0] [i_0] [i_0] [(unsigned char)11] = arr_9 [(unsigned char)0];
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    arr_41 [i_0] [i_2 - 1] [(unsigned char)3] [i_8] = var_5;
                    arr_42 [(unsigned char)3] [i_0] [(unsigned char)3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_0))))) % (((((/* implicit */int) arr_39 [i_0] [(unsigned char)3])) + (((/* implicit */int) arr_23 [(unsigned char)7] [i_5] [i_8]))))));
                    arr_43 [i_0] [i_0] [i_2] [i_0] [i_8] = ((unsigned char) ((unsigned char) (unsigned char)57));
                }
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    arr_46 [i_0] [i_0] [i_0] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)53)) == (((/* implicit */int) (unsigned char)255))))) == (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_5)) - (18)))))));
                    arr_47 [i_0] [i_9] [i_9] [i_9] = (unsigned char)0;
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1))))) & (((/* implicit */int) (unsigned char)220))));
                        arr_51 [i_0] [i_0 + 2] [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0])) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))));
                        arr_52 [i_0] [i_2 - 1] [i_0] [i_0] [(unsigned char)7] [i_10] = ((unsigned char) ((unsigned char) (unsigned char)236));
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_55 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)248))));
                        arr_56 [(unsigned char)3] [i_0] [i_5] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) arr_34 [i_5 - 2] [i_11] [i_0] [i_0] [i_5 - 2] [i_5])) : ((+(((/* implicit */int) (unsigned char)0))))));
                        arr_57 [i_0] [i_2] [i_2] [i_2] [i_11] [(unsigned char)8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_18)) == (((/* implicit */int) var_15))))) <= ((~(((/* implicit */int) var_7))))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        arr_60 [(unsigned char)16] [i_5] [i_5 + 1] [i_5] [(unsigned char)6] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
                        arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) || ((!(((/* implicit */_Bool) (unsigned char)19))))));
                    }
                }
            }
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
            {
                arr_65 [i_0] [(unsigned char)1] [i_0] = (unsigned char)53;
                arr_66 [i_0] = (unsigned char)31;
            }
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
            {
                arr_70 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = var_14;
                arr_71 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)255)))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    arr_77 [i_0] [i_0] [i_0] [i_16] [i_16] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)250))))));
                    arr_78 [i_0] [i_0] [i_15] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_15] [i_0] [i_16])))) % (((/* implicit */int) ((unsigned char) arr_34 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))));
                    /* LoopSeq 4 */
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        arr_81 [i_0] [i_0] [i_0] [i_17] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) <= (((/* implicit */int) arr_10 [i_0] [i_17] [i_15])))))));
                        arr_82 [i_17] [i_0] [i_15] [i_0] [i_0] = (unsigned char)62;
                    }
                    for (unsigned char i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
                    {
                        arr_85 [i_15] [i_0] [i_15] [(unsigned char)4] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned char)236))));
                        arr_86 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) - ((+(((/* implicit */int) (unsigned char)237))))));
                    }
                    for (unsigned char i_19 = 1; i_19 < 16; i_19 += 1) /* same iter space */
                    {
                        arr_90 [i_16] [i_16] [i_16] [(unsigned char)12] [i_16] [(unsigned char)4] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_68 [i_0 + 2] [(unsigned char)0])) << (((((/* implicit */int) var_5)) - (20)))));
                        arr_91 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_16] [i_19 - 1])) != ((-(((/* implicit */int) arr_34 [i_0 + 2] [i_2] [i_0] [i_0] [i_16] [i_19]))))));
                        arr_92 [(unsigned char)0] [i_16] [i_15] [i_16] [i_0] [i_16] [i_15] = (unsigned char)196;
                    }
                    for (unsigned char i_20 = 1; i_20 < 16; i_20 += 1) /* same iter space */
                    {
                        arr_95 [(unsigned char)10] [i_2 - 1] [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_32 [i_0] [i_0] [i_2] [i_0] [i_0] [i_20 + 1])))) <= ((~(((/* implicit */int) (unsigned char)236))))));
                        arr_96 [i_20] [i_0] [i_15] [i_0] [i_0] = arr_69 [i_0] [(unsigned char)15];
                        arr_97 [i_20 - 1] [i_2 + 2] [i_0] [i_2 + 2] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) arr_67 [i_0])) : (((/* implicit */int) arr_67 [i_0]))));
                        arr_98 [(unsigned char)8] [(unsigned char)8] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_0))) / (((/* implicit */int) arr_69 [i_20] [i_20 - 1]))));
                    }
                }
                arr_99 [i_0] [i_0] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16))))));
            }
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) /* same iter space */
            {
                arr_102 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)204)) >= (((/* implicit */int) (unsigned char)25)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12))));
                arr_103 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)220))));
                arr_104 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_0 + 2] [(unsigned char)16]))));
                arr_105 [(unsigned char)12] [i_21] = var_13;
            }
        }
        /* vectorizable */
        for (unsigned char i_22 = 1; i_22 < 13; i_22 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_23 = 0; i_23 < 17; i_23 += 2) 
            {
                arr_112 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                /* LoopSeq 2 */
                for (unsigned char i_24 = 0; i_24 < 17; i_24 += 3) 
                {
                    arr_115 [(unsigned char)15] [i_22 - 1] [i_0] [(unsigned char)0] = var_1;
                    arr_116 [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_75 [i_0 + 2] [i_22]))));
                }
                for (unsigned char i_25 = 4; i_25 < 16; i_25 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_26 = 3; i_26 < 16; i_26 += 4) /* same iter space */
                    {
                        arr_122 [i_0] [i_22 + 2] [(unsigned char)16] [(unsigned char)5] [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_117 [i_0] [i_25 - 1] [(unsigned char)3] [i_0]))));
                        arr_123 [i_0] [i_23] [i_25] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_113 [i_26 + 1] [i_26 - 1] [i_0]))));
                        arr_124 [i_0] [i_0] [i_23] [i_25] [i_26 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */int) arr_23 [(unsigned char)4] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)36))))));
                        arr_125 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_14))))));
                    }
                    for (unsigned char i_27 = 3; i_27 < 16; i_27 += 4) /* same iter space */
                    {
                        arr_129 [i_0] [(unsigned char)4] [i_25] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) (unsigned char)181)) & (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned char)219)) - (207)))))));
                        arr_130 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)20)) ^ (((/* implicit */int) arr_0 [i_22] [i_22 + 2]))));
                        arr_131 [i_0 - 1] [(unsigned char)0] [i_23] [(unsigned char)6] [i_25] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_120 [i_22 - 1] [i_25 - 2])) + (((/* implicit */int) arr_120 [i_22 + 4] [i_25 + 1]))));
                        arr_132 [i_0] [i_0] [i_0] [(unsigned char)6] [i_27 + 1] [i_27 + 1] [i_27 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_72 [i_0] [i_25 - 1] [i_23] [i_0]))));
                        arr_133 [i_0] [i_0] [(unsigned char)2] [(unsigned char)15] [i_27] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
                    }
                    for (unsigned char i_28 = 3; i_28 < 16; i_28 += 4) /* same iter space */
                    {
                        arr_138 [i_0] [i_22] [i_22] [i_23] [i_0] [i_25] [i_28 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)15))));
                        arr_139 [i_0] [i_0] [i_22] [i_0] [i_25] [i_28] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_28 + 1] [i_22 + 3] [i_0 - 1])) == (((/* implicit */int) ((unsigned char) var_4)))));
                        arr_140 [i_0] [i_22 + 3] [i_0] [i_25] [(unsigned char)4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)71))));
                    }
                    arr_141 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)219)) <= (((/* implicit */int) ((unsigned char) (unsigned char)3)))));
                    arr_142 [i_0] [i_22 - 1] [i_22] [i_22] [i_23] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_136 [i_22] [i_25] [(unsigned char)9] [i_25 - 4] [i_25] [i_22] [i_0 - 1])) < ((+(((/* implicit */int) arr_13 [i_22]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        arr_145 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_0 - 1] [i_22] [i_22 + 3])) ? (((/* implicit */int) arr_45 [i_0 + 2] [i_0 - 1] [i_22 + 3])) : (((/* implicit */int) arr_45 [i_0 + 1] [(unsigned char)11] [i_22 + 2]))));
                        arr_146 [i_29] [i_0] [(unsigned char)16] [i_0] [i_0 - 1] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_84 [(unsigned char)13] [i_23] [i_25] [i_29]))));
                        arr_147 [(unsigned char)2] [i_22] [i_22] [i_22] [i_0] [i_22] [i_22] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_15)))) << (((((/* implicit */int) arr_114 [i_29] [i_25 + 1] [i_23] [i_0])) - (151)))));
                    }
                    for (unsigned char i_30 = 3; i_30 < 15; i_30 += 3) 
                    {
                        arr_150 [i_0] [i_22] [i_23] [i_25] [i_25] [i_30] = (unsigned char)0;
                        arr_151 [i_23] [i_22] [(unsigned char)6] [(unsigned char)8] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_72 [i_25] [i_23] [i_23] [i_30])) : (((/* implicit */int) (unsigned char)67))));
                        arr_152 [i_0] [i_0] [i_23] [i_23] [i_30] = var_14;
                    }
                }
                arr_153 [i_23] |= ((unsigned char) arr_93 [i_0] [i_0 + 1]);
            }
            for (unsigned char i_31 = 1; i_31 < 16; i_31 += 2) 
            {
                arr_158 [i_0] [i_22] = ((unsigned char) ((unsigned char) var_3));
                arr_159 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)36)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37)))))));
            }
            arr_160 [(unsigned char)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)128)))));
            arr_161 [i_0] [i_22] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned char)57))))));
            arr_162 [i_0] [i_0] = var_10;
        }
    }
    for (unsigned char i_32 = 0; i_32 < 13; i_32 += 4) 
    {
        arr_166 [i_32] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_45 [i_32] [i_32] [i_32])) / (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_32] [i_32] [i_32])))))));
        arr_167 [i_32] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)127))))));
    }
    var_19 = ((/* implicit */unsigned char) min(((!((!(((/* implicit */_Bool) (unsigned char)128)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) var_5))))));
}
