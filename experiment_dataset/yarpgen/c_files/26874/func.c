/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26874
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_17);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_8 [(_Bool)1] = max(((unsigned char)36), ((unsigned char)219));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
        arr_10 [(_Bool)0] = ((/* implicit */unsigned char) ((843703899) % (((/* implicit */int) (unsigned short)65535))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_15 [i_2] |= ((unsigned char) min((((/* implicit */unsigned char) var_16)), ((unsigned char)219)));
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_21 [i_3] [(unsigned char)7] [(unsigned char)7] [i_2] = ((unsigned short) ((unsigned short) var_17));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_25 [10] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) (unsigned char)224))), (((int) var_12))));
                        arr_26 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) + (((/* implicit */int) var_12))));
                        arr_27 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) var_15);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_33 [i_2] [i_3] [i_4] [(short)14] [i_6] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) ((unsigned char) var_2)))))), (arr_20 [i_4])));
                                arr_34 [(unsigned char)6] [i_7] [i_7] [i_6] [i_4] [i_3] [(unsigned char)6] &= ((/* implicit */long long int) ((843703899) > (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_43 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_10] = ((unsigned char) var_16);
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_49 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)32))));
                                arr_50 [i_12] [i_8] [i_9] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)80));
                                arr_51 [i_8] [i_8 - 2] [(_Bool)1] [i_10] [i_11] [i_9] = ((unsigned short) (unsigned char)32);
                                arr_52 [i_8] [i_8] [i_10] [i_10] [i_9] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)230)) % (((/* implicit */int) (unsigned char)52))));
                                arr_53 [i_8] [i_9] [i_10] [i_11] [i_11] [i_12] = arr_42 [i_12] [i_11] [i_10] [i_8];
                            }
                        } 
                    } 
                    arr_54 [i_8] [i_9] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_6 [i_8])))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_58 [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
            arr_59 [i_8 - 2] [i_8] [i_13] = arr_48 [i_8] [i_13] [i_13] [i_13] [i_13];
            arr_60 [i_13] [i_8] [i_8] = ((_Bool) ((unsigned char) var_5));
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    arr_71 [i_8] [i_14] [i_15] [i_16] = ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)42443))));
                    arr_72 [i_8] [i_14] [i_16] = ((/* implicit */_Bool) var_9);
                }
                for (int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                {
                    arr_75 [i_8] [i_17] [i_14] [i_17] [i_17] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) var_11)));
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_78 [i_17] = ((unsigned char) arr_55 [i_18] [i_18]);
                        arr_79 [i_8] [i_14] [8LL] [(unsigned short)2] [i_18] [i_14] = ((/* implicit */unsigned short) ((arr_37 [i_8] [i_8]) % (((/* implicit */int) ((short) (unsigned char)248)))));
                    }
                    arr_80 [i_17] [(short)4] [i_17] &= ((/* implicit */unsigned short) ((unsigned char) ((int) var_7)));
                    arr_81 [i_8] [i_8] [i_17] [i_8] = ((/* implicit */short) ((unsigned short) var_6));
                    arr_82 [(unsigned char)4] [i_17] [i_17] [i_8] = ((/* implicit */short) var_2);
                }
                for (int i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                    {
                        arr_88 [i_8] [i_20] [i_15] = ((unsigned char) var_19);
                        arr_89 [i_8] [i_20] [i_20] [i_8] [i_8] = ((/* implicit */long long int) ((unsigned char) ((unsigned short) (unsigned char)255)));
                    }
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
                    {
                        arr_92 [i_14 + 1] [i_19] = ((/* implicit */unsigned short) ((unsigned char) ((short) (unsigned char)196)));
                        arr_93 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned char) (unsigned char)242));
                        arr_94 [i_8] [i_8 + 1] [i_15] [i_19] [i_21] [i_15] = ((/* implicit */long long int) ((_Bool) ((unsigned char) arr_38 [i_21] [i_19])));
                        arr_95 [i_19] [(short)5] [i_8] = ((/* implicit */long long int) ((unsigned char) (unsigned char)204));
                        arr_96 [i_21] = ((/* implicit */unsigned char) ((unsigned short) var_6));
                    }
                    arr_97 [i_8] [i_8 + 3] = ((unsigned short) var_4);
                    arr_98 [i_14] [i_19] [i_15] [i_14] [i_14] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_14))) | (((/* implicit */int) var_7))));
                }
                arr_99 [8LL] [8LL] [i_15] [i_8] = ((/* implicit */long long int) var_17);
            }
            for (long long int i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
            {
                arr_103 [i_8] = ((/* implicit */unsigned short) ((int) (short)27474));
                arr_104 [(unsigned char)6] [i_22] [(short)3] [i_8] = ((/* implicit */_Bool) arr_0 [(unsigned short)4]);
                arr_105 [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)232)))));
            }
            arr_106 [i_8] [i_14] = ((/* implicit */short) var_4);
            arr_107 [i_14] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_9)));
        }
        for (short i_23 = 4; i_23 < 11; i_23 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                for (unsigned short i_25 = 2; i_25 < 11; i_25 += 2) 
                {
                    for (long long int i_26 = 2; i_26 < 11; i_26 += 3) 
                    {
                        {
                            arr_118 [i_8] [i_23] [i_25] [i_25 - 1] [i_23] = ((unsigned char) ((-1525526164) != (((/* implicit */int) (unsigned char)58))));
                            arr_119 [i_8] [i_23] [i_24] [i_25] [i_26] = ((unsigned char) var_10);
                        }
                    } 
                } 
            } 
            arr_120 [i_8] [i_8] [i_8] = arr_100 [i_23] [i_8] [i_8 + 2];
        }
        for (unsigned char i_27 = 1; i_27 < 11; i_27 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_28 = 4; i_28 < 10; i_28 += 4) 
            {
                arr_127 [i_27] [i_28] |= var_7;
                /* LoopSeq 2 */
                for (unsigned short i_29 = 1; i_29 < 9; i_29 += 4) 
                {
                    arr_130 [i_8 - 1] [i_27] [i_27] [i_28] = ((/* implicit */unsigned short) (-(-3240037399352955498LL)));
                    arr_131 [i_8] [i_8] [i_27] [i_28] [i_28] [i_29] = ((/* implicit */unsigned short) ((short) ((unsigned char) var_10)));
                }
                for (unsigned short i_30 = 0; i_30 < 12; i_30 += 1) 
                {
                    arr_135 [i_8] [i_27] [i_28] [i_30] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) var_8)));
                    arr_136 [i_8] [i_27] [i_27] [i_28] [i_28 - 2] [i_30] = ((/* implicit */unsigned char) var_14);
                    arr_137 [i_8] [i_27] [i_28 - 3] [i_30] = ((/* implicit */short) arr_19 [i_28] [i_27] [i_28] [i_27]);
                }
                arr_138 [i_27] = ((/* implicit */short) ((unsigned char) ((unsigned char) var_15)));
            }
            arr_139 [i_8] [i_27] = ((/* implicit */int) var_7);
        }
        arr_140 [i_8] = ((unsigned char) var_0);
        arr_141 [i_8] = ((/* implicit */unsigned char) ((long long int) (unsigned char)52));
    }
    var_20 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((unsigned char) var_6))) || (((/* implicit */_Bool) ((int) var_15))))));
}
