/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3336
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
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 1])) != (((arr_1 [i_0]) % (((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */int) arr_4 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_2 - 2] [i_2 - 3]);
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((((arr_0 [i_2 - 1] [i_2 - 1]) - (arr_0 [i_2 - 1] [i_2 + 1]))) | (arr_0 [i_2 + 1] [i_2 - 3]));
                arr_13 [i_1] = ((/* implicit */int) arr_5 [i_1] [i_3]);
                var_24 = ((((/* implicit */_Bool) 18446744073709551598ULL)) && (((/* implicit */_Bool) ((3020019127U) * (((/* implicit */unsigned int) -1131093605))))));
                arr_14 [i_1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
            }
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) arr_15 [i_1] [i_2 - 1] [i_4] [i_4]);
                var_25 = ((/* implicit */unsigned char) arr_7 [i_1] [i_2 - 2] [i_4]);
                arr_18 [i_1] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 - 2] [i_2])) / (((/* implicit */int) ((arr_4 [i_2 - 2] [i_2]) || (arr_4 [i_2 - 2] [i_2]))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_23 [i_1] [(signed char)14] [2U] = ((/* implicit */unsigned short) arr_10 [i_1] [i_4] [i_5] [i_4]);
                            var_26 = ((/* implicit */unsigned short) arr_22 [4] [4] [i_4] [i_4] [i_4]);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) + (4194303U)));
                            arr_25 [i_1] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [15] [i_6] = ((/* implicit */signed char) arr_3 [i_2]);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_32 [i_7] = ((((arr_29 [i_1] [i_7]) / (arr_26 [i_7]))) == (arr_30 [i_1] [i_1] [(short)14]));
                        arr_33 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_27 [i_1] [i_7] [i_8]))));
                    }
                } 
            } 
            arr_34 [i_7] = arr_0 [i_1] [15ULL];
            /* LoopSeq 3 */
            for (long long int i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                arr_37 [i_1] [i_7] [i_1] = arr_3 [i_1];
                arr_38 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1131093605)) != (0ULL)));
                var_27 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_31 [(unsigned char)11])) >= (((/* implicit */int) arr_28 [i_1] [i_7]))))) >= (((/* implicit */int) arr_4 [i_1] [i_1]))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_28 = arr_0 [i_1] [i_7];
                    arr_43 [i_1] [i_7] = arr_0 [i_1] [i_1];
                }
                var_29 = ((/* implicit */int) ((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]))));
            }
            for (int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                            arr_52 [i_1] [i_7] [i_13] = ((/* implicit */int) ((arr_11 [i_1] [i_1] [i_1] [i_1]) || (((((/* implicit */int) arr_27 [i_1] [(short)0] [i_1])) <= (((/* implicit */int) arr_41 [i_1] [i_1] [i_13] [i_14]))))));
                            arr_53 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) 15084355952088129254ULL))));
                        }
                    } 
                } 
                arr_54 [i_1] [i_7] [i_13] [(signed char)11] = ((/* implicit */signed char) arr_0 [i_1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    arr_59 [i_1] [i_7] [i_13] [i_7] [(_Bool)1] [i_13] = ((/* implicit */int) ((arr_0 [i_1] [(short)20]) != (((/* implicit */int) arr_44 [i_1] [i_1] [i_7] [i_1]))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_1 [i_7]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [13LL] [13LL] [(short)15] [i_16] [i_16])))))) <= (((/* implicit */int) arr_50 [i_13] [i_13 + 1] [i_13 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        var_32 = arr_1 [i_7];
                        arr_64 [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_7])) && (((/* implicit */_Bool) arr_1 [i_7]))));
                        arr_65 [i_7] [i_7] [i_13] [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_13 + 3])) || (arr_15 [i_1] [i_13 + 3] [(signed char)3] [i_16])));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_68 [i_1] [(signed char)10] [(signed char)10] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 3])) * (((/* implicit */int) arr_15 [i_13 + 3] [i_13 + 3] [i_13 + 1] [i_13 + 1]))));
                        arr_69 [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_1])) == (arr_46 [i_7] [i_13] [i_18])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_44 [i_1] [i_7] [i_7] [i_7])))))));
                    }
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_1] [i_7] [i_13] [i_16])) && (((/* implicit */_Bool) arr_47 [i_1] [i_7] [i_7] [i_7] [i_13] [i_7]))))) * (((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1]))));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    var_35 = arr_40 [i_1] [i_1] [i_1] [i_7];
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_49 [i_1] [i_1]))))) || (((/* implicit */_Bool) arr_46 [i_7] [i_13 + 3] [i_13 - 1]))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_1] [i_13 - 1] [i_13] [i_13] [i_13] [i_1])) && (((/* implicit */_Bool) arr_66 [i_1] [i_13 - 1] [i_13 + 3] [(unsigned short)14] [i_1] [i_13 + 3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_38 = ((/* implicit */short) ((arr_1 [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_1] [i_1] [i_1])))));
                        var_39 = ((/* implicit */signed char) arr_41 [i_1] [i_1] [i_1] [i_1]);
                    }
                }
                arr_75 [i_1] [i_1] [i_7] = arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] [i_1];
                arr_76 [i_1] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_1] [i_7] [i_1] [i_1] [i_7])) <= (((/* implicit */int) arr_19 [i_1] [i_7] [i_1] [i_7] [i_1]))));
            }
        }
    }
}
