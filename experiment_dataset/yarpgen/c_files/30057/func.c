/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30057
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (var_15) : (var_15))), (min((5093548771214703347ULL), (33550336ULL)))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (5093548771214703347ULL) : (((((/* implicit */_Bool) (~(13353195302494848269ULL)))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_17))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = (~(((arr_2 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) : (((unsigned long long int) var_8)))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (-(5093548771214703347ULL)));
        arr_10 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_1])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [i_1] [i_1])))) ? (-6047658309308823294LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
        arr_11 [8ULL] = arr_0 [i_1];
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_2] [2ULL])))) << (((((/* implicit */int) arr_13 [(unsigned char)3] [i_2])) - (90)))))) : (min((min((var_10), (((/* implicit */unsigned long long int) -990558191)))), (min((((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_2])), (var_11)))))));
        arr_15 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) || (((/* implicit */_Bool) arr_7 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_22 [i_2] [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)0)), (-1335443360))), (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (min((-1335443360), (((/* implicit */int) var_2)))) : (min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_17))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_26 [i_5] [(signed char)10] [(signed char)10] [i_2] = min((min((min((var_14), (13053834977584795894ULL))), (arr_20 [6ULL] [i_3] [i_4] [i_5]))), (((/* implicit */unsigned long long int) (_Bool)0)));
                        arr_27 [0ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_16)))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((unsigned long long int) var_8))));
                        arr_28 [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)0))))), (min((var_15), (arr_19 [i_2] [i_3] [i_2])))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_35 [i_2] = (+(11706961959701995134ULL));
                            arr_36 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))));
                        }
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_39 [i_2] [i_3] [i_4] [i_6] [i_2] [i_8] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_4])) >> (((var_10) - (11146228473248042426ULL)))))) ? (var_15) : (arr_16 [i_2])));
                            arr_40 [i_3] [i_6] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_8])))));
                            arr_41 [i_2] [0ULL] [i_6] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_4] [i_6]))));
                            arr_42 [i_2] [i_3] [i_4] [i_6] [i_2] [i_8] [i_8] = arr_16 [i_2];
                            arr_43 [i_2] [i_8] = ((/* implicit */long long int) var_13);
                        }
                        arr_44 [6ULL] [i_4] [2LL] [2LL] [i_3] [i_2] |= ((((/* implicit */_Bool) arr_16 [(_Bool)1])) ? (135107988821114880ULL) : (((unsigned long long int) arr_34 [4] [i_3] [6ULL] [i_6])));
                        arr_45 [i_3] [i_3] [14ULL] [i_6] = ((((/* implicit */int) ((_Bool) (_Bool)1))) % (((/* implicit */int) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            arr_52 [i_2] [i_3] [i_3] [(_Bool)1] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) arr_23 [i_10 + 1] [i_9] [i_9] [i_2]);
                            arr_53 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2])) ? (arr_16 [i_2]) : (arr_16 [i_2])));
                            arr_54 [i_2] [i_2] [6LL] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_2] [i_2] [i_10]));
                            arr_55 [i_2] = (_Bool)1;
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) /* same iter space */
                        {
                            arr_60 [i_2] [2] [i_9] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((int) var_9));
                            arr_61 [i_2] [i_3] [i_9] [i_9] [i_2] = ((unsigned long long int) var_13);
                            arr_62 [i_2] [3ULL] [i_4] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14506140051746085888ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)));
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 4) /* same iter space */
                        {
                            arr_65 [i_12] [i_12] [i_2] [i_2] [8LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9 - 2] [i_12 - 1])) ? (arr_34 [i_2] [i_9 - 2] [(unsigned char)7] [i_9 - 3]) : (((/* implicit */unsigned long long int) 526509213))));
                            arr_66 [i_2] [i_12] = ((/* implicit */int) ((unsigned long long int) var_10));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            arr_69 [i_2] = ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8762955312646355657ULL));
                            arr_70 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_71 [i_2] [i_3] [i_3] [(_Bool)1] [i_3] = (_Bool)1;
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            arr_74 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-2147483647 - 1));
                            arr_75 [i_14] [i_9] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((_Bool) 8762955312646355657ULL));
                            arr_76 [i_9] [(unsigned char)4] [i_4] [i_3] [i_9] &= ((((int) var_13)) - (((((/* implicit */_Bool) arr_50 [5] [1ULL] [i_4] [i_9] [i_14])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_0)))));
                            arr_77 [i_2] [5] [i_2] [i_9] [(unsigned char)14] = ((/* implicit */signed char) (~(((unsigned long long int) (_Bool)1))));
                        }
                        arr_78 [i_2] [i_2] [i_4] [i_9] = ((/* implicit */_Bool) ((arr_68 [i_2] [i_2] [i_9]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)11))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_29 [(unsigned char)10] [14ULL] [i_4] [i_4] [i_9])))));
                        arr_79 [i_2] [i_9] [i_4] [i_9] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (arr_19 [i_9] [i_4] [i_9]) : (3920033344766041749ULL)))));
                        arr_80 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 0LL);
                    }
                }
            } 
        } 
        arr_81 [i_2] [(signed char)14] = ((/* implicit */_Bool) arr_24 [(_Bool)1] [i_2] [(unsigned char)3] [(_Bool)1]);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        arr_85 [i_15] = ((/* implicit */int) var_9);
        arr_86 [16ULL] [i_15] &= ((/* implicit */signed char) arr_84 [(_Bool)1]);
        arr_87 [0ULL] = ((/* implicit */long long int) var_9);
        arr_88 [i_15] = ((/* implicit */int) var_11);
        arr_89 [i_15] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((9513278643354982867ULL) - (9513278643354982841ULL)))))), (min((arr_84 [i_15]), (((/* implicit */unsigned long long int) var_0))))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        arr_92 [(_Bool)1] = ((/* implicit */long long int) ((arr_91 [i_16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [(unsigned char)0]))) : (var_17)));
        /* LoopSeq 2 */
        for (int i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            arr_96 [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_2 [17ULL] [i_17]);
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            arr_105 [i_16] [i_16] [i_17] [i_18] [1ULL] [i_20] [8] = ((/* implicit */_Bool) var_15);
                            arr_106 [i_20] [i_19] [i_18] [i_18] [i_17] [i_16] = ((/* implicit */_Bool) ((arr_2 [i_16] [i_19]) ? (var_14) : (11472169938677858218ULL)));
                        }
                    } 
                } 
            } 
            arr_107 [i_16] [i_16] = (_Bool)1;
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_117 [i_16] [i_17] [i_21] [i_22] [i_22] [0ULL] [i_23] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-7))));
                            arr_118 [i_16] [i_17] [i_17] [i_21] [i_22] [i_23] [i_16] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) (_Bool)1)));
                        }
                    } 
                } 
            } 
            arr_119 [i_16] [(_Bool)1] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_17])) ? (((/* implicit */int) arr_95 [2LL])) : ((-(((/* implicit */int) var_7))))));
        }
        for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
        {
            arr_124 [i_16] = 549755813887ULL;
            arr_125 [i_16] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_122 [i_16]))) ^ (7379519710109203971ULL)))));
            arr_126 [i_16] [i_24] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_111 [i_24] [i_24] [i_16] [i_24])) ? (var_5) : (0ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (arr_1 [i_16]))))));
            arr_127 [i_16] [i_24] [i_16] = ((/* implicit */int) (-(arr_102 [i_16] [i_24] [i_16] [i_16] [i_16])));
            /* LoopSeq 2 */
            for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                arr_131 [i_16] [i_24] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_16] [3ULL] [i_24] [i_25] [i_25])) ? (((/* implicit */long long int) -579802745)) : (arr_102 [i_16] [i_16] [i_16] [i_24] [i_25])));
                arr_132 [i_16] [i_24] [i_24] [i_25] |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 549755813891ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))));
            }
            for (int i_26 = 3; i_26 < 14; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        {
                            arr_141 [i_16] [i_24] [i_28] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))) : (arr_6 [i_16] [i_28])));
                            arr_142 [i_16] [i_24] [i_26] [i_16] [i_16] = ((/* implicit */unsigned char) ((int) arr_95 [i_16]));
                            arr_143 [i_16] [i_24] [i_26] [i_16] [i_28] = arr_137 [(unsigned char)3] [13ULL] [i_26] [i_16] [3ULL] [i_16];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 2) 
                {
                    for (signed char i_30 = 0; i_30 < 18; i_30 += 4) 
                    {
                        {
                            arr_148 [(unsigned char)13] [1LL] [i_26] [i_26] [i_16] [10ULL] [i_30] = ((/* implicit */_Bool) ((arr_103 [i_16] [i_16] [i_16] [i_16]) * (arr_103 [i_16] [i_16] [7] [11])));
                            arr_149 [i_16] [i_29] [i_26] [i_24] [i_16] = ((/* implicit */unsigned long long int) arr_2 [i_26] [i_26 + 1]);
                            arr_150 [(_Bool)1] [i_16] = ((/* implicit */long long int) ((arr_111 [i_16] [i_26] [i_26 + 1] [i_16]) << (((var_16) - (5782404572151346592ULL)))));
                        }
                    } 
                } 
                arr_151 [i_24] [i_24] [i_24] = arr_108 [i_24] [(_Bool)1] [i_26 + 2];
            }
        }
        arr_152 [i_16] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)186));
    }
}
