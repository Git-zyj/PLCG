/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244614
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)83)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))))) ? (var_0) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max(((unsigned short)1023), ((unsigned short)64513)))))))));
    var_14 = ((/* implicit */unsigned char) var_9);
    var_15 = ((/* implicit */unsigned short) ((unsigned int) (-(((var_5) | (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((min((var_6), (((/* implicit */long long int) ((arr_6 [i_0] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_0])))))) ^ (((/* implicit */long long int) min((arr_5 [i_1] [i_1] [i_0]), (arr_0 [i_0])))));
                var_16 = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_3 [i_0] [i_0])))) + (2147483647))) >> (((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))) - (3494107171U)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)62200))))) ? (max((((/* implicit */unsigned long long int) var_1)), (11452538994025786232ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_13 [i_0])), (var_8))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_3])) & (((/* implicit */int) (!(((/* implicit */_Bool) 11452538994025786232ULL))))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_2 - 2])) || (((/* implicit */_Bool) arr_1 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_13 [i_2 - 1]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1023)) ^ (((/* implicit */int) arr_10 [i_4] [i_4]))))), (((((/* implicit */_Bool) 11452538994025786232ULL)) ? (2385483595096543483ULL) : (((/* implicit */unsigned long long int) 9116540305218787500LL))))))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_15 [i_2 - 1] [i_2] [i_2] [i_2]), (arr_15 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) (_Bool)0)))) : (-10190409)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 439507785U)) ? ((~(((/* implicit */int) (signed char)-18)))) : (193378666)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_24 [i_1] [i_0] [i_2] [i_5] = ((((/* implicit */_Bool) 9502818417991976554ULL)) || (((/* implicit */_Bool) (unsigned short)1016)));
                                arr_25 [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_20 [i_0] [i_5] [i_5] [16U] [i_5] [i_6])), (((((/* implicit */long long int) arr_17 [i_0])) / (arr_21 [i_0] [i_0] [i_0] [i_0] [i_6]))))) <= (min((((long long int) (short)-4036)), (((/* implicit */long long int) arr_17 [i_0]))))));
                                var_21 = (+(4196709230U));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((1639260875U), (567965458U)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_7 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-27236)) ? (((/* implicit */unsigned int) -2017011915)) : (439507785U)))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])), (var_0)));
                        arr_34 [i_8] [i_8] [i_8] [(_Bool)1] = ((/* implicit */short) (-(max(((~(3062327601U))), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((arr_3 [i_0] [i_0]) ? (max((((unsigned int) var_7)), (((((/* implicit */_Bool) var_1)) ? (arr_17 [i_9]) : (arr_15 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_9] [i_7 - 1])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_7 - 1])) : (((/* implicit */int) (unsigned short)40274)))))));
                        var_24 = ((((((/* implicit */_Bool) arr_10 [i_0] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_0] [i_7] [i_9]))))))) ? (((((/* implicit */_Bool) min(((unsigned short)0), (arr_36 [i_0] [5U] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_7 - 1])))) : (((int) arr_32 [i_0] [i_1] [i_1] [i_0])))) : (min(((~(((/* implicit */int) arr_28 [i_7] [11ULL] [i_7])))), (((/* implicit */int) ((short) arr_22 [i_9] [3ULL] [i_7 + 2] [i_0]))))));
                        arr_37 [i_0] [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_5 [i_1] [(signed char)6] [(unsigned short)17]), (-1656492948)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 -= ((/* implicit */signed char) (+(((unsigned int) arr_35 [i_1]))));
                        arr_40 [i_1] [i_1] [i_10] [i_10] [i_7] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (arr_0 [(_Bool)1]))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1] [i_10])), (arr_36 [i_0] [i_1] [i_7])))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)12177)) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_7 - 1] [i_7 + 1] [i_7]))))));
                        arr_41 [i_10] [i_10] [i_7] [i_7] [i_10] [i_10] = (~(max((max((((/* implicit */long long int) (unsigned short)25262)), (arr_38 [i_0] [i_0] [i_0] [i_1] [i_7] [i_10]))), (((/* implicit */long long int) (!(arr_14 [i_1])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_7 - 1] [i_10] [i_10])) ? (arr_0 [i_0]) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)4834)) : (((/* implicit */int) (unsigned short)12177))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8160U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-57))))) ^ (((unsigned long long int) var_5)))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 1695424466565009999ULL))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_7] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (arr_18 [i_12] [i_0] [i_7] [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((arr_11 [i_0] [15ULL] [i_7] [i_10]), (((/* implicit */signed char) arr_6 [i_10] [i_1] [i_0]))))))) : (((/* implicit */int) (unsigned short)62200))));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */int) ((_Bool) arr_43 [i_0] [i_0] [i_1] [i_13] [i_1] [i_1] [i_7]))) != (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)57)) - (52)))))) : (((arr_6 [i_0] [i_1] [i_7 - 2]) ? (arr_8 [i_0] [i_0] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_7 - 1]))))))))));
                        var_31 = ((/* implicit */int) var_8);
                        var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25261))) + (arr_4 [i_1] [i_7])))) ? (((/* implicit */unsigned long long int) -4826840943105335048LL)) : (((unsigned long long int) arr_9 [i_13] [16] [16] [i_13]))))));
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                {
                    var_33 *= ((/* implicit */_Bool) ((unsigned short) arr_46 [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]));
                    arr_51 [11U] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [i_14]);
                    arr_52 [i_0] [i_0] [i_0] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_14] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-78)) + (((/* implicit */int) (signed char)-57)))))));
                    var_34 = ((/* implicit */signed char) (-(((arr_44 [i_14] [i_14] [(short)17] [1U] [i_14]) << (((arr_21 [i_0] [i_0] [10] [i_0] [i_0]) - (4996239221061586023LL)))))));
                }
                for (long long int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_12 [i_0] [4ULL] [i_15] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (0ULL))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (-((+(arr_17 [i_0])))));
                        var_37 = ((max((min((1840470783011736031LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0])) | (((/* implicit */int) var_1))))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_16 - 1] [i_16 - 1] [i_16 - 1]))))));
                    }
                    var_38 = ((/* implicit */unsigned int) max((var_38), (3062327601U)));
                    var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                }
                arr_60 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_58 [i_0] [i_1])) ? (((/* implicit */int) arr_58 [i_1] [i_1])) : (((/* implicit */int) arr_58 [i_0] [i_1])))));
            }
        } 
    } 
}
