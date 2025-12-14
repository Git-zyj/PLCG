/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238490
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
    var_13 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [i_1] [i_0])), (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (var_8)))))), (((/* implicit */unsigned long long int) var_9))));
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_9))))) ? (min((var_5), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [7ULL] [i_2])) ? (arr_0 [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))))))));
                                var_16 += ((((arr_6 [i_4]) >> (((((/* implicit */int) arr_4 [i_4])) + (31272))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2])), (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_8 [i_1] [i_1] [(_Bool)1] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_18 -= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5]);
                    arr_15 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_10 [(short)8] [i_0] [i_1] [i_0]), (((int) var_4))))), (min(((-(var_1))), (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_5])))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            arr_26 [i_0] [10ULL] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_7]))) | (var_1)));
                            arr_27 [i_6] [i_7] = arr_2 [i_1];
                        }
                        for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) (~(arr_22 [i_0] [i_9 - 1] [i_0] [i_7] [i_9] [i_9 - 1])));
                            arr_30 [i_6] [i_1] [i_6] [i_6] [i_1] [i_0] [i_6] = ((unsigned long long int) (-(((/* implicit */int) var_0))));
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (16)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [4LL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))) : (var_5)));
                            var_21 = ((/* implicit */unsigned int) var_6);
                        }
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [4] [4] [i_7] [i_11])) ? (arr_10 [i_0] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_11])));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_7] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_0] [i_7] [1U]))));
                            var_24 = ((arr_5 [i_0] [i_1] [i_6] [i_7]) > (arr_5 [i_0] [i_0] [i_0] [i_0]));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_1] [i_6] [8LL] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))))));
                        }
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [6ULL] [i_6] [i_7]))))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_6])) || (((/* implicit */_Bool) var_11)))))) / (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    }
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                    {
                        arr_40 [i_6] = arr_24 [i_6] [i_1] [i_1] [5LL] [3ULL] [i_1];
                        /* LoopSeq 4 */
                        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_43 [i_13] [i_6] [i_6] [i_6] [i_1] [i_6] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_8)))))));
                            var_28 -= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_1]))));
                            var_29 *= ((((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */unsigned int) arr_18 [i_0] [i_12]))))) * (((var_11) >> (((/* implicit */int) var_8)))));
                            var_30 ^= ((/* implicit */unsigned char) max((max(((+(var_1))), (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))), (min((((((/* implicit */_Bool) var_3)) ? (arr_39 [i_6] [i_6] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_2)))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (arr_22 [i_0] [(unsigned char)4] [i_6] [(unsigned char)4] [i_0] [3ULL])));
                        }
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            var_32 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6] [i_12] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_6] [i_12] [i_14]))) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((max((arr_17 [i_0] [i_0] [i_12]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) arr_20 [11] [1LL] [(_Bool)1] [i_12] [i_14]))))))) - (18446744073709551591ULL)))));
                            arr_46 [i_0] [i_1] [i_12] [i_6] = ((/* implicit */long long int) ((((((((arr_44 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) | (((arr_36 [i_1] [2ULL]) ^ (((/* implicit */int) arr_19 [(signed char)4] [(unsigned char)8])))))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_14])), (arr_14 [i_0] [i_1]))) - (18446744073709551588ULL)))));
                            arr_47 [i_0] [i_14] [i_14] [i_6] [i_14] [i_12] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            arr_52 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_12] [i_12] [i_15])) ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : (arr_38 [i_15] [5ULL] [i_0] [i_12])))));
                            var_33 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_1)))) << ((((-(arr_14 [i_6] [i_12]))) - (811127274795732413ULL)))));
                            arr_53 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_6] [i_6] [i_12])) ^ (((/* implicit */int) arr_37 [i_0] [7ULL] [i_0] [i_0] [(_Bool)1]))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (var_1))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_17 [i_0] [10LL] [i_6]), (((/* implicit */unsigned long long int) arr_57 [6ULL] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6] [i_6] [i_12] [i_16]))) - (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_12])))))));
                            var_36 *= ((/* implicit */unsigned long long int) (((((-(var_2))) >> (min((var_3), (((/* implicit */unsigned long long int) var_8)))))) > (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        var_37 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [6ULL] [i_12])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_56 [i_0] [i_6] [2ULL]))))))) ? (min((((/* implicit */long long int) ((signed char) var_1))), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_38 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_4 [i_0])))));
                    }
                    var_39 |= min((arr_22 [i_0] [(short)10] [i_1] [i_1] [i_6] [i_6]), (((/* implicit */unsigned long long int) ((var_1) << (((/* implicit */int) arr_7 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned long long int) max((var_40), (max((max((((/* implicit */unsigned long long int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((var_11), (((/* implicit */unsigned long long int) var_7)))))), (((var_5) & (var_3)))))));
                                var_41 *= ((/* implicit */_Bool) arr_54 [i_0] [i_0] [(unsigned short)7] [i_6] [(signed char)11] [i_17] [i_18]);
                                var_42 = ((/* implicit */long long int) arr_25 [i_6]);
                            }
                        } 
                    } 
                }
                var_43 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_29 [i_0] [(signed char)0] [i_0] [i_1] [i_1] [i_1] [(unsigned short)6])) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_13 [3ULL])) - (var_2)))))), (((/* implicit */unsigned long long int) max((arr_31 [i_1] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_4)))))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_9)))) << (((((var_10) ^ (var_5))) - (13033693880529443985ULL)))))));
}
