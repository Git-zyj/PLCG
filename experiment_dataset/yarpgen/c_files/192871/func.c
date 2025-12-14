/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192871
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [(short)11] [i_1] = ((((/* implicit */_Bool) (~(arr_0 [i_1 - 1])))) || (((/* implicit */_Bool) min((4975363907308741944LL), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1 - 1]))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((4975363907308741944LL), (((/* implicit */long long int) arr_4 [i_1])))) / (((/* implicit */long long int) ((int) arr_4 [i_1])))));
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 4975363907308741944LL);
                    arr_14 [i_1] [i_1] [i_3] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 2])) ? (arr_5 [i_0] [i_1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) + (((unsigned long long int) arr_5 [i_1] [i_1] [i_1 - 1])));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_17 [i_0] [(short)8] [i_3] [i_3] = ((((/* implicit */_Bool) ((max((-4975363907308741944LL), (-4975363907308741944LL))) & (max((4975363907308741944LL), (-4975363907308741944LL)))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_3] [i_1 + 1]))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3]))))) < (arr_0 [i_3])))));
                        arr_18 [i_1] [i_1 - 1] [10LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-4975363907308741944LL)))) ? (4975363907308741944LL) : (4975363907308741944LL)));
                        arr_19 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_8 [i_0] [i_4] [1U] [i_4]))))) / (arr_16 [i_1] [i_1])));
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((-4975363907308741944LL) <= (-4975363907308741944LL)))), (4975363907308741943LL)));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_23 [i_0] [i_0] [i_0] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [4LL])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [(unsigned short)4]))));
                    arr_24 [i_5] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4975363907308741944LL)) ? (-4975363907308741944LL) : (-4975363907308741944LL)));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        arr_27 [i_5] [i_6] [i_1 + 1] [i_1] = ((unsigned long long int) arr_6 [i_1]);
                        arr_28 [i_6] [i_6] [i_5] [(_Bool)1] [(short)10] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4975363907308741944LL)) ? (((arr_0 [i_0]) / (4975363907308741944LL))) : (((/* implicit */long long int) ((arr_26 [i_0] [(unsigned char)6] [i_5] [i_0]) ? (((/* implicit */unsigned int) arr_22 [(signed char)2] [i_1] [i_5] [i_0])) : (var_6))))));
                        arr_29 [i_1] [i_5] = ((/* implicit */_Bool) ((arr_26 [i_1 - 1] [i_1] [i_6 - 2] [i_6 - 3]) ? (4975363907308741944LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1 - 1] [i_1] [i_6 - 1] [i_6 - 2])))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_32 [i_5] [10LL] [2LL] [i_5] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_31 [i_1 - 2] [6ULL] [i_1 - 2])) + (2147483647))) >> (((var_2) + (6390022418546581156LL)))));
                        arr_33 [(unsigned short)0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_11)))) << (((((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1])) - (56168)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_9 = 4; i_9 < 11; i_9 += 1) 
                        {
                            arr_39 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -4975363907308741944LL))))) / (((/* implicit */int) arr_7 [i_8] [6] [i_5] [i_8]))));
                            arr_40 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((arr_26 [i_1] [i_8] [i_1 + 1] [i_9 + 1]) ? (-4975363907308741944LL) : (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_8] [i_5] [(short)8] [i_9 - 2]) : (4975363907308741944LL)))));
                            arr_41 [i_0] [i_1] [i_1] [i_5] [i_8] [i_9 - 1] = ((4975363907308741944LL) / (-4975363907308741944LL));
                        }
                        for (unsigned int i_10 = 3; i_10 < 11; i_10 += 1) 
                        {
                            arr_46 [i_0] [i_1 - 1] [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((-4975363907308741944LL) - (-4975363907308741944LL))) == (((/* implicit */long long int) arr_22 [i_8] [i_1] [i_1 - 2] [i_1]))));
                            arr_47 [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_25 [5LL] [i_1 - 2] [i_5] [i_8])));
                        }
                        for (unsigned int i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            arr_50 [i_0] [i_1] [i_5] [i_8] [i_8] [i_5] = ((/* implicit */int) ((arr_42 [i_5] [i_11 - 3] [i_1 - 1] [i_11] [i_11 + 1]) != (arr_42 [i_0] [(short)6] [i_1 - 2] [i_1 - 2] [i_11 - 3])));
                            arr_51 [10] [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_37 [i_1] [i_8] [i_5] [11] [i_1])) ? (((/* implicit */int) ((4975363907308741943LL) > (-4975363907308741944LL)))) : (((/* implicit */int) arr_8 [i_8] [i_1 - 1] [i_11 + 1] [i_5])));
                        }
                        arr_52 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */long long int) ((var_6) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
                    }
                    arr_53 [i_0] [i_1] = ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5] [i_1 - 1]))) : ((~(4975363907308741944LL))));
                }
                for (long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                {
                    arr_56 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 4975363907308741944LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_12] [i_12] [i_12 - 2] [i_12 - 2])))) : (max(((~(4975363907308741944LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) | (var_4)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_61 [(unsigned short)8] [i_1] [i_12 - 2] [0ULL] [i_13] = ((/* implicit */unsigned int) 4975363907308741944LL);
                        arr_62 [i_0] [i_0] [i_0] [6ULL] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_12] [i_1 - 1])) ? (arr_1 [i_1 + 1] [i_1]) : (4975363907308741944LL))) : (arr_11 [i_0] [i_12 - 2] [i_1 - 1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) -4975363907308741944LL)))) > (arr_1 [i_12 - 1] [i_1 - 2]))))));
                    }
                    arr_63 [i_0] [(unsigned short)6] [i_12] &= ((/* implicit */_Bool) ((max((4975363907308741944LL), (4975363907308741943LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)2])))));
                    arr_64 [i_1] = ((/* implicit */int) (~(-4975363907308741944LL)));
                }
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 4) 
                {
                    arr_68 [i_0] [(unsigned short)4] = (-(((/* implicit */int) ((4975363907308741944LL) <= (-4975363907308741943LL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_71 [0LL] [i_1] [i_1] [i_0] = ((/* implicit */int) min((min((var_6), (((/* implicit */unsigned int) arr_26 [i_14 - 1] [i_1] [i_14] [i_1 - 2])))), (((/* implicit */unsigned int) ((short) var_3)))));
                        /* LoopSeq 2 */
                        for (short i_16 = 3; i_16 < 10; i_16 += 3) 
                        {
                            arr_74 [i_0] [i_0] [0ULL] [i_1] [5ULL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_60 [i_1 - 2] [(short)7] [i_14 + 1] [i_16 - 3] [i_16 - 1] [i_16])) ? (4975363907308741943LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_14 + 1] [i_16 - 3]))))), (((/* implicit */long long int) ((signed char) -4975363907308741944LL)))));
                            arr_75 [i_0] [i_1 - 1] [i_1] [i_16] [i_16] [i_14 + 1] = ((/* implicit */int) var_7);
                            arr_76 [(unsigned char)8] [(unsigned char)8] [i_14] [i_14] [i_14] [2LL] [i_15] = ((/* implicit */short) var_2);
                            arr_77 [6] [i_1] [i_1] [6] [(_Bool)1] [(_Bool)1] = -4975363907308741944LL;
                        }
                        for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            arr_81 [i_0] [i_1 + 1] [i_14] [(short)2] [i_15] [i_17] [i_17] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_54 [i_0] [i_14] [i_14] [i_15])) ? (-4975363907308741944LL) : (4975363907308741942LL))) & (((((/* implicit */_Bool) var_5)) ? (-4975363907308741944LL) : (4975363907308741944LL)))));
                            arr_82 [i_17] [i_14] [i_14] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4975363907308741943LL)) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_65 [i_15] [i_15] [i_1 - 2])), (4975363907308741944LL))) - (min((((/* implicit */long long int) var_1)), (var_4)))))) : (((unsigned long long int) max((4975363907308741942LL), (((/* implicit */long long int) arr_54 [i_0] [i_0] [i_14] [i_17])))))));
                            arr_83 [(unsigned char)8] [i_1] [i_14] [i_0] [(unsigned char)11] = ((/* implicit */int) arr_59 [i_14 + 1] [i_1 - 2] [i_14] [i_1 + 1] [i_1] [i_15]);
                        }
                        arr_84 [i_1] [i_0] [i_1] [i_1] = max((((((/* implicit */_Bool) 4975363907308741944LL)) ? (4975363907308741943LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_14 + 1] [i_1 - 1] [i_14 + 1] [i_14 + 1] [i_1 - 1] [(unsigned short)8]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_1] [i_1])) ? (((/* implicit */int) arr_54 [i_14 - 1] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_54 [i_14 + 2] [i_1] [i_1] [i_1]))))));
                        arr_85 [i_0] [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_80 [i_0] [i_1 - 2] [2LL] [i_1 - 1] [i_14 - 1])) | (max((-4975363907308741943LL), (4975363907308741943LL)))))) ? (((((/* implicit */_Bool) ((-4975363907308741944LL) / (4975363907308741943LL)))) ? (((4975363907308741943LL) / (4975363907308741944LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_34 [i_0]), (((/* implicit */unsigned char) var_1)))))))) : (((arr_69 [i_15] [i_14 + 2] [i_14] [i_1 + 1] [i_0] [i_0]) / (((/* implicit */long long int) var_6))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            arr_88 [i_15] |= ((/* implicit */short) arr_87 [i_1] [i_15]);
                            arr_89 [i_15] [i_1 - 1] [i_1] [i_14 + 2] [i_14] [(_Bool)1] [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) 4975363907308741943LL));
                            arr_90 [i_18] [i_1] [4ULL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) >> (((((/* implicit */int) arr_38 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) - (40539)))))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_18] [i_15] [i_14] [i_1]))) != (4975363907308741943LL)))), (((((/* implicit */_Bool) arr_43 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_18] [i_15])) ? (((/* implicit */unsigned long long int) 4975363907308741943LL)) : (arr_49 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 1) 
                        {
                            arr_93 [i_15] [i_15] [i_14] [i_1] [i_0] [i_15] |= ((/* implicit */int) ((((((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_14] [i_15] [0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_92 [(unsigned short)10] [(unsigned short)10] [i_14] [(unsigned short)10] [i_15]))) : (4975363907308741943LL))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_67 [i_15])))))) >= (((((/* implicit */_Bool) max((-4975363907308741944LL), (4975363907308741943LL)))) ? (max((4975363907308741943LL), (4975363907308741943LL))) : (4975363907308741943LL)))));
                            arr_94 [i_0] [i_0] [i_1] [i_14 - 1] [i_1] [i_19 - 1] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) arr_35 [i_1])), (((unsigned int) -4975363907308741944LL))))));
                            arr_95 [i_15] = ((/* implicit */unsigned char) (+(4975363907308741943LL)));
                            arr_96 [i_0] [i_1] [i_0] [3LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_16 [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_0] [i_1 + 1] [i_14] [i_1 + 1] [i_1])))))) / (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_42 [i_19] [i_15] [i_14 + 2] [i_1] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_36 [(signed char)4] [i_1] [i_1 - 2] [i_1] [i_1 - 2])) << (((4975363907308741943LL) - (4975363907308741936LL))))))));
                            arr_97 [i_0] [i_14] [2ULL] [i_14] [i_15] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) < (((((/* implicit */_Bool) arr_60 [i_1 - 1] [i_1 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_19 + 1])) ? (arr_2 [i_1 - 1] [i_1 - 2]) : (arr_2 [i_1 - 1] [i_1 - 2])))));
                        }
                    }
                    for (unsigned short i_20 = 1; i_20 < 11; i_20 += 2) 
                    {
                        arr_100 [8LL] [i_1] [i_14 - 1] [(short)8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_2) >= (-4975363907308741945LL))))))) ? (max((((((/* implicit */_Bool) 4975363907308741943LL)) ? (-4975363907308741944LL) : (-4975363907308741943LL))), (((/* implicit */long long int) ((unsigned short) 4975363907308741945LL))))) : (((arr_26 [i_14 + 1] [0LL] [i_14] [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_14 - 1] [6LL] [i_14 - 1] [i_14 + 2]))) : (-4975363907308741945LL)))));
                        arr_101 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_38 [i_1 - 1] [i_1] [i_14 - 1] [i_14 - 1] [(unsigned char)6] [i_20 + 1]), (arr_38 [i_1 - 2] [i_1 - 2] [i_14 + 1] [i_14 + 2] [i_20] [i_20 + 1]))))) != (max((((/* implicit */unsigned int) arr_38 [i_1 + 1] [i_14] [i_14 + 1] [i_14 + 2] [i_14] [i_20 + 1])), (arr_87 [i_1 + 1] [(unsigned char)8])))));
                        arr_102 [(unsigned char)2] [0ULL] [6] [i_14] [i_20 + 1] = ((/* implicit */unsigned int) ((unsigned char) min((((4975363907308741943LL) << (((((var_3) + (741964507))) - (4))))), (((/* implicit */long long int) ((_Bool) var_3))))));
                    }
                    arr_103 [i_1] = ((/* implicit */unsigned long long int) ((signed char) max((4975363907308741945LL), (4975363907308741943LL))));
                }
                arr_104 [i_0] [(_Bool)1] [i_1] &= ((/* implicit */int) ((long long int) var_11));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_9);
    var_13 = var_6;
    var_14 = ((long long int) var_5);
}
