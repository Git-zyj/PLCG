/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221112
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(-2667323523441402515LL)))) ? (arr_4 [i_1] [7U]) : (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((var_2) - (8418639542303474168LL)))))) : (((((/* implicit */_Bool) var_6)) ? (5279077542279420082LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_18)))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) var_4);
                            var_21 = ((/* implicit */unsigned short) arr_1 [i_3 + 1] [i_3 - 1]);
                            var_22 = ((/* implicit */long long int) min((var_22), ((+(var_3)))));
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_13 [(short)20] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 24; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    arr_20 [(unsigned char)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (~(var_1)))) : (((((/* implicit */_Bool) arr_12 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1])) ? (arr_12 [i_6] [i_5 - 2] [i_6] [i_5] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1])))))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) var_14));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */short) 2926163032U);
                        arr_24 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) 1368804263U);
                        var_24 &= ((/* implicit */_Bool) (-(var_5)));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_29 [i_8] [i_6] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1445388077)) ? (((/* implicit */unsigned int) arr_27 [i_8] [i_6])) : (var_5)))) ? (((((/* implicit */_Bool) arr_27 [i_8] [i_8])) ? (arr_0 [i_5 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) var_17))))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_5]) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_0])) && (((/* implicit */_Bool) var_16))))))))) ? (min((((/* implicit */long long int) (-(var_1)))), (((((/* implicit */_Bool) arr_26 [i_0] [i_5] [i_5] [i_8] [i_5])) ? (1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_6] [i_8])))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_13 = 2; i_13 < 18; i_13 += 3) /* same iter space */
                        {
                            arr_42 [i_9] [i_9] [i_11] [i_9] [i_9] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((arr_12 [i_11] [i_13 - 1] [i_12] [i_13 - 1] [14LL]), (((/* implicit */long long int) arr_39 [i_12] [i_13 + 1] [i_13 + 2] [i_13 + 3] [i_13] [i_13 + 3])))) : (((/* implicit */long long int) arr_39 [i_12] [i_13 + 1] [i_13 + 3] [i_13 + 1] [i_12] [i_13 + 1]))));
                            arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_12] [i_9] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */unsigned long long int) 5279077542279420076LL)))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 2; i_14 < 18; i_14 += 3) /* same iter space */
                        {
                            arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (_Bool)0)))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-3058))));
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            arr_48 [i_14] [i_12] [i_9] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */int) 9223372036854775807LL);
                            var_27 = ((/* implicit */int) var_12);
                        }
                        for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            arr_52 [i_11] [i_10] [i_11] [i_12] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */long long int) -873337893)) : (((((/* implicit */_Bool) arr_37 [i_9] [i_11] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))))) ? (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_10]))))) : (arr_15 [i_10] [i_11] [i_15]))) : (((/* implicit */long long int) ((((arr_5 [i_9] [i_10] [i_11] [i_15]) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))))))));
                            arr_53 [i_9] [i_10] [6LL] [i_9] [i_15] = ((/* implicit */unsigned char) arr_1 [i_11] [22LL]);
                            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (var_18)))) ? (((/* implicit */long long int) 1368804257U)) : (((arr_5 [i_9] [i_10] [(short)22] [(short)22]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8497701299724320238LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_9] [i_11] [i_12] [i_15])) ? (((/* implicit */int) arr_7 [i_10] [i_12] [i_10])) : (((/* implicit */int) arr_31 [i_12]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                            var_29 = ((/* implicit */int) (-((-(2926163032U)))));
                        }
                        for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_30 *= ((((/* implicit */_Bool) min((arr_39 [i_12] [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) arr_39 [i_12] [i_10] [i_12] [i_10] [i_10] [i_10])) : ((-(3107238173U))));
                            arr_56 [i_10] [i_10] [i_10] [i_10] [(short)17] [i_10] [i_9] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_4))))) + (var_9))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_3) <= (var_7)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            arr_61 [i_9] [i_10] [i_11] [i_12] [i_17] &= ((/* implicit */unsigned short) min((-5279077542279420083LL), (((long long int) 2926163033U))));
                            var_32 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(arr_38 [i_9] [i_9] [i_9] [i_17])))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_17)))))) : (((arr_22 [i_9] [i_9] [i_11] [i_12] [i_17]) ? (((/* implicit */int) arr_22 [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                            arr_62 [i_9] [i_9] [(_Bool)1] [i_12] [i_12] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_6 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((arr_6 [i_9] [i_12] [i_11] [i_9]), (((/* implicit */long long int) var_16)))) : (var_10)));
                            var_33 = ((/* implicit */unsigned short) ((short) var_8));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 19; i_18 += 4) 
        {
            for (short i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_9] [i_18] [i_19] [i_19])) % (((/* implicit */int) var_12))))) != (((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [i_19] [i_19] [i_20]))) : (arr_50 [i_9] [i_18] [i_9] [i_20] [i_9] [i_18]))) : (((((/* implicit */_Bool) 1368804263U)) ? (arr_15 [i_9] [i_9] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_1 [i_19] [i_19])) : (arr_4 [i_20] [i_18])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (arr_27 [i_18] [i_18]))) : (min((var_1), (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))))) : (var_5)));
                            var_36 -= arr_22 [i_9] [i_9] [i_9] [i_9] [i_9];
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_45 [i_20] [i_18] [12LL] [i_20] [18] [i_21] [i_21])) + (2147483647))) >> (((((/* implicit */int) arr_64 [i_9] [i_18])) - (100)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (arr_38 [i_9] [i_9] [i_20] [i_21])))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))))))) : (1368804269U))))));
                        }
                        arr_74 [i_9] [i_9] [i_19] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3463)))))) ? (((/* implicit */int) arr_41 [i_9] [i_18] [i_18] [i_9] [i_18 - 2])) : (((((/* implicit */_Bool) arr_70 [i_18] [i_9] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) var_0)) : (arr_38 [i_18 + 2] [i_18 + 2] [i_18] [i_18 - 1])))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */short) var_12);
    var_39 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_12))))) : (var_2)))));
    var_40 = var_11;
}
