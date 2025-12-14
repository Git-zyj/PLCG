/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22095
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)41720);
        arr_4 [i_0] [i_0] = ((unsigned char) arr_1 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        arr_19 [i_4] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)28800)), (((((/* implicit */_Bool) (unsigned short)8065)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                        arr_20 [i_4] [i_2] [i_2] [i_3 + 2] [i_4] = ((/* implicit */short) arr_16 [i_4] [i_3 + 1] [i_3] [i_4 - 1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                        {
                            arr_24 [i_3] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */short) arr_11 [i_3] [i_3] [(unsigned short)7]);
                            arr_25 [i_1] [i_2] [i_3] [i_4] [i_4 - 2] [i_4] = ((/* implicit */unsigned int) arr_14 [i_4] [i_3 + 2] [i_4]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_28 [i_1 + 1] [i_2] [i_3] [(signed char)4] [i_6] [i_3] [i_3 - 1] = ((/* implicit */int) var_3);
                            arr_29 [i_3] [i_2] [i_4 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_3]))));
                            arr_30 [i_1] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_4 + 2])), (arr_10 [i_4 + 2] [i_1 + 1] [i_4 + 2]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        arr_35 [i_7] [i_2] [i_7] [i_7] |= ((/* implicit */long long int) (unsigned short)29024);
                        arr_36 [i_1] [i_2] [i_7] [(unsigned short)10] [i_7 - 1] &= ((/* implicit */unsigned long long int) var_10);
                        arr_37 [i_1] [i_3] [i_7] [i_1 + 1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1 + 1] [i_3 + 4] [i_3 + 2] [i_7 + 1]))));
                    }
                    arr_38 [(unsigned char)4] = ((/* implicit */unsigned char) arr_7 [i_3 + 3]);
                }
                arr_39 [i_1 - 1] [i_2] = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) arr_31 [i_1 - 1] [i_1 - 1] [2LL] [2LL] [i_1 - 1] [i_1 - 1])));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 8; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            {
                                arr_47 [i_9] [i_8] [i_9] [i_9 - 2] [i_8] = ((/* implicit */unsigned char) ((long long int) ((_Bool) (unsigned short)36724)));
                                arr_48 [i_9] [(short)0] [i_8 + 1] [i_9] [i_9 - 1] [i_10] = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_1] [i_1 - 1]));
                            }
                        } 
                    } 
                    arr_49 [i_8] [i_2] = ((/* implicit */unsigned char) arr_23 [i_8]);
                    arr_50 [(unsigned char)0] [i_8] |= ((/* implicit */long long int) arr_5 [i_1] [(signed char)2]);
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_53 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(arr_11 [i_1 + 1] [i_2] [i_11 - 1])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 4) 
                    {
                        arr_56 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        arr_57 [i_12] [i_2] [(signed char)1] = var_1;
                        arr_58 [i_12] = ((/* implicit */long long int) ((signed char) (unsigned short)28800));
                        arr_59 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_11 - 1])) ? (17110001557611664843ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36713)))))));
                    }
                    for (long long int i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_64 [i_1 + 1] [i_1] [i_2] [i_11] [i_13] [i_13] [i_14] = ((2795790013134265369ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_14] [i_2] [i_1 - 1] [i_13 - 1] [i_14] [i_11 - 1]))));
                            arr_65 [i_13] [i_11] [i_2] [i_13] = ((/* implicit */unsigned char) 11873451141810422968ULL);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            arr_70 [i_13] [6ULL] [i_11 - 1] [8ULL] [i_13] = ((/* implicit */signed char) ((unsigned char) var_5));
                            arr_71 [i_15] [i_13] [i_15] [i_2] [10ULL] |= ((/* implicit */signed char) var_1);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_75 [i_1] [i_1 - 1] [i_2] [i_2] [6] [i_13 + 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_1 + 1])) < (((/* implicit */int) arr_52 [i_1 - 1]))));
                            arr_76 [i_13] [i_2] = ((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1] [i_11 - 1] [i_13 + 1] [i_13 - 1]);
                            arr_77 [i_1 + 1] [i_13 - 1] [i_13] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) (~(((/* implicit */int) arr_54 [i_11 - 1] [i_11 - 1] [i_1 - 1]))));
                        }
                        arr_78 [(short)4] [i_2] [(signed char)4] [i_13] &= ((/* implicit */unsigned char) ((int) arr_0 [i_1 + 1]));
                    }
                    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_82 [i_17] [(unsigned char)7] [i_2] [i_1] = ((/* implicit */unsigned char) arr_68 [i_1] [i_2] [i_17] [i_17] [i_2]);
                        arr_83 [i_1] [i_2] [11ULL] [i_17] = ((/* implicit */_Bool) arr_18 [i_17]);
                    }
                    arr_84 [i_1] [i_1] = var_2;
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_88 [i_11] [i_11 - 1] [i_18] [i_18] = ((/* implicit */long long int) arr_62 [i_18] [i_18] [i_11 - 1] [i_1 + 1] [i_11 - 1] [i_11 - 1] [i_18]);
                        arr_89 [i_1] [i_2] [i_11] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)28811)) : (((/* implicit */int) (unsigned short)17061))));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 1; i_19 < 11; i_19 += 4) 
                        {
                            arr_92 [i_1] [i_2] [i_11] [i_18] [2ULL] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)36724))) ? (((/* implicit */int) arr_32 [i_2] [i_19] [i_19] [i_18] [i_19 - 1] [i_19 + 1])) : (((/* implicit */int) ((unsigned char) 2097151U)))));
                            arr_93 [i_1] [i_2] [i_11] [i_18] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_9 [i_1 - 1])) * (562949953421311ULL)));
                        }
                    }
                    for (unsigned short i_20 = 4; i_20 < 10; i_20 += 4) 
                    {
                        arr_97 [i_1] [i_2] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_98 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [(_Bool)1] [i_20] &= ((/* implicit */unsigned int) arr_69 [i_1 + 1] [i_1 - 1] [i_1] [i_11 - 1] [i_20 - 1]);
                        arr_99 [i_20 - 4] [i_11] [i_1] [i_2] [i_1] = ((/* implicit */long long int) 4292870150U);
                        arr_100 [i_1 - 1] [i_2] [i_11] [i_20 - 1] |= ((/* implicit */unsigned int) ((long long int) arr_8 [i_1 + 1] [i_11 - 1]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            arr_105 [i_1 + 1] [i_2] [i_11 - 1] [i_20] [i_21] = (!(((/* implicit */_Bool) arr_18 [i_21])));
                            arr_106 [i_1] [i_2] [i_11] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_1] [i_1 - 1] [i_21] [i_11 - 1])) * (((/* implicit */int) arr_44 [i_1] [i_1 + 1] [i_21] [i_11 - 1]))));
                            arr_107 [i_1] [i_1] [i_11] [i_20 + 2] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3661)) + (((/* implicit */int) (unsigned short)36703))));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    arr_111 [i_1] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_102 [(unsigned char)7] [i_22] [i_22] [i_1] [i_2] [i_1] [i_1]))));
                    arr_112 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 1152921229728940032ULL);
                    arr_113 [i_2] [i_22] [i_2] [i_1 + 1] = ((/* implicit */unsigned short) arr_34 [i_1 - 1] [i_2] [i_22] [i_2]);
                }
                arr_114 [i_1] [i_2] [i_1 - 1] = (!(((/* implicit */_Bool) max((((unsigned short) (_Bool)0)), (((/* implicit */unsigned short) var_0))))));
                arr_115 [i_2] [i_1] = ((/* implicit */short) arr_16 [0] [0LL] [2U] [0LL]);
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_5);
}
