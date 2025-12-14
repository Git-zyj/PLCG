/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219933
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_8 [9] = ((/* implicit */unsigned short) arr_4 [1U]);
                    arr_9 [(unsigned short)2] [(unsigned short)2] [i_2] = (-(((((/* implicit */_Bool) min((var_8), (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)39243), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0LL] [i_1] [0LL]))) : (1667574832U)))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~((~(2627392463U)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_21 [i_5] [(unsigned char)13] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */short) (!(((-1) <= (var_7)))));
                            arr_22 [i_0] [i_1] [i_3] [i_5] [i_1] [i_3] = ((/* implicit */long long int) var_15);
                            arr_23 [i_3] [i_3] [i_4 - 2] [8U] [(unsigned short)7] [8U] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_26 [i_6] [i_6] [0ULL] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) var_18);
                            arr_27 [i_6] [i_6] [i_6] [(unsigned char)15] [i_6] [i_6] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_0] [i_1] [i_6] [i_4 + 1] [i_4 - 2]))));
                            arr_28 [i_0] [i_6] [(unsigned char)17] [i_6] [i_0] = var_1;
                        }
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((15965305944278824335ULL) ^ (2481438129430727273ULL)));
                            arr_33 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) arr_18 [i_4 - 2] [i_4 - 1] [i_4 + 1]);
                            arr_34 [i_0] [i_0] [1] [i_3] [i_4] [(unsigned char)7] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                        }
                        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_37 [i_0] [i_1] [i_3] [12] [i_8] = ((/* implicit */unsigned char) (~(15965305944278824335ULL)));
                            arr_38 [i_8] [i_1] [i_3] [i_8] [i_8] = ((/* implicit */signed char) (unsigned char)255);
                            arr_39 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_7 [i_0]);
                            arr_40 [i_4] [i_4] [3U] [i_3] [i_1] [i_0] = ((int) arr_11 [i_0] [i_3] [i_3] [i_8]);
                            arr_41 [i_0] [i_1] [i_1] [(_Bool)1] [i_4] [i_8] = ((((/* implicit */int) var_17)) & (((/* implicit */int) (signed char)-49)));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_45 [i_0] [i_1] [i_9] [i_9] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_9] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 2147483639))))) : (((/* implicit */int) arr_5 [i_9] [i_3] [(unsigned short)6]))));
                        arr_46 [i_0] [i_1] [i_9] [i_9] [(unsigned char)8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) arr_43 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            arr_50 [i_9] [i_1] [i_9] [i_1] [i_10] = ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_7)) >= (var_15)))) : (((/* implicit */int) arr_30 [i_10] [i_9] [4] [i_1])));
                            arr_51 [i_0] [i_1] [i_9] [i_0] [i_9] [i_10] = ((/* implicit */unsigned short) ((arr_11 [i_1] [16U] [i_9] [i_9]) + (arr_11 [i_9] [i_1] [i_1] [i_9])));
                        }
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_9] [i_9] [(unsigned char)5] = ((/* implicit */int) (!(((/* implicit */_Bool) 2231252481837830251ULL))));
                            arr_57 [(signed char)13] [i_0] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_54 [i_9]))));
                            arr_58 [i_0] [i_1] [(unsigned short)3] [i_9] [i_11] = ((/* implicit */unsigned short) arr_12 [i_3] [i_3]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            arr_62 [i_0] [i_9] [i_9] [i_9] [(unsigned short)7] [i_12] = ((/* implicit */int) (-(12U)));
                            arr_63 [i_0] [i_9] [i_3] [i_9] [i_12] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_3] [i_9])) ? (-2768975491443238589LL) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_9] [i_12])))));
                            arr_64 [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_7)));
                            arr_65 [i_0] [i_9] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483640))))) : (((/* implicit */int) (unsigned char)99)));
                        }
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            arr_69 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (15965305944278824348ULL)));
                            arr_70 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) -2147483646);
                        }
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 3) 
                        {
                            arr_77 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_48 [0] [i_0] [i_3] [i_3] [i_0] [i_0]);
                            arr_78 [i_0] = ((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)));
                            arr_79 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_15 - 1] [i_15 + 2] [i_15] [i_0] [8LL] [i_15]))));
                        }
                        for (unsigned short i_16 = 4; i_16 < 17; i_16 += 3) 
                        {
                            arr_82 [i_3] [i_1] [i_16] [i_16] [0LL] = ((arr_16 [i_0] [i_1] [i_16] [i_14]) ? (1902474863U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 51609653U)) ? (-304896771) : (((/* implicit */int) (_Bool)0))))));
                            arr_83 [i_0] [(_Bool)1] [(_Bool)1] [i_16] = ((/* implicit */unsigned int) ((((arr_0 [i_16 - 1]) ? (((/* implicit */int) arr_55 [i_3] [i_1] [i_1] [i_16 - 4] [17])) : (((/* implicit */int) var_11)))) * (((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) var_14))))));
                            arr_84 [i_0] [i_16] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_16)))));
                        }
                        arr_85 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_14]))));
                    }
                    arr_86 [i_3] [(unsigned char)7] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_73 [i_0] [i_0] [i_0]));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_89 [i_17] [9U] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 9608202418366164942ULL))))) & (((/* implicit */int) min((arr_30 [i_0] [i_0] [i_17] [i_0]), (arr_30 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_90 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1164196338)) ? ((~(arr_87 [i_17]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_54 [i_0])) : (((/* implicit */int) arr_13 [i_0] [14] [i_17])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_93 [i_18] = ((/* implicit */signed char) var_8);
                        arr_94 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((-6601457651012668322LL) + (((/* implicit */long long int) var_15))));
                    }
                }
            }
        } 
    } 
}
