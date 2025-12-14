/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48646
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2348328697051375774LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) | (((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                arr_8 [i_2] [4U] [4U] [i_0] = var_6;
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_1 + 2] [3LL]));
                arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)104)) == (((/* implicit */int) (_Bool)1)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) (unsigned short)64675));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((-7441327844906298163LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                arr_19 [(unsigned char)6] [i_1] |= ((/* implicit */unsigned char) var_12);
                arr_20 [i_0] [i_1 + 3] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_1] [(signed char)4] [i_1 + 1]);
                arr_21 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((int) arr_17 [i_0] [i_1 + 4] [i_0]));
            }
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_0] [i_1] [i_0]) <= (arr_17 [i_0] [i_0] [(unsigned short)7]))))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1177421853))))))));
            arr_23 [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
            arr_24 [i_0] = ((/* implicit */long long int) arr_16 [i_1] [i_1] [i_0]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_1 - 2] [i_1 + 4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) ^ (15353659844753145338ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_0]))) != (((((/* implicit */_Bool) arr_31 [i_7] [i_6 + 1] [i_5] [i_5] [i_1] [i_1] [i_0])) ? (arr_30 [i_0] [i_0] [i_0] [i_0]) : (var_3)))))))));
                            arr_34 [i_6 + 1] [i_0] [i_6 + 1] = ((/* implicit */_Bool) min((arr_32 [i_1] [i_5] [i_1] [i_0]), (max(((unsigned char)105), ((unsigned char)127)))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1040384) * (((/* implicit */int) (unsigned char)152))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_8])) : (((((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0])) + (var_3))))) : (arr_36 [i_0] [i_0] [i_8])));
            arr_39 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_0] [i_0])) || (((/* implicit */_Bool) (short)-598))));
        }
        arr_40 [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (arr_17 [i_0] [i_0] [i_0])))));
    }
    for (int i_9 = 2; i_9 < 14; i_9 += 3) 
    {
        arr_44 [i_9] = ((/* implicit */unsigned long long int) arr_43 [(unsigned short)9]);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    arr_51 [i_9] [i_9] [i_9] = ((((max((arr_46 [i_9]), (arr_46 [i_9]))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_46 [i_11])) : (((/* implicit */int) arr_41 [i_9])))) : (((/* implicit */int) arr_46 [i_10])))) * (((((/* implicit */int) arr_46 [i_9 + 1])) - (((/* implicit */int) arr_46 [i_10])))));
                    arr_52 [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [12U] [i_9 - 2] [i_9 - 2] [i_9]))) ^ (min((((/* implicit */long long int) arr_47 [i_9] [i_9 - 1] [i_10] [i_10])), (var_12)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 2; i_12 < 14; i_12 += 2) 
                    {
                        arr_55 [i_9] [i_11] [i_12 - 1] = ((/* implicit */long long int) arr_47 [i_9] [i_11] [i_9] [i_9]);
                        arr_56 [i_12] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned char) ((unsigned short) (short)0));
                        arr_57 [i_9 - 1] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_42 [i_11]))));
                        arr_58 [i_12] [(_Bool)1] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -777038378996838585LL)) ? (arr_43 [i_9 + 1]) : (arr_43 [i_10])));
                        arr_59 [i_12 + 1] [i_12 + 1] [i_11] [i_12 + 1] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            } 
        } 
        arr_60 [i_9 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_54 [i_9] [i_9] [i_9] [i_9]))));
        arr_61 [(unsigned short)2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16093451892318973954ULL))) != (((/* implicit */unsigned long long int) (~(arr_45 [3U] [i_9] [(_Bool)1]))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_65 [11] [i_13] = ((/* implicit */_Bool) arr_62 [i_13]);
        arr_66 [(_Bool)1] = ((/* implicit */_Bool) ((-1) & (((/* implicit */int) (unsigned char)73))));
        /* LoopSeq 4 */
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            arr_69 [i_14] [(_Bool)1] [i_13] = ((/* implicit */short) ((max((arr_67 [i_13] [i_14]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */long long int) -3)) : (var_12)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) & (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                for (int i_16 = 2; i_16 < 19; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_78 [i_14] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (arr_73 [i_16 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))) ? (((/* implicit */unsigned long long int) 21107365)) : (min((((/* implicit */unsigned long long int) arr_64 [i_13])), (arr_67 [i_13] [i_17]))))))));
                            arr_79 [i_13] [9U] [i_15] [9U] [i_17] = ((/* implicit */long long int) ((arr_74 [i_16 + 2]) <= (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)860)) : (((/* implicit */int) (short)13630)))), (((/* implicit */int) max(((unsigned short)64693), (((/* implicit */unsigned short) var_15)))))))));
                            arr_80 [i_13] [i_14] [i_15] [i_14] [i_17] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)64675)), (268230341))), (((/* implicit */int) var_15))))) : (max((arr_71 [(unsigned short)14] [i_15] [i_14] [i_13]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)149)) ? (-1529073368) : (1529073368))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_18 = 2; i_18 < 20; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_87 [i_14] [(unsigned short)19] [i_19] = ((/* implicit */int) arr_76 [i_19] [i_18] [i_13] [(_Bool)1] [i_13] [i_13]);
                        arr_88 [i_19] [(_Bool)1] [i_14] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((arr_82 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 1]) + (arr_82 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 1])))));
                    }
                } 
            } 
            arr_89 [i_14] = ((/* implicit */unsigned char) 2147483647);
            arr_90 [i_14] [i_13] = max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_76 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])), (3458764513820540928LL)))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_13] [i_14] [i_14]))) : (-9223372036854775807LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) * (arr_73 [i_14]))))), (((/* implicit */unsigned long long int) (unsigned char)104)));
        }
        for (int i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
        {
            arr_93 [i_13] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_86 [i_20] [i_13])), (max((arr_82 [i_20] [i_20] [i_20] [i_13]), (arr_82 [i_13] [i_13] [i_20] [i_20])))));
            arr_94 [9U] [9U] [9U] = ((/* implicit */short) min((-9223372036854775799LL), (((/* implicit */long long int) arr_81 [i_13]))));
            arr_95 [i_13] [i_13] [i_20] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_63 [i_20])), (((var_3) * (((((/* implicit */_Bool) arr_67 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) -1)) : (arr_62 [18LL])))))));
            arr_96 [i_13] [i_13] = ((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)0)), (2147483647))), (((2011850486) + (((/* implicit */int) (_Bool)1))))));
            arr_97 [i_13] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 7957744977064356614LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)-25), (((/* implicit */short) arr_70 [(unsigned short)3] [(unsigned short)3] [i_13] [13])))), (((/* implicit */short) ((17LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) : (var_0)));
        }
        for (int i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    {
                        arr_105 [i_21] [i_22] [i_22] [i_23] [i_23] = ((/* implicit */_Bool) ((int) arr_62 [i_13]));
                        arr_106 [i_13] [i_21] [i_22] [i_21] = ((/* implicit */int) 889641475U);
                    }
                } 
            } 
            arr_107 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) max((arr_73 [i_21]), (((/* implicit */unsigned long long int) (~(188417405))))));
        }
        for (int i_24 = 3; i_24 < 19; i_24 += 2) 
        {
            arr_110 [i_13] &= ((/* implicit */_Bool) arr_86 [i_24 + 2] [i_24 + 2]);
            /* LoopNest 2 */
            for (long long int i_25 = 1; i_25 < 20; i_25 += 1) 
            {
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_116 [i_13] [i_13] [(_Bool)1] [i_26] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((0ULL) & (((/* implicit */unsigned long long int) -1698086968))))));
                        arr_117 [(_Bool)1] [i_26 - 1] [i_13] [i_24] [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_113 [i_26] [8U] [(unsigned char)20] [(unsigned char)20] [i_24 - 3] [8U])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_99 [8] [i_24]), (-9223372036854775801LL)))))))) : (arr_99 [i_24 + 1] [i_24 - 1])));
                        arr_118 [i_26] [i_25] [i_26] = ((/* implicit */int) min((((long long int) 15872)), (((/* implicit */long long int) (unsigned short)16352))));
                    }
                } 
            } 
            arr_119 [i_13] = ((/* implicit */_Bool) arr_76 [i_13] [i_13] [i_24] [i_24] [i_24] [7]);
            arr_120 [i_13] [i_13] [i_24 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_63 [i_13]), (arr_63 [i_24 - 2])))) && (((/* implicit */_Bool) (short)13630))));
            arr_121 [i_13] [i_13] = ((/* implicit */unsigned int) arr_99 [i_13] [i_13]);
        }
    }
    var_20 = ((/* implicit */unsigned short) var_14);
}
