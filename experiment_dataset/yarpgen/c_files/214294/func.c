/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214294
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) (_Bool)1);
        var_16 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((((_Bool) arr_3 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)65535)), (6))) + (((arr_3 [i_0] [(unsigned char)4]) - (arr_3 [2] [i_1])))))) : (((((/* implicit */_Bool) 552245184)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
            var_18 ^= ((/* implicit */long long int) var_6);
            arr_4 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) var_9);
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (996945699U))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
                var_21 = ((/* implicit */unsigned long long int) arr_1 [i_3 + 1]);
            }
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_2 [i_2]))));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_4 + 4]);
                var_23 = ((/* implicit */unsigned int) ((int) arr_5 [i_4] [i_4 + 2] [i_4 + 1]));
            }
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_24 = (+(var_12));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) arr_17 [4LL] [i_6 - 1]);
                            var_25 = ((/* implicit */unsigned char) var_13);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) (+(((((/* implicit */_Bool) 552245174)) ? (var_9) : (((/* implicit */long long int) var_6))))));
                var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_5 [i_5] [4ULL] [i_0])))));
            }
            for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [6LL] [7U] [i_0])) || (((/* implicit */_Bool) ((unsigned char) (unsigned char)6))))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_8] [i_9 - 1] [(short)5] &= ((/* implicit */signed char) (-(arr_23 [i_2] [i_2 - 1] [i_8 + 2] [i_9 + 1] [i_2])));
                            var_29 -= ((/* implicit */unsigned char) ((unsigned int) arr_25 [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8 + 3]));
                            var_30 &= ((/* implicit */unsigned short) arr_20 [i_0] [i_2] [i_8] [i_2] [i_2]);
                            var_31 = ((/* implicit */long long int) arr_21 [i_0] [i_2] [i_2] [(signed char)3] [i_10] [i_10]);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8])) + (2147483647))) >> (((var_2) - (7042999870532875972ULL)))));
            }
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                var_33 = ((/* implicit */long long int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_12] [4U] [i_0])) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_26 [i_0] [i_11] [i_13])))));
                            arr_42 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */int) arr_13 [i_0]);
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [9U] [0U] [i_2 + 1])) ? (arr_39 [i_0] [i_2 - 1] [i_2 - 1]) : (arr_39 [i_12] [8U] [i_2 - 1])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_14 = 3; i_14 < 11; i_14 += 2) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_1 [i_11]))));
                    arr_46 [i_0] [i_2] [i_11] [i_14] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [12LL] [12LL] [i_11])) ? (arr_11 [i_0] [i_14] [i_14 - 1] [i_14]) : (arr_11 [i_0] [i_11] [i_14] [i_14])));
                }
                for (int i_15 = 2; i_15 < 12; i_15 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 12; i_16 += 1) 
                    {
                        arr_51 [i_16 + 1] [i_15] [i_11] [i_15] [i_0] = ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)0))));
                        var_37 = ((/* implicit */unsigned short) ((arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1]) + (arr_3 [i_2 - 1] [i_15 - 1])));
                    }
                    arr_52 [i_11] [i_2] [i_2] [i_11] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_7 [i_11])) : (var_8))) : (((/* implicit */int) ((short) var_2)))));
                    arr_53 [i_0] [i_11] [i_15] [i_11] = ((/* implicit */signed char) arr_20 [i_0] [i_0] [i_11] [i_15 - 2] [(short)4]);
                    var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2080374784)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_11] [(short)7] [i_15] [i_15 - 1])))) << (((((((arr_37 [(signed char)1] [i_2] [i_11] [(signed char)5] [(signed char)1]) | (((/* implicit */long long int) var_13)))) + (6371138583161475097LL))) - (23LL)))));
                }
                for (int i_17 = 2; i_17 < 12; i_17 += 3) /* same iter space */
                {
                    arr_57 [11] [i_0] = ((/* implicit */unsigned char) ((unsigned int) 0U));
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (2LL)))) ? (-5191052383053598888LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                }
                arr_58 [i_2] [i_2] [12U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [11] [i_2] [i_2 - 1])) + (arr_33 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
            }
            for (unsigned int i_18 = 3; i_18 < 11; i_18 += 2) 
            {
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((arr_54 [i_0] [i_18 - 3]) != (((/* implicit */unsigned long long int) var_0)))))));
                var_41 = ((/* implicit */int) (~(arr_10 [i_18] [i_18 + 2] [i_18 + 2])));
            }
            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((arr_3 [i_2 + 1] [i_2 + 1]) != (arr_3 [i_2 + 1] [i_2 + 1]))))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2 - 1])) - (((/* implicit */int) arr_1 [i_2 - 1]))));
                        var_44 = ((/* implicit */int) min((var_44), (var_8)));
                        arr_67 [i_0] [i_19] = ((/* implicit */_Bool) var_14);
                        arr_68 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [2LL] [2U] [9] [i_2 - 1])) ? (arr_5 [i_2] [(unsigned char)3] [(short)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [(_Bool)1] [i_19])))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_21 = 1; i_21 < 15; i_21 += 3) 
    {
        var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_69 [i_21])) ? (((/* implicit */int) (signed char)-1)) : (arr_70 [i_21] [i_21]))))) ? (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [i_21])) ? (var_8) : (((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (-(arr_69 [i_21 - 1])))))))));
        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) arr_71 [i_21]))));
        arr_72 [i_21] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) arr_71 [i_21 + 2])) ? (((/* implicit */unsigned int) var_6)) : (arr_71 [i_21 + 1])))));
    }
    var_47 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
    {
        for (int i_23 = 0; i_23 < 23; i_23 += 3) 
        {
            {
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (arr_75 [i_23])))))) ? (((var_3) / (((/* implicit */long long int) max((-1741353216), (((/* implicit */int) arr_77 [i_22] [i_22] [i_22]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (_Bool)0))))))));
                var_49 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) arr_75 [i_23]))), (max((var_0), (arr_74 [i_22] [i_22])))));
                arr_80 [i_22] [i_22] = ((/* implicit */signed char) arr_78 [i_22] [i_23] [i_23]);
            }
        } 
    } 
}
