/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191550
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) | (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_8))) > (max((((/* implicit */long long int) var_6)), (var_2))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) == (2147483647))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) : (arr_0 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
        var_20 = ((/* implicit */unsigned long long int) max(((~(arr_0 [i_0 - 2]))), (((/* implicit */unsigned int) var_15))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [i_0 - 3]))));
        var_22 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))))))), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (var_3)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_23 *= ((/* implicit */unsigned int) arr_2 [i_1] [i_1 + 1]);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 1])))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (-(var_12)))) / (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2])) ? (-4214938651951536622LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_2]))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))))))));
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_27 = ((/* implicit */short) arr_6 [i_1] [i_3] [i_1]);
            var_28 *= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1] [i_3]))))), ((~(var_2)))))));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1]))));
            var_31 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [(unsigned short)16])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_5])) ? (((/* implicit */long long int) (+(194458753U)))) : (var_2)));
                var_33 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) 2147483647))))) ? (min((arr_5 [i_4]), (arr_5 [(signed char)2]))) : (var_11)))));
                var_34 = ((/* implicit */int) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (0U)))));
                var_35 = ((4611686018427387904ULL) / (((/* implicit */unsigned long long int) 4294967295U)));
                var_36 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_7 [i_1]), (((/* implicit */unsigned short) var_4))))), (4294967271U)))) : (min((arr_11 [i_1] [i_4] [i_5]), (((/* implicit */long long int) (signed char)-118))))));
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */short) arr_4 [i_1 + 1] [i_1 + 1]);
                            arr_25 [i_1] [i_1] [i_6] [i_7] [i_8 - 2] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_4] [i_1]))));
                            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_8 - 1] [i_1 + 1]))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_23 [i_4] [i_7] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_21 [(unsigned char)22] [i_1] [i_6] [i_6] [i_6]))));
                        }
                    } 
                } 
                var_40 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1] [i_4])) ? (((/* implicit */int) arr_24 [i_1] [i_4])) : (((/* implicit */int) arr_24 [i_1] [i_4]))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_6])) && (((/* implicit */_Bool) (-(arr_11 [i_1] [i_4] [(unsigned short)24]))))));
                        arr_31 [i_1] [i_1] [i_6] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_20 [i_4])));
                    }
                    for (unsigned int i_11 = 1; i_11 < 24; i_11 += 1) 
                    {
                        arr_36 [i_11] [(signed char)21] [i_1] [i_1] [(signed char)21] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1] [i_1] [i_11 - 1] [i_11 - 1])) ? (var_11) : (((((/* implicit */_Bool) arr_15 [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) var_3))))));
                        var_42 = ((/* implicit */signed char) var_0);
                        arr_37 [i_1] [i_1] [i_6] [21U] [i_9] [i_11 + 1] = ((/* implicit */unsigned long long int) (!(arr_3 [i_4] [i_11 - 1])));
                    }
                    arr_38 [i_1] = ((/* implicit */unsigned int) ((-2147483626) % ((-2147483647 - 1))));
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                {
                    arr_42 [i_12] [i_12] [i_4] [i_4] [i_1] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_4] [i_6])) ? (((/* implicit */int) arr_3 [i_4] [i_12])) : (((/* implicit */int) var_4))))));
                    arr_43 [i_1] = ((/* implicit */unsigned long long int) (-(-1LL)));
                    var_43 = ((/* implicit */long long int) ((arr_3 [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [7] [i_4] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40350))) : (var_11))))));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                {
                    var_45 *= arr_24 [i_6] [i_4];
                    /* LoopSeq 4 */
                    for (long long int i_14 = 3; i_14 < 21; i_14 += 2) 
                    {
                        var_46 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1 + 1] [i_6])) > (((/* implicit */int) var_13)))) ? ((-2147483647 - 1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775803LL)))))));
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_13] [i_13] [i_14] [i_14] [i_14] [i_14 + 1])) ? (((/* implicit */int) arr_8 [i_14 - 1] [i_1])) : (((/* implicit */int) arr_21 [i_1 + 1] [i_1] [i_6] [i_13] [i_14 - 1]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_53 [i_13] [i_4] [i_1] [i_13] [i_1] = ((/* implicit */signed char) ((arr_46 [i_1 + 1] [3U] [i_6] [i_1] [i_15]) > (arr_46 [i_1 + 1] [i_4] [i_6] [i_1] [i_15])));
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_46 [i_1] [i_1] [i_1 + 1] [i_4] [i_1 + 1])))))));
                    }
                    for (short i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned short) var_9);
                        var_51 = ((/* implicit */unsigned char) (+(((var_6) & (((/* implicit */int) (unsigned short)6862))))));
                        var_52 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_51 [i_1] [i_1 + 1] [i_4] [i_13] [i_17 + 1] [i_17 - 1] [i_17])) : (((/* implicit */int) arr_51 [19U] [i_1 + 1] [i_17] [i_17 + 1] [i_17 - 1] [i_17 - 1] [10U]))));
                        var_54 = ((/* implicit */unsigned char) (signed char)-113);
                        var_55 = ((/* implicit */long long int) (+((~(arr_14 [i_1] [i_6] [i_13] [i_17])))));
                        var_56 += ((/* implicit */short) arr_32 [i_1] [i_4] [i_1] [0ULL] [(unsigned char)0]);
                    }
                    var_57 = ((/* implicit */unsigned int) (~(arr_30 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    var_58 = ((/* implicit */unsigned long long int) arr_40 [i_1] [i_1 + 1] [i_1 + 1] [i_6] [i_13] [i_1 + 1]);
                }
            }
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        /* LoopNest 3 */
        for (short i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            for (unsigned int i_20 = 1; i_20 < 13; i_20 += 2) 
            {
                for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    {
                        var_59 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_24 [i_19] [i_18]))));
                        arr_69 [i_18] [i_18] [i_18] [i_21] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_19] [i_20 + 4]))))) : (max((var_10), (((/* implicit */unsigned int) arr_4 [i_20] [i_20 + 3]))))));
                        arr_70 [i_18] = ((/* implicit */long long int) max((min((arr_17 [i_20 + 2] [i_18] [i_21] [i_21] [i_21] [i_21]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) 2491626418U))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_22 = 1; i_22 < 15; i_22 += 3) 
        {
            var_60 *= ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) arr_64 [i_18] [i_18] [i_22])) ? (1894965922U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_18] [i_22 + 2] [20] [i_18]))))))));
            var_61 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_74 [i_18])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) var_6)) / (var_12)))))));
        }
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            for (unsigned short i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                {
                    var_62 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_5 [i_18]))), ((~(((/* implicit */int) arr_58 [i_18] [i_18] [i_23] [i_23] [18LL]))))));
                    /* LoopNest 2 */
                    for (signed char i_25 = 2; i_25 < 16; i_25 += 3) 
                    {
                        for (signed char i_26 = 0; i_26 < 17; i_26 += 3) 
                        {
                            {
                                var_63 *= ((/* implicit */_Bool) arr_82 [i_18] [i_23] [i_24] [i_25 + 1]);
                                var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) max(((-(arr_47 [(signed char)10]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_71 [(signed char)10])) ^ (arr_35 [i_18] [i_23] [i_24] [i_24] [10U] [i_26])))))))));
                                var_65 = ((/* implicit */unsigned long long int) 4294967278U);
                                var_66 = arr_74 [i_18];
                            }
                        } 
                    } 
                    arr_86 [i_18] [i_23] [i_18] = ((/* implicit */unsigned int) 1561705139);
                }
            } 
        } 
        arr_87 [i_18] = ((/* implicit */unsigned short) 22U);
        var_67 |= ((/* implicit */short) arr_26 [i_18] [i_18] [i_18] [i_18]);
    }
}
