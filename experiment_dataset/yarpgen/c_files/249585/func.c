/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249585
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
    var_17 = (unsigned char)153;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_18 = ((long long int) (+(-1492293980541420462LL)));
        var_19 *= ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (129233868986082989LL));
        arr_3 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((1008806316530991104LL) >= (var_5))))) | (arr_0 [i_0]));
    }
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_8);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1008806316530991105LL)) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)0] [i_2])) ? (var_5) : (arr_13 [i_3] [i_3] [i_3]))) : (arr_16 [i_1]))), (((/* implicit */long long int) (-(var_9))))));
                            var_21 ^= ((/* implicit */unsigned char) ((-1008806316530991105LL) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3 + 1])))));
                            var_22 &= (+(var_8));
                            var_23 = ((/* implicit */unsigned char) -5225810104468131676LL);
                            var_24 = ((/* implicit */int) arr_5 [i_2]);
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_1] = ((/* implicit */unsigned char) (~((+(var_5)))));
                            arr_25 [3LL] [i_2] [i_3 - 3] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) -60547038)) >= (min(((+(arr_11 [i_4] [i_3]))), (((var_13) ^ (arr_10 [i_1] [i_2])))))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 - 3]))))) : (((/* implicit */int) ((var_2) != (((/* implicit */long long int) -231483163)))))));
                        }
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            arr_29 [i_1] [i_2] [12] [i_3] [i_2] [10LL] |= ((/* implicit */unsigned char) var_16);
                            var_26 = ((/* implicit */unsigned char) min((var_13), ((~(var_5)))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) 1885318708)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_1] [i_2] [(unsigned char)3] [(unsigned char)3] [i_2])) : (-60547038)))) / (arr_0 [i_3]))) : (min(((+(var_10))), ((-(var_4))))))))));
                        var_28 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)210))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) (unsigned char)255);
        arr_30 [i_1] = ((/* implicit */int) ((unsigned char) arr_2 [i_1]));
    }
    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */long long int) (~(-1885318711)))) | (arr_0 [i_9])));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_32 [i_8 - 2])))))));
                        arr_40 [i_8 + 3] [10LL] [i_8 + 3] [i_8 + 3] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (var_5)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_14 + 1]))));
                            arr_49 [i_9] [i_9] = (unsigned char)1;
                            var_33 = ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */long long int) -1836147905)) : (1008806316530991104LL));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */long long int) (-(arr_18 [i_8] [i_9] [i_12] [i_13] [i_9]))))));
                            arr_50 [1LL] [i_9] [6] [i_12] [i_13] [(unsigned char)11] [i_14] = ((((/* implicit */_Bool) arr_12 [i_8] [(unsigned char)1] [i_8 + 1] [i_14 + 1])) ? (arr_22 [i_8] [i_13] [i_14 + 1] [i_8] [i_13] [i_8]) : (((/* implicit */long long int) ((65534) + (((/* implicit */int) (unsigned char)9))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned char) var_0);
            var_36 ^= ((((/* implicit */_Bool) arr_44 [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (arr_44 [i_8 + 2]));
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) var_10))));
            arr_53 [2LL] = max((((((/* implicit */_Bool) -4546703683835570508LL)) ? (((/* implicit */int) arr_47 [i_8 - 2] [i_8] [i_15] [i_8] [i_8])) : (-1836147905))), (((/* implicit */int) ((unsigned char) ((int) var_8)))));
        }
        arr_54 [i_8] [i_8] = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 12; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            {
                                arr_65 [i_16 + 2] [i_19] &= ((/* implicit */long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)6)))) || (((/* implicit */_Bool) ((long long int) -326432543))))))));
                                arr_66 [i_16] [i_16] = ((((((/* implicit */_Bool) arr_11 [i_16] [i_16])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (-2) : (((/* implicit */int) var_14))))) : (((long long int) arr_43 [i_8 + 3] [i_8] [i_8] [i_8])))) % (max((((/* implicit */long long int) -326432543)), (((long long int) var_7)))));
                                arr_67 [i_16] [i_16] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((9) < (((/* implicit */int) arr_19 [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_34 [0LL])) ? (9223372036854775795LL) : (((/* implicit */long long int) 976969754))))))) ? ((~(arr_51 [i_16 - 2]))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) (unsigned char)255))))))))));
                                arr_68 [i_16] [i_17] [i_16] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8])) ? (var_11) : (var_13)))) || (((/* implicit */_Bool) var_9)))) ? ((+((~(((/* implicit */int) (unsigned char)246)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)114))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        for (long long int i_21 = 3; i_21 < 14; i_21 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) max((var_38), (((unsigned char) max((((((/* implicit */_Bool) arr_52 [i_16] [i_20])) ? (((/* implicit */int) (unsigned char)150)) : (-976969754))), (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)242)) : (var_9))))))));
                                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (unsigned char)242))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) arr_72 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))) : (((((/* implicit */_Bool) ((-3444373866476704152LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) ((1090279926) <= (var_9)))) : (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 15; i_22 += 2) 
        {
            for (unsigned char i_23 = 2; i_23 < 14; i_23 += 4) 
            {
                {
                    var_40 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) -1885318711)) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_19 [i_8])) : (-326432543)))))))));
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        for (int i_25 = 1; i_25 < 12; i_25 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) var_13);
                                var_42 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-3960914633540956333LL) : (((/* implicit */long long int) -827045818))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
