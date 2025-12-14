/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33777
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)65535)) - (65521)))))) : (((/* implicit */unsigned long long int) (~(var_14))))));
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) <= (3057528500U)))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) arr_9 [i_0] [21ULL] [i_2] [i_3]);
                        arr_15 [i_4] [i_3] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned int) ((unsigned char) max((var_18), (((/* implicit */unsigned short) arr_3 [i_2])))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-97))))) ? ((~(arr_10 [i_0] [i_0] [i_2] [(signed char)1] [i_5]))) : (((/* implicit */unsigned int) max((arr_1 [i_1] [(short)2]), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [(unsigned char)18] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)18] [i_0] [(unsigned char)18] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_5]))))) & (((/* implicit */int) max((((/* implicit */short) (signed char)97)), (var_6))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_24 [(short)13] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(arr_17 [12] [i_1] [12] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [4LL]))) : (arr_6 [i_6] [i_2] [i_2] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0])) < (((/* implicit */int) arr_13 [i_3])))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] = ((/* implicit */unsigned int) arr_12 [i_6] [i_2] [i_2] [4LL] [i_0]);
                        arr_26 [8] [i_1] [8] [i_3] [i_6] = ((/* implicit */short) ((int) arr_6 [i_0] [i_1] [i_2] [i_2]));
                        arr_27 [i_0] [i_0] [i_1] [2U] [(signed char)7] [i_6] [i_6] = ((/* implicit */unsigned char) ((arr_1 [i_6] [i_3]) ^ ((+(((/* implicit */int) (signed char)47))))));
                    }
                    for (short i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        arr_31 [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((max((var_10), (((/* implicit */unsigned int) arr_30 [i_3] [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 3] [i_7])))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_3 [i_0]), ((unsigned char)8)))))))));
                        arr_32 [i_0] [i_1] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_7 + 1])) / (((/* implicit */int) max((arr_3 [i_7 + 2]), (arr_3 [i_7 + 2]))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_35 [(signed char)23] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0]);
                        arr_36 [i_1] = ((/* implicit */unsigned long long int) -8640202460699668916LL);
                        arr_37 [4ULL] [4ULL] [1] [2ULL] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_33 [i_8] [i_8] [i_3] [i_2] [i_1] [i_0])) == (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) < (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                    }
                }
                for (unsigned int i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    arr_42 [i_0] [7] [i_0] [i_2] = ((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) arr_12 [i_9 + 1] [i_1] [i_0] [i_9] [i_0])) : (arr_6 [i_9 - 1] [i_1] [i_2] [i_9]))) << ((((+(19743505241032540LL))) - (19743505241032522LL))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_45 [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) ((2918813211722861210LL) + (-545204141238126568LL))));
                        arr_46 [16] [i_10] [i_2] [i_10] [(unsigned short)15] = ((((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_9 - 1] [i_9 + 2] [(short)5] [i_9 - 1])))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        arr_50 [(short)20] [(short)20] [(short)20] [i_2] [(short)1] [(short)1] = ((((2727656192U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) << ((((+(arr_23 [i_11] [i_11] [i_9 + 1] [i_1]))) - (3771670032U))));
                        arr_51 [(short)8] [(short)8] [(unsigned char)18] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) var_6);
                    }
                    for (unsigned short i_12 = 4; i_12 < 24; i_12 += 4) 
                    {
                        arr_55 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_2] = min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) (short)32759))))), (max((8640202460699668916LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_9]))))))));
                        arr_56 [i_0] [4] [i_0] [0U] = ((/* implicit */unsigned long long int) (signed char)28);
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_9))))));
                    }
                    arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                    arr_59 [i_9 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((+(((/* implicit */int) arr_43 [i_9] [22U] [i_1] [i_1] [i_0])))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) (short)32745)))))))) == (var_9)));
                }
                arr_60 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))))));
                arr_61 [(short)22] [i_1] [(short)22] [(unsigned short)21] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)241)), (2918813211722861231LL)));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (signed char i_14 = 4; i_14 < 24; i_14 += 1) 
                    {
                        {
                            arr_66 [i_1] [10] [i_2] [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                            arr_67 [i_14 - 4] [i_13] [i_13] [i_13] [i_1] [i_0] = ((/* implicit */_Bool) var_17);
                        }
                    } 
                } 
                arr_68 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(arr_64 [i_0] [i_0] [i_2] [(signed char)13] [i_2] [i_0])));
            }
        }
        for (short i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            arr_71 [i_0] = ((/* implicit */short) max((arr_10 [i_15] [11U] [(_Bool)1] [(_Bool)1] [i_0]), ((((-(arr_64 [i_0] [i_15] [i_15] [i_15] [(unsigned char)14] [i_0]))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_15] [i_15] [i_15]))) : (var_10)))))));
            arr_72 [i_0] [i_0] [i_0] = arr_65 [i_0] [i_0] [i_15];
        }
        /* vectorizable */
        for (signed char i_16 = 2; i_16 < 24; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (int i_17 = 4; i_17 < 24; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    for (int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        {
                            arr_86 [i_0] [i_0] [i_16] [i_16] [i_16] [i_18] [i_19] = (~(arr_49 [i_16 + 1] [i_17 - 4] [i_17] [i_18] [i_19]));
                            arr_87 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_0 [i_0] [i_17])) : (((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0] [i_17] [i_18] [(unsigned char)11] [i_19])) ? (((/* implicit */int) arr_83 [i_0] [16LL] [i_0] [i_0] [i_19])) : (((/* implicit */int) (unsigned short)65532))))));
                            arr_88 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned int) ((var_2) + (var_2)));
                        }
                    } 
                } 
            } 
            arr_89 [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_2)));
        }
        arr_90 [i_0] [i_0] = ((/* implicit */int) var_13);
        arr_91 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) var_15)) + (var_9))))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), ((-(var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_8)));
}
