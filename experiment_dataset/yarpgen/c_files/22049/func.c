/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22049
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [i_3 - 2] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_1 [i_0 + 1] [i_1 - 3])) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_1 - 2]))))));
                        var_11 = ((/* implicit */signed char) arr_5 [5]);
                        /* LoopSeq 4 */
                        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            arr_15 [i_2] [i_1] [i_2] [i_2] [i_4] |= ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) - (((((/* implicit */int) arr_12 [i_3] [i_3] [i_4 + 1] [i_2] [i_4])) ^ (((/* implicit */int) arr_12 [i_4] [(short)2] [i_4 + 1] [i_2] [i_4])))));
                            arr_16 [i_2] &= ((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */int) (short)4)) << (((8878505607656682653ULL) - (8878505607656682645ULL)))));
                            var_13 *= (-(((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [8ULL])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_3] [i_3] [i_2] [i_1] [i_0]))))))))));
                            var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 3]))));
                            arr_24 [i_3] [3ULL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6] [i_1 + 1] [i_1] [i_0]))) >= (arr_14 [i_6] [i_1] [i_3] [4] [i_3] [i_0 + 2] [i_0 + 2])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_3] [i_2] [5LL] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 - 2] [1] [1] [i_3 - 1] [i_7])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_0 + 2] [i_0 + 2])) : ((~(((/* implicit */int) arr_9 [i_7] [i_3] [i_2] [i_0] [i_0]))))));
                            var_16 = ((/* implicit */signed char) arr_4 [i_3 - 2] [i_0 + 2] [i_1 - 1]);
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_17 = (+((~(75557766U))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 - 1]))));
                            arr_34 [i_9] [(signed char)8] [i_9] = arr_0 [i_0 + 1];
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            arr_38 [i_0] [i_0] [i_0 - 1] [i_10] [i_0 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_2] [i_2] [i_10] [i_2] [9ULL]))));
                            var_18 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0])))))));
                            var_20 = arr_20 [i_0 + 2] [i_1 - 1];
                        }
                        arr_39 [(unsigned char)1] [i_1] [i_2] [(unsigned char)1] [i_8] = ((/* implicit */int) arr_1 [i_1 - 2] [(_Bool)1]);
                        arr_40 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_8] [i_2] [i_8] [i_2] [i_0])) + (2147483647))) << ((((((-(((/* implicit */int) arr_32 [i_8] [i_0] [i_0 - 1] [i_0] [i_0 + 2])))) + (89))) - (24)))));
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) || (((arr_21 [i_1 - 3] [i_1] [i_2] [2U] [i_2] [i_0 - 1] [i_0]) >= (arr_21 [i_1 - 3] [i_1 + 1] [i_2] [i_1] [i_2] [i_0 + 1] [i_0])))));
                    }
                    arr_41 [i_0] = ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]);
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_21 [i_1 - 3] [i_2] [i_2] [i_2] [i_2] [i_1 - 3] [(unsigned short)6]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) >= (var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (arr_42 [i_11] [i_11]) : (((/* implicit */int) arr_45 [i_12]))))) ? (arr_48 [0ULL]) : (arr_42 [i_11] [i_11])));
                        arr_53 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (short)16384))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((arr_42 [7ULL] [i_12]) / (arr_42 [i_11] [i_11])));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            arr_61 [3ULL] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_51 [i_16 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17]))));
                            arr_62 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_17 + 1] [i_17] [i_17 + 1] [i_16 - 1])) ? (((/* implicit */int) arr_44 [i_17 + 1])) : (((/* implicit */int) arr_51 [i_11] [i_12] [i_17 + 1] [i_11] [i_17] [i_11]))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_59 [i_17] [i_17] [i_17 + 1] [i_17] [i_17] [i_17 + 1] [(_Bool)1])) * (((/* implicit */int) arr_59 [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [(short)5] [i_17] [i_16 - 2] [i_15] [i_12] [(unsigned short)8])) ? (((/* implicit */int) arr_51 [i_11] [i_11] [i_15] [2] [2] [i_17 + 1])) : (((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [6ULL] [i_11] [(signed char)1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 1; i_19 < 12; i_19 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [i_19 + 2] [12] [i_19] [i_19] [i_19])) ? (arr_65 [i_19 + 2] [i_19 + 2] [13U] [i_19] [i_19] [i_19 + 1] [i_19 + 2]) : (((/* implicit */long long int) arr_58 [i_19 + 2] [i_19 + 2] [(signed char)12] [i_19] [i_19 + 2]))));
                            arr_67 [i_19] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_19] [i_19] [(_Bool)0] [i_19] [i_19 - 1] [i_19 + 1] [i_19])) || (((/* implicit */_Bool) arr_59 [i_19] [i_19] [i_19 - 1] [i_19] [i_19 - 1] [i_19 + 1] [i_19 + 1]))));
                            arr_68 [i_11] [i_19] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_56 [i_19 - 1]);
                        }
                    } 
                } 
            }
            arr_69 [i_12] = ((/* implicit */unsigned long long int) (+(arr_48 [i_11])));
        }
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
        {
            arr_73 [i_20] [i_20] = ((/* implicit */int) arr_55 [i_20] [i_11] [i_11]);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)2)) <= (((/* implicit */int) (unsigned char)253))));
            var_30 = ((((/* implicit */_Bool) (unsigned short)16919)) ? (((/* implicit */int) (short)-28969)) : (((/* implicit */int) (short)16397)));
        }
        var_31 = (-(((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
}
