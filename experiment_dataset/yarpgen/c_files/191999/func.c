/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191999
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
    var_17 *= ((/* implicit */signed char) min((((/* implicit */long long int) var_10)), ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) | (1560707190767867652LL)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) 1608620329U)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1])))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-6))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((arr_5 [i_3] [i_3 - 1] [i_3 - 1]) ? (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) arr_5 [i_4] [i_0 - 3] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_4])))) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0 - 2] [i_0 - 2]);
                    arr_14 [i_0] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1]);
                    var_22 = ((/* implicit */_Bool) arr_8 [i_0]);
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) (signed char)127);
        arr_19 [i_5] = ((/* implicit */unsigned int) max((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) (signed char)-98)) : (var_15))))), (((((/* implicit */int) (_Bool)0)) << (((((((((/* implicit */int) arr_8 [i_5])) + (2147483647))) << (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))) - (2147483618)))))));
        arr_20 [i_5] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_5]))))), ((unsigned short)62649))));
    }
    for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        var_23 ^= max(((_Bool)1), (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)39)))) == (((/* implicit */int) ((_Bool) (_Bool)0))))));
        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [20U] [i_6 - 1])) ? (min((((/* implicit */unsigned int) (signed char)43)), (min((703080856U), (((/* implicit */unsigned int) (unsigned short)19006)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)116))) > (((/* implicit */int) (signed char)31))))))));
        var_25 += ((/* implicit */unsigned int) ((arr_16 [i_6]) * (((/* implicit */unsigned long long int) ((3293627263U) % (476613960U))))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned int) ((((_Bool) (unsigned short)10707)) ? ((~(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) arr_11 [i_8 - 1] [i_8]))));
            var_27 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_11 [i_7] [i_8])))) + (2147483647))) << (((((/* implicit */int) (signed char)112)) - (112)))));
            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [14U] [i_8 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_21 [i_7]))))) : (((unsigned int) arr_0 [i_8]))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (signed char)121))));
            var_30 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_5 [i_7] [i_7] [i_8])) % (((/* implicit */int) var_13)))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                {
                    var_31 ^= arr_26 [i_10];
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) arr_2 [i_7] [i_9] [i_10 + 3]);
                                var_33 |= (signed char)-114;
                                var_34 = max((((/* implicit */unsigned short) var_10)), (((unsigned short) arr_33 [i_12 - 1] [i_12 + 3] [i_12 + 3] [i_12])));
                                var_35 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) arr_13 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 - 1])), (18446744073709551612ULL))));
                                arr_43 [i_9] [i_9] [i_12] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)8700))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            {
                                arr_51 [i_7] [i_7] [i_7] [i_7] [10] [i_7] [i_7] = ((/* implicit */signed char) arr_5 [i_7] [14LL] [i_10]);
                                var_36 = ((/* implicit */unsigned int) var_11);
                                var_37 += ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)48152), (((/* implicit */unsigned short) (signed char)-17))))) % ((-(((/* implicit */int) arr_28 [i_14] [i_9] [i_10 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_15 = 2; i_15 < 11; i_15 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_16 = 1; i_16 < 13; i_16 += 4) 
            {
                arr_58 [i_16 - 1] [i_15 + 1] [13ULL] [i_7] = ((/* implicit */signed char) arr_54 [i_7] [i_15]);
                arr_59 [i_16] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) arr_53 [i_16 - 1] [i_16 - 1] [i_16 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_17 = 4; i_17 < 13; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 1; i_18 < 13; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) arr_29 [i_7]);
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((signed char) (unsigned short)65535))))))));
                    }
                    for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((int) 70368735789056LL)))));
                        var_41 = ((/* implicit */signed char) (~(-242354614)));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_36 [(_Bool)1])))) >= (1ULL)));
                    }
                    for (signed char i_20 = 2; i_20 < 11; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */_Bool) (unsigned short)65535);
                        var_44 = ((/* implicit */unsigned short) (~((-(arr_39 [i_7] [i_7] [i_7] [i_7] [(unsigned short)6])))));
                    }
                    var_45 *= ((signed char) ((unsigned long long int) 2811615251U));
                    arr_73 [i_17] [i_15] [i_16] [i_15] = ((/* implicit */unsigned int) arr_54 [i_7] [i_7]);
                    var_46 &= ((/* implicit */signed char) (unsigned short)47695);
                    var_47 &= ((/* implicit */int) ((unsigned int) var_7));
                }
                for (unsigned short i_21 = 0; i_21 < 14; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 3; i_22 < 13; i_22 += 4) 
                    {
                        arr_79 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */signed char) 1099507433472LL);
                        var_48 &= ((((/* implicit */_Bool) 975262320)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1998319860U));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        var_49 ^= ((/* implicit */unsigned int) arr_34 [i_16 + 1]);
                        arr_84 [i_23] [12] [i_23] [i_21] [i_23] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_23] [i_15] [i_15] [i_21] [(signed char)10]))));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_77 [i_7] [i_15] [i_7] [i_21] [i_15] [i_21])) : (((/* implicit */int) (unsigned short)13647))));
                        var_51 = ((/* implicit */signed char) max((var_51), ((signed char)45)));
                    }
                    var_52 = ((/* implicit */unsigned int) arr_5 [i_7] [i_7] [i_7]);
                }
                var_53 = ((/* implicit */unsigned short) arr_67 [i_7] [(signed char)6] [i_16] [i_7] [i_15]);
            }
            for (unsigned short i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                var_54 = ((/* implicit */signed char) ((_Bool) arr_55 [i_7] [i_15] [i_15 - 2] [i_15 - 2]));
                var_55 = ((/* implicit */long long int) min((var_55), ((-((((_Bool)1) ? (arr_4 [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_87 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (+(arr_74 [i_7] [i_15 - 2] [i_7] [i_15 + 1] [i_15] [i_7])));
                /* LoopSeq 1 */
                for (signed char i_25 = 3; i_25 < 13; i_25 += 2) 
                {
                    arr_90 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_7] [6U] [i_7])) ? (921147947545493681LL) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_25] [i_15 - 2] [i_25 + 1])))));
                    var_56 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_7] [i_15]))) / (516096U)));
                }
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                var_58 = ((arr_86 [i_7] [i_15 + 3] [i_26]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                var_59 -= ((/* implicit */signed char) var_4);
            }
            /* LoopSeq 1 */
            for (unsigned short i_27 = 2; i_27 < 10; i_27 += 3) 
            {
                var_60 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))));
                var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((((/* implicit */_Bool) 17592186040320ULL)) ? (((/* implicit */int) arr_33 [(signed char)6] [i_15 + 1] [i_15 + 2] [i_7])) : (var_15))))));
                var_62 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)137)) > (((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 2 */
            for (signed char i_28 = 0; i_28 < 14; i_28 += 1) /* same iter space */
            {
                var_63 = ((/* implicit */_Bool) var_16);
                var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)43)) / ((~(((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_29 = 0; i_29 < 14; i_29 += 1) /* same iter space */
            {
                var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) (unsigned short)13586))));
                var_66 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_102 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) | (((/* implicit */int) arr_77 [i_7] [i_15] [i_15 + 1] [i_7] [7U] [i_7]))));
        }
    }
    var_67 = ((/* implicit */unsigned short) (signed char)127);
    var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (unsigned short)29793)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
}
