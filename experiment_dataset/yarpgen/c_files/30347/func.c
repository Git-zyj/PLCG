/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30347
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [7] [i_0] = ((/* implicit */signed char) (+(arr_1 [i_0] [i_1])));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [(unsigned short)3] = ((unsigned short) max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))), (((unsigned long long int) arr_0 [i_0]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_13 [i_0] [(short)1] [(signed char)3] [(short)1] [i_4]))));
                            var_17 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-103));
                        }
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [(unsigned short)14])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1]))))));
                            arr_16 [i_5] [i_3 - 1] [i_2] [i_1] [17U] = ((/* implicit */unsigned int) max((((unsigned short) -1444301245)), (((/* implicit */unsigned short) arr_2 [i_1]))));
                            var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43087)) ? (((/* implicit */int) arr_8 [i_3 + 1])) : (((/* implicit */int) arr_9 [i_2] [i_5]))))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */int) (unsigned short)12827)) - (-946911308)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (2627962231U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (((((/* implicit */unsigned long long int) 1163663831U)) - (arr_12 [i_2] [i_1] [i_2] [i_2] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 2])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) arr_2 [i_3 + 2]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_3 + 1]), (arr_8 [i_3 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 + 1]))))) : (((/* implicit */int) ((_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) -1LL))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_23 [i_0] = ((/* implicit */short) (!((_Bool)1)));
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [(signed char)14] [i_3] [i_3] [i_2] [i_1] [1ULL] [i_0]))));
                            arr_24 [13ULL] [13ULL] [13ULL] [i_1] [(unsigned short)15] [15] [13ULL] = (~(arr_14 [i_3] [i_3] [i_2] [i_3 - 1] [i_2]));
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_3 + 2]))));
                        }
                        var_24 -= ((/* implicit */unsigned int) (+(((arr_13 [i_3] [21] [i_3 + 2] [21] [i_3 + 1]) ? (((/* implicit */int) (unsigned short)36368)) : (((/* implicit */int) (unsigned short)30140))))));
                        var_25 = ((/* implicit */unsigned char) ((signed char) (-9223372036854775807LL - 1LL)));
                        arr_25 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((int) max(((unsigned char)15), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_2] [i_2] [(unsigned char)12]))))) - (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))));
                    }
                    for (int i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        arr_29 [19LL] [i_0] [i_1] [i_2] [0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_1]));
                        arr_30 [i_2] [i_2] [i_2] [3] [i_2] = (+((+(((/* implicit */int) (signed char)111)))));
                    }
                }
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((1936876888077762893ULL) >> (((((/* implicit */int) arr_2 [i_1])) - (168)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1244344663) / (-1914870472)))) ? (((/* implicit */int) ((arr_21 [i_1] [i_1] [i_1] [i_0] [i_0]) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((short) arr_4 [i_0] [i_1])))))) : (4294967267U))))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)31))))), ((((~(arr_33 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                                var_28 = max((((/* implicit */int) ((unsigned char) (unsigned short)47522))), (((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) arr_2 [i_11])) : (((/* implicit */int) arr_2 [i_9])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_9])), (arr_21 [i_9] [i_9] [i_1] [i_0] [i_0]))))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48198)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17357))) : (2326133374U)))), (max((-3796884163214667595LL), (((/* implicit */long long int) -2097187453))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned int) arr_14 [5U] [i_1] [i_1] [i_1] [i_1])) : (arr_31 [i_0] [i_1] [i_0] [i_1]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_9])) - (((/* implicit */int) (unsigned char)140))))))))) : (((long long int) (short)0)))))));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    arr_41 [i_12] [i_1] [(unsigned char)5] [(signed char)10] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)103))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_31 &= ((/* implicit */short) arr_7 [i_14] [i_13] [20ULL]);
                                arr_47 [i_0] [(unsigned short)18] [i_12] [i_13] [4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57368)) ? (((/* implicit */int) arr_26 [i_12 + 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_3 [i_12]))));
                                var_32 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)43645))))));
                            }
                        } 
                    } 
                    var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_12 + 2])) ? (((arr_38 [i_12 + 2] [i_12] [i_1] [15]) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])))));
                    var_34 = ((/* implicit */unsigned char) (+(((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) 
    {
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [3])) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3028105320076906500ULL)) ? (arr_50 [i_15]) : (arr_50 [i_15 + 2])))), (((((/* implicit */unsigned int) arr_50 [i_15])) - (arr_48 [(short)22]))))) : (min((((((/* implicit */_Bool) (short)-189)) ? (arr_48 [10LL]) : (((/* implicit */unsigned int) arr_50 [i_15])))), (((/* implicit */unsigned int) arr_50 [i_15 + 1])))))))));
        arr_51 [i_15] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)214)))), ((~(((((/* implicit */int) arr_49 [i_15])) - (arr_50 [i_15])))))));
    }
    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 231058729U)))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_16] [i_16] [i_16] [4])) <= (-1542085220))))) - ((-(0ULL)))))));
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_17 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_9 [5U] [i_16])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)152))))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) (+(min((7133366667295311950LL), (((/* implicit */long long int) 2192918095U))))));
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (arr_46 [i_16])));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */short) (-(((/* implicit */int) arr_44 [i_16] [i_17] [i_17] [i_20]))));
                                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)60))) ? (((((/* implicit */_Bool) arr_38 [i_17] [i_17] [i_19] [i_20])) ? (arr_46 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_16] [i_17] [(unsigned short)6] [6U] [i_20]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_45 [(unsigned char)7]), ((unsigned char)59)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_49 [(unsigned char)18])) ? (((/* implicit */unsigned int) arr_14 [i_16] [i_17] [6] [i_19] [i_20])) : (arr_31 [i_16] [i_16] [i_16] [i_16]))) >> (((((((/* implicit */unsigned int) arr_58 [i_16] [(unsigned short)13] [i_18] [i_19 + 1])) * (3353661579U))) - (3050668438U)))))))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((max((arr_12 [4] [i_16] [i_17] [i_17] [16]), (arr_12 [(short)20] [i_16] [(short)20] [i_18] [i_18]))) - (arr_12 [8U] [i_17] [i_17] [i_17] [i_17]))))));
                    arr_63 [i_16] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_56 [i_16]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_16] [i_17] [i_18] [6ULL]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_17]))) + (15ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_17]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 13; i_21 += 1) 
    {
        arr_66 [i_21] &= ((/* implicit */_Bool) (~(arr_18 [i_21] [i_21] [6LL] [i_21] [i_21] [i_21] [i_21])));
        var_43 = ((/* implicit */_Bool) (-(((arr_26 [(unsigned char)6] [i_21] [i_21] [i_21]) ? (15262587810381978912ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))))));
    }
    var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)7484))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), (var_3)))))));
}
