/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51717
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        arr_3 [i_0] = ((/* implicit */short) (_Bool)1);
        var_12 = (~(arr_2 [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_6 [i_1 + 2]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (var_6)));
                arr_15 [i_3] [i_2] [8LL] = (short)7;
            }
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                arr_20 [i_4] [i_2] [i_4] = ((/* implicit */short) var_10);
                var_14 = ((/* implicit */short) (_Bool)1);
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_15 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 3] [i_2 + 1] [i_4]))) / (4095U)));
                            arr_26 [i_1] [i_2] [i_4] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_4 - 1]))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 9223372036854775792LL))));
                            var_17 = ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_4] [i_2 - 2] [i_1 - 1]))));
                        }
                    } 
                } 
                arr_27 [i_4] [i_2 - 2] [i_4 + 1] = ((/* implicit */_Bool) ((((unsigned int) var_1)) + ((+(var_1)))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    arr_31 [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_30 [i_1 - 1] [i_2 - 1] [i_4 + 1] [i_7 + 1]));
                    /* LoopSeq 4 */
                    for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        var_18 = ((arr_35 [i_2 - 2] [i_4 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                        var_19 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_7))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        arr_38 [4ULL] [i_4] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2 - 1] [i_2 - 1])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_10))));
                        arr_39 [i_4] [i_2 - 2] [i_4] [i_7] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 4] [i_9] [i_9 + 4])) | (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775785LL)))))));
                        arr_40 [i_4] [i_7] [i_4 - 1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) & (((((/* implicit */_Bool) arr_1 [i_1])) ? (9223372036854775799LL) : (((/* implicit */long long int) 2147483647U))))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 14; i_10 += 4) 
                    {
                        var_20 = ((unsigned int) ((((/* implicit */_Bool) 2147483647U)) ? (2047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [11U])))));
                        var_21 = (~(arr_35 [i_1 + 1] [i_2 - 1]));
                        arr_43 [i_4] [i_2] [i_4 + 1] [i_7] [(short)6] [i_10] = (~(var_6));
                    }
                    for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_11] [i_4] [i_7] [i_4] [i_1 + 1]))));
                        var_23 = ((/* implicit */short) ((-9223372036854775799LL) ^ (((/* implicit */long long int) arr_37 [i_4] [(short)1]))));
                        var_24 &= ((/* implicit */short) 2147483648U);
                        var_25 = ((/* implicit */unsigned long long int) ((arr_37 [i_4] [i_4]) + (arr_37 [i_4] [i_4])));
                    }
                }
                for (signed char i_12 = 1; i_12 < 14; i_12 += 4) /* same iter space */
                {
                    arr_49 [i_4] [i_2 + 1] [i_2 + 1] [(short)11] = ((/* implicit */unsigned char) ((arr_8 [8U] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))));
                    arr_50 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_28 [i_4] [i_4] [i_2 - 1] [i_4]));
                }
                for (signed char i_13 = 1; i_13 < 14; i_13 += 4) /* same iter space */
                {
                    arr_53 [i_4] [i_4 - 1] [i_4] [i_2] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)32757)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    arr_54 [(_Bool)1] [i_4] [i_2] [i_4] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_2));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_1] [i_1] [i_1] [i_1 + 1])))));
                        arr_57 [i_4] [i_4] [i_2 + 1] [(short)8] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_5))))));
                        arr_58 [i_2] [i_4] [i_4] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % ((-9223372036854775807LL - 1LL))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) var_2);
                        var_28 = ((/* implicit */unsigned char) ((unsigned int) ((arr_52 [i_1] [i_2 - 2] [0U] [i_15]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                        var_29 = ((/* implicit */unsigned int) (short)-6);
                    }
                    for (short i_16 = 3; i_16 < 13; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */short) var_3);
                        arr_66 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((16383U) >= (arr_56 [i_4] [i_2 - 1] [i_2 - 2])));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [8U] [i_2 - 2] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 + 2] [i_2 - 2] [i_16 - 1] [i_16])))));
                        var_32 = ((((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        arr_67 [i_1] [i_4] = ((/* implicit */unsigned int) 9223372036854775785LL);
                    }
                }
            }
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */long long int) var_3)) : (9223372036854775792LL))))))));
        }
        for (unsigned char i_17 = 2; i_17 < 14; i_17 += 1) /* same iter space */
        {
            arr_70 [i_1] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) : (((arr_63 [i_1] [(signed char)6] [i_1 + 3] [14U] [i_17] [i_17] [i_17 + 1]) ^ (((/* implicit */long long int) var_3))))));
            var_34 = ((((/* implicit */_Bool) ((2147483626U) / (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [(short)2] [i_17]))) : (((var_8) / (2147483625U))));
            arr_71 [i_1] [i_17 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_1 + 3] [i_1] [i_1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1 + 3] [(unsigned char)2] [i_1] [(unsigned char)2] [i_1]))) : (4294967295U)));
            arr_72 [i_1] [i_17 - 1] = ((/* implicit */short) arr_2 [i_17 + 1]);
        }
    }
    /* LoopNest 3 */
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            for (unsigned int i_20 = 1; i_20 < 13; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (short i_22 = 0; i_22 < 15; i_22 += 3) 
                        {
                            {
                                arr_85 [i_18] [i_22] [i_20] [i_21] [i_22] [i_22] = (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
                                var_35 = arr_32 [i_22] [i_21] [i_20] [i_19] [i_18];
                            }
                        } 
                    } 
                    arr_86 [i_20] [i_19] [i_18 + 1] = ((/* implicit */unsigned int) arr_44 [i_18] [i_18] [i_18 + 1] [i_18] [i_18] [i_18] [i_18]);
                    arr_87 [i_18] [i_19] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((arr_22 [i_19] [i_19]) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_18 + 1] [i_18 + 1])) ? (((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) arr_62 [i_18 + 1] [i_18] [14U] [i_19] [i_20 + 2])))) : (((/* implicit */int) (short)0)))))));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (short)-1)), (arr_68 [i_18 + 1] [i_18] [i_20 + 2]))))))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (_Bool)1);
}
