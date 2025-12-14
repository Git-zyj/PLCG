/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31070
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
    var_15 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) (unsigned char)212)));
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) == ((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
    }
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_13));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) arr_13 [i_4 - 1]);
                        arr_14 [i_4] = ((/* implicit */long long int) min((((arr_10 [i_1] [i_2] [(_Bool)1]) % (arr_10 [i_3 - 1] [i_3 + 2] [i_3 + 1]))), (min((((/* implicit */unsigned long long int) ((20ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3])))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (8ULL) : (((/* implicit */unsigned long long int) var_13))))))));
                        var_20 = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
        } 
        var_21 = ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((((/* implicit */_Bool) min((20ULL), (20ULL)))) ? (((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((18446744073709551592ULL) * (((/* implicit */unsigned long long int) arr_7 [i_1] [9U] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [2ULL])))))) ? (var_13) : (((/* implicit */long long int) var_4))))));
        var_22 = ((/* implicit */long long int) min((((((((/* implicit */int) arr_6 [(unsigned char)8] [i_1])) * (((/* implicit */int) arr_5 [i_1] [i_1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((min((min((arr_15 [i_5] [i_5]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [(unsigned short)9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112))))))) + (((/* implicit */long long int) var_3))));
        arr_18 [i_5] [i_5] = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (arr_7 [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_5] [i_5]) : (((/* implicit */unsigned int) var_9)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        /* LoopSeq 4 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_24 = ((/* implicit */_Bool) arr_11 [i_5] [i_6]);
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((int) 4052654245U)) + ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14))))) : (arr_16 [i_5])));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((signed char) arr_7 [i_5] [(unsigned char)17] [i_5]))), (((((/* implicit */_Bool) 3175399409U)) ? (var_3) : (((/* implicit */int) arr_22 [i_5])))))) + ((-(((((/* implicit */int) var_0)) & (var_3)))))));
            arr_23 [16ULL] = ((/* implicit */unsigned int) (short)-30753);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_26 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */signed char) var_3);
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 38ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_5] [i_7] [i_8] [2])))))));
                arr_27 [i_5] [i_5] [(unsigned short)8] [i_8] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_8))));
                /* LoopNest 2 */
                for (long long int i_9 = 4; i_9 < 18; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10] [i_10] [i_9] [i_9 - 3] [i_9])) ? (((/* implicit */int) arr_32 [i_10] [i_10] [14] [i_10] [i_10] [i_9 + 3] [i_8])) : (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10] [i_10] [i_9 + 2] [i_9 + 4]))));
                            arr_33 [i_5] [i_7] [i_10] = ((/* implicit */long long int) ((signed char) arr_31 [i_5] [i_9 + 4] [i_9 + 1] [i_9 - 3] [i_9 + 4] [i_10] [i_10]));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                var_30 = ((/* implicit */long long int) ((unsigned short) min((arr_6 [i_5] [i_5]), (((/* implicit */unsigned char) arr_12 [i_5] [i_11] [i_11] [i_7])))));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 4; i_12 < 20; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_5] [i_7] [i_11] [i_12])) + (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 1713802816)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))))), (((/* implicit */unsigned long long int) (~(var_13))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) & (10105623698754933461ULL)));
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    arr_43 [i_5] [16LL] [i_11] = var_7;
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_3)))))) <= (var_11)));
                    var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [16] [i_7] [i_7] [i_13 + 4])) ? (((((/* implicit */_Bool) 932832155U)) ? (((/* implicit */unsigned long long int) arr_7 [i_5] [i_7] [i_11])) : (arr_13 [i_5]))) : (((/* implicit */unsigned long long int) arr_15 [i_11] [i_7]))));
                }
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (signed char i_15 = 2; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_24 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((_Bool) 18446744073709551595ULL))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)14))))));
                            var_36 = ((/* implicit */_Bool) min(((-(min((var_11), (((/* implicit */unsigned int) arr_40 [i_5] [18LL] [i_11] [i_14] [17])))))), (((/* implicit */unsigned int) arr_44 [(signed char)4] [i_7]))));
                            var_37 = ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_6)));
                            var_38 = ((/* implicit */unsigned int) min((((((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))) >> (((min((18446744073709551592ULL), (18446744073709551592ULL))) - (18446744073709551584ULL))))), (((/* implicit */int) arr_11 [i_5] [(_Bool)1]))));
                            var_39 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) || (((/* implicit */_Bool) 3271579237978228183LL))))))), (-1967310234)));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_42 [i_5] [i_7])), (arr_30 [i_7] [i_5] [i_5] [i_5]))))) : (arr_10 [i_7] [i_7] [i_7])));
        }
        for (unsigned char i_16 = 2; i_16 < 21; i_16 += 3) 
        {
            var_41 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_32 [(unsigned char)6] [i_16 + 1] [i_16] [i_16 - 1] [i_16] [i_16] [(unsigned short)0])) ? (((/* implicit */int) arr_32 [(signed char)4] [9LL] [i_16] [i_16 - 1] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_32 [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 1] [i_16 + 1] [(short)17] [i_5])))), ((~(((/* implicit */int) arr_6 [i_5] [13]))))));
            var_42 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)1))))) <= (((unsigned long long int) var_13))))) ^ (min((arr_7 [i_16 - 2] [i_16 - 1] [i_16 - 1]), (((/* implicit */int) var_7))))));
            var_43 = (-(((arr_24 [i_16 - 1] [i_16 + 1] [i_16 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_16 - 1] [i_16 + 1]))))));
            var_44 = ((((/* implicit */_Bool) min((arr_34 [i_16 + 1] [i_16 - 2] [i_16] [i_16 - 1]), (arr_34 [i_16 + 1] [i_16 + 1] [i_16 - 2] [i_16 - 1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -3271579237978228183LL)) ? (((/* implicit */long long int) 2024789003U)) : (3271579237978228183LL))) != (var_8)))) : (((arr_48 [i_5] [i_5] [i_16] [i_16] [i_16 - 2] [i_16 - 1] [i_16]) >> (((/* implicit */int) ((signed char) arr_17 [(unsigned char)16]))))));
        }
        for (unsigned char i_17 = 3; i_17 < 20; i_17 += 4) 
        {
            var_45 = ((/* implicit */long long int) arr_40 [i_17] [(short)14] [i_5] [(unsigned char)6] [i_5]);
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_5] [i_5] [i_5] [15] [2U] [i_17] [i_17])) ? (((arr_51 [1] [i_17 - 3] [i_17 + 2]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_5] [i_5] [i_17 + 1]))))) : (arr_20 [i_5] [i_17 - 3])));
            var_47 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (var_13)))) || (((/* implicit */_Bool) var_4)))) ? (min((min((((/* implicit */long long int) (signed char)66)), (arr_34 [(short)21] [16U] [i_17 + 1] [i_5]))), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) arr_11 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_21 [21LL]))))) ? (min((((/* implicit */long long int) arr_22 [(unsigned char)2])), (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5])) + (((/* implicit */int) arr_25 [i_5] [(unsigned char)1] [i_17])))))))));
        }
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))));
    }
}
