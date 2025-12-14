/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212877
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (signed char)80)) : (-1))) >> (((min((var_8), (((/* implicit */int) var_14)))) - (49))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)10] [i_3 + 2] [i_4] = ((/* implicit */_Bool) -9572893635457071LL);
                            arr_13 [(signed char)5] [(signed char)5] [(signed char)5] = ((((/* implicit */int) ((_Bool) arr_1 [i_3 + 3]))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)31744)) != (((/* implicit */int) (signed char)-31))))));
                            arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned short)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [15U] [i_2 - 1] [i_2 - 1] [i_1 - 1]))));
                            arr_15 [i_0 + 1] [i_1 - 1] [i_4] |= ((/* implicit */int) arr_4 [i_2 + 1] [i_0 + 1]);
                            arr_16 [6U] [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((long long int) var_14));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) % (((/* implicit */int) (short)-9434))));
                    arr_20 [i_0 + 1] [(signed char)6] [i_2 + 3] [(signed char)6] = arr_11 [9U] [15U] [(_Bool)1] [i_0 + 1];
                }
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_2 - 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [4ULL])) ? (((/* implicit */int) var_16)) : (arr_7 [i_0 + 1] [i_1 - 1])));
                    arr_26 [i_0] [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_6] = ((/* implicit */signed char) (~(0U)));
                    arr_27 [(unsigned char)7] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                    arr_28 [(unsigned char)20] [i_0] [i_1] [(unsigned char)1] [i_6 - 1] [5] = var_11;
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        arr_31 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((((/* implicit */int) arr_18 [4] [i_1 - 1])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)9] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_24 [(unsigned char)2] [(signed char)19] [(unsigned short)15] [i_6 + 1] [(signed char)19]))))));
                        arr_32 [(unsigned short)19] [(unsigned short)19] [12] [i_6] [(unsigned short)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7 - 1] [i_2 + 2] [i_1 - 1] [i_0 + 1]))));
                    }
                }
                for (unsigned int i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_0] [(short)10] [(unsigned short)20] [i_9 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_9 + 2] [i_9 + 2] [i_1 + 1] [i_8 + 1])) || (((/* implicit */_Bool) arr_5 [i_9 + 2] [i_9 + 2] [i_1 + 1] [i_8 - 1]))));
                        arr_40 [(unsigned short)18] = ((/* implicit */short) ((arr_36 [(_Bool)1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [19] [(unsigned short)8] [i_9])))));
                    }
                    for (int i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_44 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(unsigned short)0] [i_10 + 2] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 1] [i_0 + 1] [5] [2LL])) : (((/* implicit */int) arr_22 [i_8 - 1] [i_2 + 4])));
                        arr_45 [(_Bool)1] [i_1 - 1] [(unsigned short)7] [(unsigned short)13] [(signed char)2] = ((/* implicit */unsigned int) (!(arr_42 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 - 1] [i_10 - 1] [1] [i_10 - 1])));
                        arr_46 [(unsigned short)5] [(_Bool)0] [(unsigned short)5] [(unsigned short)5] [i_10] = ((/* implicit */long long int) var_16);
                    }
                    arr_47 [4U] [i_0 + 1] [(signed char)1] [i_2 - 1] [(unsigned char)6] [i_0 + 1] = ((/* implicit */unsigned char) 0U);
                }
            }
            for (unsigned char i_11 = 1; i_11 < 17; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
                {
                    arr_53 [i_0 + 1] [i_0 + 1] [14LL] [i_0 + 1] [i_12] [15ULL] = ((/* implicit */unsigned char) 4294967295U);
                    arr_54 [(unsigned char)4] [i_11] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_22 [i_0] [i_11 - 1]))) / ((~(((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [(unsigned char)1]))))));
                    arr_55 [(signed char)13] [i_12] [i_12] [i_0] = ((/* implicit */int) (~((~(7U)))));
                    arr_56 [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [12U] [i_11 + 4] [12U] [i_1 + 1]))));
                }
                arr_57 [i_0] [(signed char)16] [i_0] = ((/* implicit */long long int) var_14);
                arr_58 [(unsigned short)10] [(unsigned char)13] [i_11 + 1] [(unsigned char)18] = ((/* implicit */signed char) var_6);
                arr_59 [i_0 + 1] [i_0 + 1] = (+(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_11 - 1] [i_11 - 1] [1])));
            }
            arr_60 [i_1 - 1] [i_1 - 1] [i_0 + 1] = ((/* implicit */int) arr_48 [i_0] [(signed char)2] [i_0]);
            /* LoopSeq 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
            {
                arr_64 [i_0 + 1] [18] [i_1 + 1] [(_Bool)1] = ((/* implicit */int) (((~(9U))) >> (((arr_63 [i_0 + 1] [i_1 + 1] [20LL] [i_13 - 1]) + (200070447)))));
                arr_65 [(_Bool)1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_0 + 1])) || (((/* implicit */_Bool) var_9))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_69 [i_0] [i_1] = ((/* implicit */long long int) var_14);
                arr_70 [(_Bool)0] [(short)11] [9] = ((((arr_33 [i_0] [i_0 + 1] [i_0] [i_0 + 1]) + (2147483647))) << (((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [5] [5])))))));
                arr_71 [i_0 + 1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_48 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_48 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                arr_72 [i_1 + 1] = ((/* implicit */int) ((unsigned char) var_18));
            }
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                arr_75 [i_0 + 1] = ((/* implicit */unsigned short) 4294967282U);
                arr_76 [13LL] [i_15] = ((/* implicit */signed char) arr_2 [i_0]);
            }
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            arr_80 [2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))));
            arr_81 [(unsigned char)18] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_0] [i_0 + 1]))));
        }
        arr_82 [i_0 + 1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))));
        arr_83 [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_34 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) var_9)) : (arr_33 [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 20; i_17 += 2) 
    {
        arr_86 [8] |= ((/* implicit */long long int) (~(arr_73 [i_17 + 1])));
        arr_87 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((_Bool) 4294967286U));
    }
    for (unsigned char i_18 = 4; i_18 < 10; i_18 += 4) 
    {
        arr_90 [i_18] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_18 - 3] [(unsigned char)8] [i_18 - 1])) << (((((/* implicit */int) arr_52 [i_18 - 3] [i_18] [i_18 + 1])) - (5368)))))) ? (max((arr_36 [i_18 - 1]), (((/* implicit */unsigned long long int) arr_41 [i_18] [i_18 - 3] [9U] [i_18 - 1])))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_11)))))))));
        arr_91 [i_18] [i_18 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_41 [(_Bool)1] [(_Bool)1] [i_18 - 1] [i_18])) || (arr_42 [i_18] [i_18] [i_18 - 1] [(_Bool)1] [(_Bool)1] [i_18] [i_18 + 1]))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_18] [12] [i_18 - 1] [(_Bool)1])))))));
        arr_92 [i_18 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) + (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_7 [i_18] [i_18 - 1])) + (1U)))) + (max((((/* implicit */unsigned long long int) 0U)), (var_13)))))));
        arr_93 [i_18] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((var_8) <= (((/* implicit */int) arr_84 [i_18]))))), (var_13))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) arr_30 [i_18] [i_18] [i_18] [(unsigned short)17] [i_18])), (arr_89 [2U] [2U])))))));
    }
    for (long long int i_19 = 3; i_19 < 19; i_19 += 2) 
    {
        arr_98 [i_19] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_19 + 1] [i_19] [12] [20]))) ^ (arr_95 [16U]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_19] [i_19] [(unsigned short)3] [(signed char)17] [i_19 - 1])) ? (var_1) : ((~(((/* implicit */int) arr_29 [(unsigned short)3] [2] [i_19] [i_19 - 1] [2])))))))));
        arr_99 [i_19] = ((/* implicit */short) (-(((int) arr_37 [(unsigned short)12]))));
    }
    /* LoopNest 3 */
    for (long long int i_20 = 2; i_20 < 19; i_20 += 4) 
    {
        for (signed char i_21 = 0; i_21 < 21; i_21 += 2) 
        {
            for (int i_22 = 2; i_22 < 17; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        for (signed char i_24 = 3; i_24 < 19; i_24 += 4) 
                        {
                            {
                                arr_114 [(_Bool)1] [i_21] [i_21] = ((/* implicit */short) (+((-(arr_109 [(signed char)7] [i_22 - 1] [i_24] [(signed char)19] [i_24 - 1])))));
                                arr_115 [i_24 + 2] [(unsigned char)19] [i_23] [(unsigned char)19] [(signed char)6] [(unsigned char)19] [i_20] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(4U))))))), (var_2)));
                                arr_116 [i_24 - 2] = ((/* implicit */short) arr_0 [i_20 + 2] [i_24 + 2]);
                            }
                        } 
                    } 
                    arr_117 [i_20] [i_20] = ((/* implicit */signed char) min((arr_104 [i_20 - 2] [i_20 - 2] [i_22]), (((/* implicit */unsigned long long int) arr_61 [i_20] [i_21]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 1; i_25 < 19; i_25 += 4) /* same iter space */
                    {
                        arr_120 [i_20 + 1] [i_20 + 1] [i_25] [i_25] [i_20 + 1] [i_20 + 1] = ((/* implicit */_Bool) min((9U), (((/* implicit */unsigned int) max((arr_33 [i_25 + 1] [i_25] [i_22 + 3] [i_20 - 2]), (((/* implicit */int) arr_21 [i_20 - 1] [20LL] [i_20 + 1] [14ULL])))))));
                        arr_121 [i_25] [i_22] [i_25] = ((/* implicit */unsigned long long int) arr_109 [(unsigned char)13] [15] [(unsigned char)13] [(unsigned char)13] [i_25]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_26 = 2; i_26 < 18; i_26 += 2) /* same iter space */
                        {
                            arr_125 [(signed char)4] [i_22] [(_Bool)1] [i_25 - 1] [(signed char)18] [i_22 + 4] = ((/* implicit */signed char) ((unsigned char) (-(var_8))));
                            arr_126 [i_25] = ((/* implicit */_Bool) ((unsigned long long int) 4294967260U));
                        }
                        for (int i_27 = 2; i_27 < 18; i_27 += 2) /* same iter space */
                        {
                            arr_131 [i_20] [i_21] [(unsigned char)2] [(unsigned char)12] [i_21] [(unsigned char)2] = arr_124 [i_20 + 2] [i_27];
                            arr_132 [i_25] [i_25] [i_25] [i_25 + 2] [i_25] = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */long long int) arr_84 [i_25])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (4294967260U))))));
                        }
                        for (signed char i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            arr_136 [(_Bool)1] [i_25] [(_Bool)1] [i_25 - 1] [i_25 + 1] = ((/* implicit */unsigned short) var_13);
                            arr_137 [i_28] [i_25] [(unsigned short)3] [i_25] [i_20 + 1] = ((/* implicit */signed char) arr_38 [i_20 - 1] [17U] [20ULL] [17U] [i_25 + 2]);
                            arr_138 [i_25] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_66 [(signed char)16]), (((/* implicit */unsigned char) var_11)))))))) ^ (min((max((((/* implicit */unsigned int) arr_41 [i_25 + 1] [13U] [i_20] [i_20])), (10U))), (((9U) & (4294967286U)))))));
                        }
                        arr_139 [i_25] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_25 - 1] [i_25 - 1]))) + (4294967292U)))));
                    }
                    for (unsigned short i_29 = 1; i_29 < 19; i_29 += 4) /* same iter space */
                    {
                        arr_142 [i_20] [i_29 + 2] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) max((arr_109 [i_22] [i_22] [i_22] [i_21] [(_Bool)1]), (((/* implicit */int) arr_0 [i_20] [i_21]))))), (((((/* implicit */long long int) 9U)) / (var_6)))))));
                        arr_143 [i_20] [i_20] [i_20] = ((int) min((((/* implicit */unsigned int) arr_134 [(unsigned short)10] [i_22 - 2] [i_22 - 2] [i_22] [i_22 + 2])), (9U)));
                        /* LoopSeq 4 */
                        for (int i_30 = 1; i_30 < 18; i_30 += 4) /* same iter space */
                        {
                            arr_146 [i_20] [i_20] [i_20] [i_20] [i_20] [(signed char)16] [2] |= max((max((arr_36 [(unsigned char)5]), (min((var_13), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) var_14)));
                            arr_147 [19] [i_20] [i_22] [i_20] [i_20] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_123 [i_20 + 2] [i_22 - 2])))));
                            arr_148 [i_20] [i_21] [i_29 + 2] [i_30 + 3] = arr_144 [i_30] [(signed char)4] [1] [(unsigned short)1] [i_30] [(signed char)4] [i_29 + 2];
                        }
                        /* vectorizable */
                        for (int i_31 = 1; i_31 < 18; i_31 += 4) /* same iter space */
                        {
                            arr_152 [i_31] [i_21] [i_22] [(short)10] [i_31] [i_31] [(signed char)5] = ((/* implicit */_Bool) 9U);
                            arr_153 [i_31] [i_29 + 1] [i_31] [i_21] [i_20 - 2] = ((((/* implicit */_Bool) arr_24 [i_20 - 2] [(unsigned short)11] [i_22 - 1] [i_31 - 1] [(unsigned short)5])) ? (((/* implicit */int) arr_52 [i_20 - 2] [(_Bool)1] [i_22 - 1])) : (((/* implicit */int) arr_77 [i_20 - 2])));
                        }
                        /* vectorizable */
                        for (signed char i_32 = 0; i_32 < 21; i_32 += 4) 
                        {
                            arr_157 [i_22] [5] [(_Bool)1] [i_22] [i_29 + 1] [i_29] [(signed char)11] = ((/* implicit */long long int) arr_154 [(_Bool)1] [(_Bool)1] [i_22 - 2] [i_29] [i_32]);
                            arr_158 [i_20 - 1] [i_21] [i_22 - 2] [i_29 + 2] = ((/* implicit */unsigned char) arr_8 [i_20] [i_20] [i_20] [4] [15]);
                        }
                        /* vectorizable */
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            arr_161 [i_20] [i_33] [i_33] [i_33] [(_Bool)1] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_11)))));
                            arr_162 [i_21] = ((/* implicit */int) var_12);
                            arr_163 [i_33] = ((/* implicit */signed char) ((unsigned int) arr_118 [i_20 + 2] [i_20 + 2] [i_22] [i_33] [i_33]));
                            arr_164 [i_22] [(signed char)14] [i_29 + 2] [i_22] [i_21] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) var_17))));
                        }
                    }
                    arr_165 [i_20] [i_20] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((unsigned short) 4294967295U)))))));
                    arr_166 [i_20] [i_20] [i_20] = ((/* implicit */long long int) min((max((arr_67 [i_21] [i_20 + 1] [i_20]), (arr_67 [i_22 + 3] [i_20 + 1] [i_20]))), ((+((+(arr_74 [i_20] [13] [i_20 + 1])))))));
                }
            } 
        } 
    } 
    var_20 = (~(((/* implicit */int) var_17)));
}
