/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23442
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
    var_11 = (-(((((/* implicit */_Bool) var_8)) ? (max((var_6), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) var_8))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [8LL])))))));
        var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_5));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_14 = var_9;
                        arr_17 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (min((var_3), (((/* implicit */long long int) arr_13 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 524306LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_9)), (var_1)))))) ? (((max((((/* implicit */long long int) var_2)), (8829107236211379136LL))) ^ (((((/* implicit */_Bool) 1065808466U)) ? (arr_14 [i_1] [i_1] [i_1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))))))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_0))))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_5 - 1] [i_5 - 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [(unsigned short)13] [i_5 - 1] [(signed char)12])))))) ? (((/* implicit */long long int) (~(var_8)))) : (((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5 - 1] [i_5]))) : (arr_7 [i_5 + 1] [i_5 + 1] [i_5])))));
        }
    }
    /* LoopSeq 3 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_6] [i_6])) - (((/* implicit */int) arr_21 [(signed char)6] [i_6]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_6])) < (((/* implicit */int) arr_20 [i_6]))))), ((-(var_1)))))));
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (max((524306LL), (((/* implicit */long long int) arr_21 [i_6] [i_6]))))));
        var_19 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) ((((var_5) + (9223372036854775807LL))) << (((((var_5) + (1405048875179704932LL))) - (40LL))))))), (((unsigned char) 127))));
    }
    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_23 [i_7 + 1])) ? (((/* implicit */unsigned long long int) arr_23 [i_7 + 1])) : (arr_24 [i_7 - 1] [i_7 + 1])))));
        arr_26 [i_7] = ((/* implicit */unsigned int) var_3);
    }
    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (arr_25 [i_8 + 1])));
                            var_22 = ((/* implicit */unsigned int) -126);
                        }
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_28 [i_8 - 1] [i_11 + 3])))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_39 [i_8 + 1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (arr_36 [(_Bool)1]))), (arr_23 [i_8 + 1])))))))));
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_9] [i_8] [i_11 + 3] [i_8])) ? (((((/* implicit */_Bool) var_8)) ? (arr_25 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (max((((/* implicit */long long int) var_4)), (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_5)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((~(((/* implicit */int) var_9))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((min((arr_28 [i_14] [i_9]), (arr_28 [i_10] [i_8 - 1]))), (((/* implicit */unsigned int) ((unsigned short) arr_21 [i_8 - 1] [i_11 + 2])))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 524287LL))));
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_14])) ? (min((var_7), (((/* implicit */long long int) arr_20 [i_14])))) : (var_5)))) : (((max((((/* implicit */unsigned long long int) var_7)), (var_6))) << ((((~(var_7))) - (7184237207275804541LL)))))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10] [i_9] [i_9] [i_11] [i_14]))) & (min((var_10), (((/* implicit */long long int) var_8)))))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_8 + 1] [12] [i_14]))))))))));
                            var_29 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((351618518U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((268435200) >> (((var_6) - (7974450746664321556ULL))))) : (((((/* implicit */int) (signed char)85)) >> (((((/* implicit */int) var_0)) - (210))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_14])))))));
                        }
                        for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11 - 1])) ? (((/* implicit */long long int) arr_42 [i_8 + 1] [i_11 + 3] [i_10] [i_11 + 3] [i_8])) : (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11 + 1]))) * (2954813336U)))) : (((((/* implicit */_Bool) (unsigned short)510)) ? (var_1) : (((/* implicit */long long int) arr_40 [i_8])))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min(((+(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_11] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24902))) : (arr_29 [(signed char)14])))))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min((((long long int) ((((/* implicit */_Bool) 524284LL)) ? (((/* implicit */int) arr_20 [i_15])) : (((/* implicit */int) arr_21 [i_8] [i_8]))))), (max((max((var_3), (((/* implicit */long long int) (unsigned short)37690)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-90))))))))))));
                            var_33 = ((/* implicit */int) var_10);
                            var_34 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) arr_35 [i_10] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))) - (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        }
                        arr_44 [(signed char)1] [(unsigned short)3] [i_9] [i_10] [i_8] = ((/* implicit */signed char) arr_42 [i_8] [i_8] [i_9] [i_10] [i_8]);
                        arr_45 [i_11] [i_9] [i_10] [i_8] [(signed char)10] [(signed char)4] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (-524306LL) : (((/* implicit */long long int) arr_23 [i_9])))), (max(((+(var_7))), (((/* implicit */long long int) arr_40 [(unsigned short)18]))))));
                        var_35 = ((/* implicit */_Bool) (~(((unsigned long long int) var_5))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_36 ^= ((/* implicit */signed char) (-(var_10)));
                            var_37 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (351618497U)));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_11] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_21 [(unsigned char)14] [i_16 - 1])))) : (((((/* implicit */long long int) arr_42 [i_8] [(signed char)10] [i_10] [i_9] [i_8])) / (var_10)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        arr_50 [i_8] [i_9] [i_8] [i_10] [i_17] = ((/* implicit */long long int) var_2);
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 2; i_18 < 19; i_18 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((var_6) != (((((/* implicit */_Bool) (unsigned short)18)) ? (arr_24 [i_9] [i_18]) : (arr_49 [i_8 - 1] [i_8 - 1] [i_10] [i_17] [i_18])))));
                            var_40 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) ? (arr_46 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8]) : (arr_46 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1])));
                            arr_53 [i_8] [7U] [i_10] [i_17] [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) arr_23 [i_18 - 1]))));
                            arr_54 [i_8] [i_17] [i_10] [(_Bool)1] [i_9] [i_8] = (+(arr_51 [i_8] [(_Bool)1] [i_8 - 1] [i_8]));
                        }
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_17] [i_10] [i_8] [i_8] [(unsigned short)2] [i_8])) ? (((/* implicit */int) (unsigned short)425)) : (((/* implicit */int) (signed char)13))))) : (((((/* implicit */unsigned long long int) var_3)) % (var_6)))));
                    }
                    for (signed char i_19 = 1; i_19 < 19; i_19 += 1) 
                    {
                        arr_57 [i_8 - 1] [4ULL] [4ULL] [4ULL] &= ((/* implicit */unsigned long long int) min((min((var_5), (((/* implicit */long long int) arr_20 [i_8 + 1])))), (((((/* implicit */_Bool) ((unsigned long long int) 524295LL))) ? (((var_1) ^ (((/* implicit */long long int) arr_51 [i_8] [i_9] [i_10] [i_19])))) : (min((((/* implicit */long long int) (_Bool)1)), (-524274LL)))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (var_7)));
                        var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_2) ? (var_5) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1]))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [10LL] [i_10] [i_8]))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1142059890)) ? (((/* implicit */int) arr_20 [i_10])) : (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (((unsigned int) var_9))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 16; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 1; i_21 < 19; i_21 += 3) 
                        {
                            {
                                var_45 = arr_32 [i_8] [i_10] [i_21];
                                arr_62 [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                                var_46 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-15)), (var_1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_47 |= ((/* implicit */unsigned long long int) var_4);
    }
}
