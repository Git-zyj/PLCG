/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37284
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
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_3 + 1])) ? (arr_1 [i_0 - 3] [i_3 + 1]) : (arr_1 [i_0 - 3] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 4] [(short)2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0] [i_1 + 1])))))))));
                            arr_13 [(unsigned char)11] [11ULL] [i_2] [i_3 + 4] [i_4] = ((/* implicit */_Bool) arr_7 [i_0] [4U]);
                        }
                    } 
                } 
            } 
            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [5LL] [i_1] [i_0] [(short)10] [i_0] [i_0])) ? (min((((/* implicit */long long int) max((((/* implicit */int) var_2)), (arr_9 [i_0])))), (arr_11 [i_1 - 1] [i_0 - 4] [i_0 - 3] [2U] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0 - 4])) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_0] [i_1 - 1] [i_0] [i_0])) : (arr_1 [i_0] [i_1 + 1]))) <= (((/* implicit */int) var_0))))))));
            var_22 -= ((/* implicit */unsigned char) arr_4 [i_1 + 1]);
        }
        var_23 = ((/* implicit */_Bool) ((((min((arr_7 [i_0] [1ULL]), (((/* implicit */int) arr_5 [i_0 - 1])))) + (2147483647))) << (((((/* implicit */int) var_12)) - (24922)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    var_24 ^= ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_6 - 2] [i_6 - 2])) : (((/* implicit */int) arr_21 [10ULL] [i_6] [i_5])));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_7 + 3])) == (((((-286539369) + (2147483647))) << (((((/* implicit */int) (unsigned char)102)) - (102)))))))) % (((/* implicit */int) var_2)))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */short) arr_19 [i_5] [i_6] [i_8 + 2]);
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_6 - 2]))));
                }
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_6]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_29 *= ((/* implicit */short) ((max((((/* implicit */long long int) max((-286539369), (((/* implicit */int) (unsigned short)5856))))), ((-(arr_18 [i_10] [(signed char)19] [(_Bool)1]))))) < (((/* implicit */long long int) (~((+(((/* implicit */int) arr_15 [i_5])))))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) 789256357)) == (4079849962U)));
                        var_31 = ((/* implicit */unsigned int) ((arr_28 [i_6] [i_6 + 1] [i_9] [i_9 + 3] [i_6 + 1] [i_10]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)11]))) >= (arr_18 [i_9] [i_6 + 2] [(short)1])))) / (((/* implicit */int) var_15)))))));
                        arr_30 [i_5] [0U] [i_9] [i_6] [(_Bool)1] [i_5] = ((/* implicit */short) arr_24 [(short)12] [i_5] [i_5]);
                        var_32 = ((((((/* implicit */int) (short)-4701)) & (1856731807))) | (((((/* implicit */_Bool) min((arr_18 [i_5] [i_6] [i_9 + 1]), (arr_18 [18] [(unsigned char)21] [i_9])))) ? (((/* implicit */int) (!(arr_25 [i_5] [i_6] [i_9] [i_10])))) : (((/* implicit */int) arr_16 [i_9 + 1] [i_9 + 1])))));
                    }
                    for (int i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_33 &= ((/* implicit */long long int) arr_21 [i_5] [i_6 - 2] [i_5]);
                        arr_33 [i_5] [i_5] [i_6] [i_5] = arr_20 [i_6] [i_11 + 1];
                        /* LoopSeq 4 */
                        for (signed char i_12 = 3; i_12 < 22; i_12 += 3) 
                        {
                            var_34 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_35 [i_9 + 3])) ? (((/* implicit */int) arr_35 [i_9 + 1])) : (((/* implicit */int) arr_35 [i_9 + 1])))), (((/* implicit */int) arr_35 [i_9]))));
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_35 [i_11 + 1]), (arr_35 [i_11 + 1])))) : (((((/* implicit */int) arr_35 [i_11 - 1])) | (((/* implicit */int) arr_35 [i_11 + 1]))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) (~(arr_23 [(unsigned char)2])))) ? (((/* implicit */int) (!(arr_36 [(unsigned char)15] [i_6] [i_6] [(_Bool)1] [i_11] [i_6] [i_11])))) : (arr_27 [i_6])))));
                            arr_38 [(short)1] [i_6] [i_6] [i_6] [i_12] = arr_17 [i_5] [i_5] [i_5];
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_37 = ((/* implicit */short) arr_21 [(unsigned short)21] [(unsigned char)12] [i_6]);
                            arr_41 [i_6] [i_6] [10LL] [i_11 - 1] = arr_21 [7] [20] [i_6];
                        }
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                        {
                            var_38 = ((/* implicit */int) arr_36 [i_6 - 2] [i_9] [i_6] [i_9 - 1] [i_14] [i_9 - 1] [i_14]);
                            arr_44 [i_14] [i_6] [i_6] [17U] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_23 [i_11]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [(unsigned char)22])))))) << (((((((/* implicit */int) arr_17 [i_11] [i_11] [i_11])) ^ (((/* implicit */int) arr_25 [i_5] [i_6 + 2] [i_9] [i_11])))) - (48263))))))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [(unsigned char)7] [i_9]))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [(unsigned char)19] [i_6]))) : (arr_32 [(signed char)21] [(signed char)21] [5] [i_11] [i_11 - 1] [i_14])))))) == ((-(((1856731807) >> (((14354120064184657527ULL) - (14354120064184657497ULL)))))))));
                            var_40 = ((/* implicit */unsigned short) arr_24 [i_6] [i_11 - 1] [i_6]);
                            arr_45 [i_5] [i_6] [i_9] [14U] [i_6] = ((/* implicit */unsigned char) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_24 [i_11 - 1] [i_6 + 1] [i_11 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9 + 3] [i_9] [i_11 - 1] [i_11 + 1] [i_15 + 1])) >> (((/* implicit */int) (!(arr_25 [i_5] [i_6] [i_6] [i_6])))))))));
                            arr_49 [i_5] [i_6] [i_9 + 3] [i_9 + 3] [(unsigned char)22] = (~(((/* implicit */int) arr_25 [i_6 - 1] [i_9 + 1] [i_9 + 1] [i_6 - 1])));
                        }
                    }
                    for (int i_16 = 1; i_16 < 22; i_16 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [(unsigned short)13] [(unsigned char)7] [i_6] [i_9] [i_16])) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [1] [i_6] [i_16 - 1] [1] [i_6]))) + (arr_23 [i_5]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            arr_55 [i_9 + 3] [i_6] = ((/* implicit */unsigned char) arr_34 [i_5] [i_6 + 2] [i_9] [i_9] [i_17]);
                            var_43 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_9 - 1])) >= (((/* implicit */int) arr_14 [i_9 - 1])))) ? (((/* implicit */int) arr_14 [i_9 + 1])) : (((/* implicit */int) arr_51 [i_9 + 3]))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_50 [i_6 + 1])) / (((arr_32 [i_9 + 3] [i_9 + 1] [i_9] [14] [i_9] [i_16 - 1]) - (((/* implicit */unsigned int) arr_50 [i_6 - 1]))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_18 = 2; i_18 < 21; i_18 += 1) 
                        {
                            var_45 = ((/* implicit */int) arr_14 [(signed char)10]);
                            var_46 = arr_35 [i_5];
                        }
                        for (unsigned short i_19 = 1; i_19 < 20; i_19 += 2) 
                        {
                            arr_61 [i_5] [(_Bool)1] [i_9] [i_9] [i_6] = ((/* implicit */unsigned char) arr_37 [4] [i_6 + 2] [i_16 - 1] [(unsigned char)14] [(short)1]);
                            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) arr_54 [i_16 + 1] [i_6] [i_9 - 1] [i_16] [i_19]))));
                        }
                        for (long long int i_20 = 1; i_20 < 22; i_20 += 3) 
                        {
                            arr_64 [i_6] [i_16] [i_6 + 2] [i_6 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [i_5] [i_6 - 1] [i_9 + 1] [i_16] [i_20] [i_20] [i_6 + 2]))))))))) < (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? (arr_24 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_56 [i_20 - 1] [i_20 + 1] [i_6 - 1] [i_6] [i_6] [i_5] [i_5]))))));
                            arr_65 [i_5] [i_6] [8] [i_5] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_5] [21LL] [i_5]))) % (var_17)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_51 [i_5]))))) : (((arr_56 [(unsigned char)16] [(unsigned char)16] [(short)21] [(unsigned char)6] [16] [i_20 - 1] [i_20]) & (((/* implicit */int) arr_46 [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_5]))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_5] [i_6] [i_9] [i_6] [i_16 - 1] [i_16 - 1] [i_20])) || (((/* implicit */_Bool) arr_23 [i_5]))))), (((((/* implicit */unsigned int) arr_56 [i_6 + 2] [i_6] [7] [i_6] [i_6] [7LL] [i_6 - 1])) ^ (var_17))))) : (((((/* implicit */_Bool) arr_32 [i_5] [i_9 + 2] [i_5] [i_9 + 2] [i_20 - 1] [9U])) ? (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_23 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6 - 1] [i_16] [i_20 - 1])))))));
                        }
                    }
                }
                arr_66 [(signed char)1] [i_6] = ((/* implicit */long long int) arr_37 [i_6] [18] [i_6 - 2] [i_6 + 2] [i_5]);
                arr_67 [i_5] [i_6] = ((/* implicit */unsigned short) (-(arr_39 [(_Bool)1] [i_6 + 1] [i_6] [i_6] [(short)21])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_21 = 1; i_21 < 21; i_21 += 2) 
                {
                    arr_70 [i_5] [(_Bool)0] [i_6] = ((/* implicit */unsigned char) arr_19 [i_5] [16ULL] [i_21 - 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) 
                        {
                            {
                                arr_76 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_21 [i_5] [i_6] [i_6])) & (((/* implicit */int) arr_17 [i_23] [7] [7])))) << (((/* implicit */int) arr_19 [i_21 - 1] [i_6 - 2] [i_21 + 1]))));
                                var_48 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_48 [i_21] [i_21 - 1] [i_21] [i_21] [i_21] [(unsigned char)15] [i_21 - 1]))));
                            }
                        } 
                    } 
                }
                var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_6])) & (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_15 [0LL])))) : (((/* implicit */int) arr_25 [i_6 - 2] [i_6 - 2] [(unsigned char)15] [i_6])))), (((((/* implicit */_Bool) (signed char)70)) ? (1856731807) : (((/* implicit */int) (unsigned char)147)))))))));
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned short) ((((((var_8) - (((/* implicit */int) var_13)))) - (((var_5) + (var_8))))) - (var_5)));
    var_51 = ((((/* implicit */int) (_Bool)1)) == (789256370));
}
