/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194218
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned char) var_19))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 1745822592U)))))))))));
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)132))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [i_1 - 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) var_4)), (var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (3550565025U) : (var_2)))) >= (((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) : (((unsigned long long int) arr_13 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1])));
                            arr_16 [i_0] [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) arr_8 [13U] [i_3] [i_2] [i_0] [i_0])))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((unsigned char) var_7))), (arr_7 [i_4] [i_0] [i_0] [i_0]))))))));
                        }
                        var_23 ^= ((unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [1ULL] [1ULL] [1ULL] [i_0] [1ULL]))) : (var_7))), (((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [(unsigned char)6] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_25 |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) 3088260918U);
        var_26 = ((/* implicit */unsigned int) max((var_26), ((+(((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (arr_18 [i_5])))))));
        var_27 = ((/* implicit */_Bool) var_15);
        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_5])) != (((/* implicit */int) max((arr_9 [i_5] [2U] [i_5] [i_5] [i_5]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))))))))));
        arr_20 [i_5] = 1828906571U;
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((unsigned char) var_9)), (((/* implicit */unsigned char) (_Bool)0)))))));
                        var_30 *= ((/* implicit */unsigned char) (((+(arr_21 [i_6]))) >> (((((/* implicit */int) var_18)) - (83)))));
                    }
                } 
            } 
        } 
        var_31 = var_6;
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_35 [(unsigned char)7] [(unsigned char)8] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [11ULL])) ? (((((/* implicit */_Bool) arr_23 [i_10])) ? (arr_34 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (3664057489U))))) + (var_6)));
            arr_36 [i_6] [i_6] [3ULL] = arr_14 [i_6] [i_10];
            arr_37 [i_6] [i_10] = ((/* implicit */unsigned long long int) ((2549144703U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6])) ? (((unsigned int) var_6)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) / (var_1))))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_42 [i_6] [i_10] [i_12] [i_12 - 1] [i_12 - 1] = ((/* implicit */unsigned long long int) min(((~(arr_34 [i_6] [i_12 - 1]))), (var_6)));
                    var_33 = ((unsigned char) (~(((/* implicit */int) arr_6 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))));
                    arr_43 [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (((var_19) * (((/* implicit */unsigned long long int) arr_22 [i_10])))))));
                    var_34 ^= ((/* implicit */unsigned int) ((unsigned long long int) var_4));
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)24))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_8))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) 1665751318U))));
                    var_38 = ((/* implicit */unsigned int) max((var_38), (3550565037U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        arr_51 [i_6] [i_6] [6ULL] [(unsigned char)7] [i_6] [i_6] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) - (((/* implicit */int) arr_45 [i_6] [i_6] [i_14 - 1] [i_15] [i_6]))));
                        var_39 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_15] [i_14] [i_11] [i_10] [i_6]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_50 [i_6] [i_6] [i_6] [i_6] [i_6])))) : (max((arr_49 [i_6] [i_10]), (((/* implicit */unsigned long long int) var_9)))))) | (((/* implicit */unsigned long long int) arr_34 [i_11] [2U]))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_54 [i_6] [i_10] [i_11] [i_6] [i_14] [i_16] = ((/* implicit */unsigned long long int) arr_22 [i_11]);
                        arr_55 [i_6] [(unsigned char)6] [i_6] [i_6] [i_6] = ((unsigned char) max((((unsigned int) var_5)), (((/* implicit */unsigned int) (unsigned char)186))));
                        var_40 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_31 [i_14 - 1] [i_6] [i_14 - 1] [i_14])), (var_19))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)186)) || (((/* implicit */_Bool) arr_31 [i_14 - 1] [i_6] [i_14 - 1] [i_6])))))));
                        arr_56 [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned char)8] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_6 [i_16] [i_14 - 1] [i_14 - 1] [i_14 - 1])))) << (((((unsigned int) var_3)) - (120U)))));
                    }
                }
                var_41 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_53 [i_10]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162))))) : (((/* implicit */int) arr_30 [5ULL] [5ULL] [i_6]))))), (var_19));
                var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) ? (arr_5 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) 774500013U))));
            }
        }
        for (unsigned int i_17 = 1; i_17 < 19; i_17 += 4) 
        {
            arr_59 [i_6] [i_6] [1ULL] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_38 [i_6] [0U])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))))) : (774500013U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) arr_44 [i_17] [i_17] [(_Bool)1] [i_6] [(_Bool)1] [i_6])) : (((/* implicit */int) (unsigned char)16)))))));
            arr_60 [i_6] [i_17] [i_17 - 1] |= var_14;
            arr_61 [i_6] [i_6] = ((/* implicit */unsigned int) max((((unsigned char) 18446744073709551615ULL)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19)))))));
        }
        for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (unsigned char i_20 = 3; i_20 < 18; i_20 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((max((arr_28 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_64 [i_20] [i_19] [i_6])))), (((/* implicit */unsigned long long int) max(((unsigned char)221), ((unsigned char)16)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_18 + 1])) || (((/* implicit */_Bool) min((var_5), (arr_66 [i_6] [i_6] [i_6] [i_6]))))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned char) var_6);
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_6] [i_18 - 1] [i_18 - 1] [i_20 + 2])) ? (arr_40 [i_21] [i_18 - 1] [i_18 + 1] [i_20 - 2]) : (arr_40 [i_19] [i_18 - 1] [i_18 + 1] [i_20 - 3])));
                            var_46 += ((/* implicit */_Bool) arr_8 [i_6] [i_18 - 1] [i_19] [i_20] [i_18 - 1]);
                            arr_73 [(unsigned char)2] [i_20 + 1] [i_20 + 1] [i_6] [i_18] [i_6] = var_18;
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_18 + 1])) && (((/* implicit */_Bool) arr_21 [i_18 - 1])))))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 20; i_22 += 4) 
                        {
                            var_48 = ((unsigned char) (-(var_7)));
                            arr_76 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 67108862ULL))));
                            var_49 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_6] [i_6] [i_6]))) : (arr_40 [i_6] [i_18] [i_6] [i_6]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (arr_30 [i_6] [i_6] [i_6])))))));
                            var_50 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_3), (var_3))), (((unsigned char) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 774500027U))))) : (((/* implicit */int) (unsigned char)16))));
                        }
                        arr_77 [(unsigned char)1] [i_18 + 1] [i_19] [(unsigned char)1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 3659144763U)) < (360960309111478103ULL))))));
                        arr_78 [i_6] |= ((/* implicit */unsigned char) (+(min((((/* implicit */int) arr_44 [i_6] [i_6] [i_19] [i_20 - 3] [i_19] [i_18 + 1])), (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [(unsigned char)11] [i_6]))))))));
                        arr_79 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((1795314900725988675ULL), (((/* implicit */unsigned long long int) (unsigned char)64))));
                    }
                } 
            } 
            arr_80 [i_6] [i_18] = ((unsigned char) ((((/* implicit */_Bool) arr_74 [i_6] [i_18 + 1])) && (((/* implicit */_Bool) arr_74 [i_6] [i_18 + 1]))));
            var_51 *= ((/* implicit */_Bool) var_4);
        }
        var_52 ^= ((/* implicit */unsigned int) var_13);
    }
    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_24 = 2; i_24 < 17; i_24 += 4) 
        {
            for (unsigned int i_25 = 3; i_25 < 18; i_25 += 1) 
            {
                {
                    arr_89 [i_25] [i_24 - 1] [i_24 - 1] [i_24 - 1] = (unsigned char)97;
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_21 [i_23])) : (max((((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (arr_49 [i_24 - 2] [i_24 + 3]))))))));
                    var_54 = ((/* implicit */unsigned long long int) min((var_54), (max((((((/* implicit */_Bool) min((3659144763U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_23] [i_23]))) : (arr_38 [i_23] [i_23]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_30 [i_25 + 1] [i_25 - 1] [17U])))))));
                }
            } 
        } 
        var_55 |= ((/* implicit */unsigned char) ((3786127604U) + (3786127607U)));
    }
}
