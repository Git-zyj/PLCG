/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43194
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) != ((+(0ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_11 &= ((/* implicit */short) (~(arr_6 [i_2] [i_2 + 3] [i_2 + 2] [i_0])));
                    var_12 ^= ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 2] [i_1] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 - 1] [i_4] [(signed char)0])) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 2]))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 + 2])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_3])) : (((/* implicit */int) arr_4 [0U] [i_1] [i_0])))) : (((/* implicit */int) ((arr_4 [i_4 + 1] [i_1] [i_0]) || (((/* implicit */_Bool) 7365039166948263538LL)))))));
                                arr_16 [i_1] [i_2] [i_1 + 2] [i_1] = ((/* implicit */_Bool) (-(arr_0 [i_1] [i_4 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 4; i_5 < 11; i_5 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (-((-(2222253211U))))))));
            var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) << (((279861349) - (279861336)))))) ? (((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) arr_8 [i_0] [i_5 + 1] [(signed char)5] [i_5] [i_5]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)37266)) <= (((/* implicit */int) arr_19 [i_5])))))));
            arr_20 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (signed char)64);
            arr_21 [i_0] [i_5 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)238))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 - 4] [i_5] [i_6] [i_7] [i_8] [i_7])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8] [i_8] [i_0] [i_6] [i_5] [i_0]))) * (var_1))) : ((-(4294967295U)))));
                            arr_31 [i_0] [i_5] [i_0] [i_6] [10ULL] [i_8] = ((/* implicit */signed char) ((arr_29 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 2]) >= (((/* implicit */unsigned long long int) (-(arr_27 [i_8]))))));
                            var_17 = ((/* implicit */unsigned char) ((int) arr_5 [i_7] [i_6] [i_5 - 1] [i_5 - 1]));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) var_7);
            }
            for (int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    arr_39 [i_10] [i_9] [i_9] [i_5] [i_0] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) var_8))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_0))));
                }
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) arr_29 [i_0] [11ULL] [i_5 - 4] [i_5] [i_5] [i_5 + 1])))));
                /* LoopSeq 1 */
                for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(7670978799314509344ULL))))));
                    var_22 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_19 [i_11 - 1]))))));
                }
            }
            for (unsigned int i_12 = 4; i_12 < 11; i_12 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) (+(arr_25 [i_5 + 1] [i_12 + 1] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_51 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_14] [i_5 + 1] [i_12 - 2] [i_12] [i_12 - 4])) ? (-1423784630) : (((/* implicit */int) arr_10 [i_12 - 3] [i_14] [i_12] [i_12] [i_12] [i_12 - 4]))));
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (10097052886494978239ULL) : (((/* implicit */unsigned long long int) var_6)))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 4] [i_15])) ? (((/* implicit */unsigned long long int) arr_8 [i_5 - 1] [(signed char)4] [4LL] [i_13] [i_15])) : (10097052886494978239ULL))))));
                        arr_55 [i_15] [i_5] [i_12 - 2] [i_5] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_12 - 4] [i_12 - 4] [i_15] [i_12 - 3] [i_5 - 1])) ? (((/* implicit */int) arr_54 [i_12 - 3] [i_12 - 1] [i_15] [i_12 - 4] [i_5 - 2])) : (((/* implicit */int) (unsigned short)0))));
                        arr_56 [i_15] [5ULL] = ((/* implicit */signed char) arr_48 [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_57 [1U] [i_12] [10LL] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((short) (-(var_4))));
                    arr_58 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29631)) ? (((/* implicit */long long int) 2655116101U)) : (arr_18 [i_13] [i_12 + 1] [i_12 + 1])));
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_12 - 3] [i_12 - 3] [i_12 - 1] [i_12]))));
                    arr_59 [i_13] [i_5 + 1] [i_12 - 2] [i_13] = ((/* implicit */unsigned short) arr_24 [i_5] [i_13] [i_12 + 1] [i_5] [i_5 - 2] [i_0]);
                }
                for (unsigned long long int i_16 = 3; i_16 < 10; i_16 += 3) 
                {
                    arr_62 [i_0] [i_5 - 3] [1] [1] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_54 [6] [i_12 - 1] [i_0] [i_0] [10U]))));
                    arr_63 [i_5 + 1] [i_5 + 1] [10ULL] [0ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_12 - 3] [i_16] [8U]))));
                }
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    arr_66 [i_0] [i_0] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_43 [i_12 - 4] [i_5 + 1] [i_0] [11ULL]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [8] [i_12] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (var_4)))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_18 [i_17] [i_17] [i_5 - 1])));
                    arr_67 [i_12] [i_5] [i_12 - 1] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775805LL)) ? ((~(arr_37 [i_12] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [5] [i_5] [i_5] [i_12] [i_17] [i_12])) ^ (((/* implicit */int) var_8)))))));
                    var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_0]))) : (2222253235U)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_43 [i_5] [i_5 - 4] [i_12 - 3] [i_17]))));
                }
                arr_68 [i_0] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_0] [i_0]))))));
            }
        }
        var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))) : (arr_36 [i_0] [i_0] [i_0] [i_0])));
        var_30 ^= ((/* implicit */unsigned char) (short)4830);
        arr_69 [i_0] = ((/* implicit */signed char) (+(arr_35 [i_0] [i_0] [i_0])));
    }
    for (short i_18 = 1; i_18 < 17; i_18 += 1) 
    {
        var_31 *= ((/* implicit */unsigned long long int) arr_71 [i_18]);
        var_32 &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((int) arr_70 [i_18])))))));
    }
}
