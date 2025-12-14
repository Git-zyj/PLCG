/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42427
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_10)))) ? (((/* implicit */int) (unsigned short)42195)) : ((+(-1016295372)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) var_7)) : (min((((/* implicit */int) var_3)), (0)))))) : (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_15 [11] [i_1] [i_1] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((short) arr_5 [i_0])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (((unsigned int) arr_4 [i_5 + 2] [i_2])))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) | (arr_3 [11] [i_5 - 1]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_5] [i_5 + 2]))))))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_6] [(short)3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (arr_16 [i_2] [i_2])))), (min((((/* implicit */unsigned int) (short)1797)), (var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            var_21 = arr_9 [i_0] [i_1] [i_2] [i_5];
                            var_22 = ((/* implicit */int) (((~(((var_9) & (var_11))))) << (((min((var_10), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_5])))) - (73ULL)))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_23 = (-(((/* implicit */int) arr_7 [i_5] [i_1] [i_5 + 2] [i_5 + 1])));
                            var_24 = (+(((/* implicit */int) arr_9 [i_5 + 1] [i_1] [i_1] [i_2])));
                            var_25 = ((((/* implicit */int) (unsigned short)65526)) <= (((/* implicit */int) (unsigned short)10)));
                            arr_23 [i_0] [i_1] [(short)11] [i_5] [i_7] = (-(((/* implicit */int) arr_8 [i_1] [i_5 + 2])));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((signed char) arr_14 [i_0] [i_5 + 2] [i_5 + 2] [i_5] [i_7])))));
                        }
                        for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [1LL] [i_0] = ((/* implicit */_Bool) var_1);
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [(signed char)7] [(signed char)3] [i_1] [i_2] [i_5 + 2] [i_8])))))))));
                            arr_29 [i_0] [i_1] [i_1] [(unsigned char)11] [i_8 - 1] = ((/* implicit */short) var_7);
                            arr_30 [i_0] [i_5] [(unsigned short)5] [(_Bool)1] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((arr_22 [4ULL] [i_5 + 1] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 + 1] [i_8 + 1]))))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((max((var_4), (((/* implicit */int) min(((unsigned short)42969), (((/* implicit */unsigned short) var_7))))))), (((((/* implicit */int) arr_25 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_8 + 4] [i_8 - 1])) ^ (var_4))))))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_33 [i_0] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (var_4)))) ? (((/* implicit */int) max((((/* implicit */short) arr_8 [i_9] [i_9])), (var_15)))) : ((+(((/* implicit */int) arr_8 [i_1] [i_2])))));
                        arr_34 [i_0] [(unsigned short)8] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_8 [i_9] [i_2]))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_1)))) ? (min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) (~(1593576433375033236LL)))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (signed char)-31))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_40 [8U] [i_1] [(_Bool)1] [11] &= ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [(signed char)9])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_35 [6] [6] [i_2] [i_10])))) : ((~(((/* implicit */int) var_15))))))) : (max((arr_11 [(signed char)4] [6LL] [i_10] [i_11]), (((/* implicit */unsigned long long int) var_13))))));
                                arr_41 [i_0] [i_1] [1LL] [(_Bool)1] [2U] = ((/* implicit */short) arr_9 [i_0] [i_11] [10] [i_11]);
                                var_30 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) ((short) (signed char)-47))), (((long long int) arr_15 [i_11] [i_10] [i_2] [5ULL]))))));
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 4; i_13 < 11; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_50 [i_0] [i_13] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_13 + 1] [i_13 - 4] [i_13 - 3] [i_13 + 1] [i_13 - 4]))) <= (((((/* implicit */_Bool) arr_42 [i_0] [i_12] [2U])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22571))))))))));
                            arr_51 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [(signed char)9] [i_1] [i_13] [i_14])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_14))))))) : (((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_1] [i_12] [i_13]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                        }
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) min(((signed char)-96), ((signed char)85))))))) >> (((min((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1] [i_13])) ? (var_10) : (arr_37 [i_0] [i_1] [i_12] [i_12] [i_13]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [(short)2] [i_1] [i_12] [i_13])) ? (-1930204682) : (((/* implicit */int) var_5))))))) - (3108580969411807209ULL)))));
                        arr_52 [i_13 + 1] [i_12] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_13 - 4]);
                        arr_53 [1ULL] [i_1] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) var_14);
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 9; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            {
                                var_32 -= ((/* implicit */unsigned int) (short)1807);
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) min((arr_43 [i_16] [i_15] [i_1] [i_1]), (arr_7 [i_0] [i_16] [i_15] [(signed char)2]))))));
                                arr_60 [i_0] [i_0] [5ULL] [i_12] [(signed char)9] [i_16] = ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) (short)-9951)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_5 [i_0])))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_1] [i_12] [i_12] [i_15] [i_15])))));
                                arr_61 [i_0] [i_12] [(signed char)3] [9LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))))), (max(((unsigned char)239), (((/* implicit */unsigned char) (signed char)-8))))));
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (((unsigned long long int) (short)1807)))))));
                            }
                        } 
                    } 
                    arr_62 [i_12] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_47 [i_0] [i_0] [(unsigned short)8] [i_0] [i_12])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_2)))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_17 = 1; i_17 < 9; i_17 += 2) 
                {
                    arr_65 [i_0] [i_1] [i_17] |= ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) max((arr_55 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_49 [i_0] [(unsigned short)5] [i_0] [i_1] [i_17] [(unsigned short)5]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39973))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            {
                                arr_73 [i_0] [i_17] &= ((/* implicit */long long int) (+((-(((((/* implicit */int) arr_49 [i_0] [i_1] [i_17 - 1] [i_18] [i_18 + 2] [i_19])) >> (((((/* implicit */int) (unsigned short)25563)) - (25543)))))))));
                                arr_74 [i_0] [i_0] [i_17 + 1] [i_18] [i_18] [i_19] [i_19] = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_27 [i_19] [i_18] [5ULL] [0LL] [1])), (var_4)))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_9))) : (min((((/* implicit */unsigned long long int) (signed char)47)), (281474976710655ULL))))), (((/* implicit */unsigned long long int) ((signed char) var_7)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
