/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35875
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    var_12 = min((min((((long long int) var_8)), (max((((/* implicit */long long int) (unsigned char)146)), (var_4))))), (((long long int) max((arr_3 [i_0] [6LL]), (((/* implicit */long long int) var_10))))));
                    var_13 = ((((long long int) ((long long int) arr_2 [i_0] [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))))), (((unsigned char) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 = ((long long int) ((long long int) min((arr_2 [i_0] [(unsigned char)4]), (arr_14 [i_0] [(unsigned char)1] [i_2] [i_3] [i_4] [i_4]))));
                                var_15 = ((unsigned char) ((unsigned char) min((var_4), (1731590493072644194LL))));
                                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) ((long long int) 5684106968768722007LL))));
                                var_16 = ((long long int) max((((long long int) arr_1 [i_3] [i_3])), (max((-6842767659792677122LL), (((/* implicit */long long int) var_10))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_6))) << (((/* implicit */int) ((((/* implicit */_Bool) 1731590493072644194LL)) || (((/* implicit */_Bool) -5763018642552715382LL))))))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0] [6LL])) != (((/* implicit */int) (unsigned char)231))))))));
                    var_17 = ((/* implicit */unsigned char) ((((long long int) ((long long int) arr_2 [i_0] [(unsigned char)12]))) & (((long long int) ((long long int) var_3)))));
                    arr_19 [i_0] [(unsigned char)7] [8LL] [i_1] = ((/* implicit */unsigned char) ((min((((var_2) << (((((/* implicit */int) var_7)) - (177))))), (max((-6842767659792677120LL), (var_11))))) < (max((((long long int) var_4)), (((/* implicit */long long int) ((unsigned char) var_3)))))));
                }
                /* LoopSeq 3 */
                for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_18 = ((((max((-5198559404572534139LL), (-426737144264068558LL))) - (((long long int) var_4)))) / (((long long int) ((long long int) arr_10 [i_0] [i_0]))));
                        var_19 &= ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5198559404572534139LL)))) / (((arr_17 [(unsigned char)2] [(unsigned char)2] [i_1]) + (arr_23 [i_0] [i_1] [i_0] [(unsigned char)12] [i_7]))))) / (max((((long long int) var_2)), (((long long int) 1731590493072644174LL)))));
                        arr_24 [i_0] [i_0] [i_0] [10LL] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((2896795373305472672LL), (((/* implicit */long long int) var_3))))) || (((/* implicit */_Bool) ((long long int) (unsigned char)91))))));
                        arr_25 [i_0] = max((((long long int) ((long long int) -2896795373305472673LL))), (((long long int) ((unsigned char) (unsigned char)236))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_3), (var_5)))))) | (((long long int) min((5198559404572534138LL), (((/* implicit */long long int) var_7))))));
                        arr_30 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */unsigned char) ((min((((long long int) (unsigned char)2)), (max((((/* implicit */long long int) (unsigned char)47)), (var_6))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((arr_1 [i_6] [12LL]), (((/* implicit */long long int) var_10)))))))));
                        var_21 |= ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_9 [11LL] [i_1]), (var_0))) != (((/* implicit */long long int) ((/* implicit */int) max((var_10), (arr_6 [i_1]))))))))) - (min((max((arr_10 [i_0] [i_1]), (((/* implicit */long long int) (unsigned char)24)))), (((long long int) arr_17 [(unsigned char)6] [(unsigned char)6] [i_1])))));
                        var_22 = ((long long int) max((((long long int) -6842767659792677122LL)), (((long long int) (unsigned char)110))));
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [9LL] [i_9] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)146))) < (((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_32 [i_0] [i_0])))))))) : (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)146))) < (((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_32 [i_0] [i_0])) - (93)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_23 = ((unsigned char) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_0] [i_1])) >= (((/* implicit */int) arr_4 [11LL] [11LL] [i_10]))))), (((unsigned char) var_2))));
                            arr_36 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [7LL] [6LL] [i_9] [5LL] [5LL]))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_28 [i_0] [5LL]))))))) << (((((long long int) min((var_2), (((/* implicit */long long int) arr_2 [5LL] [5LL]))))) - (172LL)))));
                        }
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_24 |= ((unsigned char) ((long long int) min((var_11), (var_2))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) ((long long int) ((long long int) var_11)))))));
                            var_26 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((long long int) ((long long int) ((arr_28 [i_1] [i_1]) - (arr_5 [(unsigned char)11] [i_0] [i_6] [(unsigned char)6])))))) : (((/* implicit */unsigned char) ((long long int) ((long long int) ((arr_28 [i_1] [i_1]) + (arr_5 [(unsigned char)11] [i_0] [i_6] [(unsigned char)6]))))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [10LL] [i_0] = min((((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) ^ (((/* implicit */int) var_3))))) - (((long long int) var_9)))), (((long long int) max((5901423427150471084LL), (var_1)))));
                        var_27 = ((long long int) ((((long long int) arr_1 [i_6] [i_6])) & (((long long int) var_0))));
                        var_28 = ((/* implicit */long long int) ((((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_0 [9LL] [(unsigned char)10])))) >> (((((/* implicit */int) ((unsigned char) var_7))) - (150))))) % (((/* implicit */int) ((unsigned char) ((long long int) arr_5 [9LL] [i_0] [i_6] [5LL]))))));
                    }
                    arr_42 [i_0] [i_0] [(unsigned char)9] = ((long long int) min((((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((long long int) arr_28 [i_1] [i_6]))));
                }
                for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    var_29 *= ((long long int) ((max((((/* implicit */long long int) (unsigned char)202)), (arr_12 [i_0] [i_1] [i_1]))) <= (max((arr_21 [i_0] [i_1]), (var_4)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 2; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) min((((unsigned char) max((9223372036854775807LL), (arr_38 [i_0] [i_0])))), (((/* implicit */unsigned char) ((((long long int) arr_23 [i_0] [i_0] [i_0] [6LL] [i_0])) > (min((var_4), (arr_23 [i_0] [i_0] [(unsigned char)5] [i_14] [i_13]))))))));
                        arr_49 [i_0] [i_0] [i_13] [2LL] [i_13] = min((((unsigned char) max((arr_6 [i_0]), ((unsigned char)102)))), (((unsigned char) max((arr_21 [i_13] [11LL]), (((/* implicit */long long int) arr_34 [i_0] [10LL] [12LL]))))));
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_13])) ^ (((/* implicit */int) var_5))))) & (((long long int) 8780453459710615129LL)))) ^ (((long long int) ((unsigned char) var_8)))));
                        var_32 &= ((/* implicit */unsigned char) ((((((arr_43 [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))) || (((/* implicit */_Bool) max((var_6), (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [(unsigned char)0] [5LL]), ((unsigned char)40))))) - (((long long int) arr_29 [i_1])))))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_33 = ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [(unsigned char)9] [i_1] [i_13]))) / (arr_5 [i_0] [i_0] [i_13] [i_13])))) / (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) / (1125891316908032LL))), (((/* implicit */long long int) max((arr_27 [i_0] [i_1] [i_0] [4LL]), (var_7)))))));
                        var_34 = ((unsigned char) ((long long int) min((arr_35 [i_0] [i_1] [i_13] [i_0] [i_0]), (-8780453459710615129LL))));
                    }
                    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        arr_56 [i_0] [i_0] [7LL] [i_16] = min((((/* implicit */long long int) max((((/* implicit */unsigned char) ((7259014764994046043LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (min((arr_22 [i_0] [i_1] [10LL] [(unsigned char)4] [10LL]), (arr_22 [i_0] [9LL] [i_13] [i_16] [i_0])))))), (((((long long int) arr_54 [i_0] [i_1] [i_0] [i_16] [i_16] [2LL])) | (((long long int) (-9223372036854775807LL - 1LL))))));
                        var_35 = max((((/* implicit */long long int) ((unsigned char) ((arr_23 [i_0] [i_0] [i_13] [i_16] [i_16]) / (arr_8 [i_0] [i_1]))))), (((long long int) ((long long int) 35115652612096LL))));
                        arr_57 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((long long int) ((unsigned char) arr_43 [i_0] [i_0]))));
                    }
                    var_36 = max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2986867825233049702LL)))) - (((long long int) (unsigned char)232)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)230))) || (((/* implicit */_Bool) ((-4074426659954117506LL) & (arr_20 [i_0] [i_0] [i_13]))))))));
                }
                for (long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                {
                    var_37 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((unsigned char) arr_16 [7LL] [7LL] [i_0] [(unsigned char)11]))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (9223372036854775807LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 2; i_18 < 12; i_18 += 4) 
                    {
                        arr_66 [i_0] [i_0] [i_0] [i_18] = ((long long int) max((max((-6794686272183675176LL), (4740874492806310327LL))), (((/* implicit */long long int) ((unsigned char) var_7)))));
                        var_38 |= ((long long int) ((long long int) ((unsigned char) arr_6 [i_1])));
                        arr_67 [i_0] [i_1] [i_1] [i_18] = ((unsigned char) ((long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)255)))));
                    }
                    for (unsigned char i_19 = 1; i_19 < 12; i_19 += 4) 
                    {
                        arr_72 [8LL] [i_0] = ((/* implicit */unsigned char) max((((long long int) ((long long int) arr_53 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12]))), (((long long int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))))));
                        var_39 = ((long long int) max((((/* implicit */long long int) ((unsigned char) var_6))), (((long long int) var_3))));
                    }
                }
                var_40 = max((((((long long int) -990959801602292408LL)) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))))), (((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), ((unsigned char)54))))) - (((long long int) var_0)))));
            }
        } 
    } 
    var_41 |= ((/* implicit */unsigned char) ((((long long int) ((long long int) var_11))) % (((((long long int) -5198559404572534117LL)) - (min((((/* implicit */long long int) var_3)), (5198559404572534126LL)))))));
    var_42 = max((max((((long long int) 9223372036854775807LL)), (min((var_11), (((/* implicit */long long int) var_10)))))), (((long long int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_43 = ((long long int) ((long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_3)))));
}
