/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214852
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
    var_15 |= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) 134086656U);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_3] [i_3]);
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) -2122046746)), (6LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_0] [i_0])))) : (18446744073709551600ULL)))) ? ((-(max((5027739685994225057ULL), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [8] [8] [8] [i_3] [i_4] [i_4])) ? (14408627584758868954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((arr_3 [i_1] [i_0]) ? (arr_9 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
                            }
                            var_17 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(short)4] [i_2] [i_3]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_8 [i_3] [i_2] [i_1])))), (max((((/* implicit */unsigned long long int) arr_2 [9U])), (arr_5 [i_1])))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) arr_10 [i_3] [i_2] [i_1] [i_0]);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_0 [i_1]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) : (((/* implicit */unsigned long long int) 8191U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((367781737U), (((/* implicit */unsigned int) arr_10 [i_3] [i_2] [(unsigned short)13] [i_0]))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_0] [i_0])), (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (var_13))) : (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-8)))) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_0 [14ULL])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2032045777U)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) - ((+(((arr_5 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21163)))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 18; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (unsigned short)15447);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (13ULL) : (var_4)))) ? (((/* implicit */int) arr_17 [i_5 - 3])) : (((/* implicit */int) (_Bool)1))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) 16776192);
        arr_22 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) arr_25 [i_6])), (((/* implicit */unsigned long long int) (signed char)2))))) ? (((/* implicit */int) max((((/* implicit */short) arr_24 [i_6 - 1])), (arr_23 [i_6 - 1] [i_6 - 1])))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_23 [i_6] [i_6 - 1])) : (((((((/* implicit */int) arr_23 [i_6] [i_6])) + (2147483647))) << (((/* implicit */int) arr_24 [i_6]))))))));
        var_23 ^= ((/* implicit */unsigned char) (+(min(((+(var_9))), (((/* implicit */unsigned long long int) (_Bool)0))))));
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) arr_23 [i_6 - 1] [i_6 - 1]))) ^ (((((/* implicit */_Bool) 14960264551181821915ULL)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6 - 2])))))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) min(((short)384), (((/* implicit */short) arr_24 [i_7])))))))) * (min((-12LL), (((/* implicit */long long int) arr_28 [i_7] [i_6 + 1] [i_7]))))));
            arr_30 [i_6 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_6 + 2])))))));
        }
        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) var_3);
            arr_33 [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_6 + 3])), ((-(((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [(_Bool)1]))) : (-13LL)))))));
        }
    }
    for (int i_9 = 1; i_9 < 8; i_9 += 3) 
    {
        arr_37 [i_9] = ((short) var_11);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_36 [i_9 + 1] [i_9 + 1]), (11674116668878505463ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (-291511803) : (((/* implicit */int) arr_12 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 2] [i_9 - 1] [i_9]))))) : (451864898U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_32 [i_9]))))) : ((+(((/* implicit */int) (unsigned short)12743))))));
        arr_38 [i_9 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_9] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 - 1]))) : (var_4)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_51 [i_10] [i_11] [i_11] [i_11] [i_10] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(arr_44 [i_10] [i_11]))) << (((9221120237041090560ULL) - (9221120237041090522ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [(signed char)0] [i_12] [i_11] [i_10] [i_10])) ? ((~(0U))) : (((/* implicit */unsigned int) arr_31 [i_10] [i_10] [21]))))) : (min((((/* implicit */unsigned long long int) arr_40 [2LL])), (18446744073709551594ULL)))));
                        arr_52 [i_13] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (short)-15528);
                        arr_53 [i_10] [i_11] [i_11] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65531)), (arr_41 [i_10]))))))));
                    }
                } 
            } 
        } 
        arr_54 [i_10] [i_10] = (!(((/* implicit */_Bool) var_6)));
        arr_55 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_11), (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_10] [3LL] [i_10]))) : (((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [(unsigned short)3] [i_10])))))));
    }
}
