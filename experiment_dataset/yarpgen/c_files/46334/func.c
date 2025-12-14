/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46334
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((((unsigned int) arr_4 [i_0 - 2] [i_2 - 1] [i_2 - 1])) != (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                                var_12 = ((/* implicit */_Bool) ((((arr_7 [i_4 - 3] [i_2 - 2] [18ULL] [i_0 + 2]) << (((/* implicit */int) var_3)))) | ((~(-1322712721)))));
                                var_13 += ((unsigned long long int) ((unsigned int) (signed char)-122));
                            }
                        } 
                    } 
                    var_14 *= ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 9223372036854775807LL)))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) || (var_3)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)41618)), (-1LL)));
                        var_16 = ((/* implicit */_Bool) ((unsigned short) var_8));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)50), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) (-2147483647 - 1)))))), ((signed char)31))))));
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) 4294967277U);
                        var_19 += ((/* implicit */unsigned short) (-(((arr_9 [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        var_20 = ((/* implicit */int) (unsigned short)62837);
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 18U))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)65529))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23924)) + (((/* implicit */int) (unsigned short)41612))))) ? (max((3288744312456735140ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4095)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) 6830981374983261768ULL);
        /* LoopSeq 4 */
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((((unsigned long long int) arr_20 [i_7] [i_8] [20LL])), (((/* implicit */unsigned long long int) ((_Bool) (signed char)122)))));
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (unsigned char i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10 - 3] [i_7] [i_10 + 3] [i_10 + 2]))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1589997081957511481LL)))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)23918))))), (max((((/* implicit */unsigned long long int) arr_20 [i_7] [i_10 + 3] [(signed char)18])), (var_1)))))));
                            var_27 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_29 [i_10] [i_8] [i_11] [i_10] [i_10 + 3] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [(unsigned short)9] [i_9] [i_10] [i_10 + 3] [i_9] [i_7]))) : (var_2))), (((/* implicit */unsigned int) ((_Bool) arr_29 [i_7] [i_8] [i_10 - 3] [i_11] [i_10 - 2] [i_7] [i_8])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 22; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */signed char) (_Bool)1)), (var_6)))))) * (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [i_8] [i_13])), (70368744112128LL)))) ? (var_10) : (((/* implicit */long long int) var_7))))));
                        var_29 = ((/* implicit */signed char) (unsigned short)41595);
                    }
                } 
            } 
        }
        for (int i_14 = 3; i_14 < 22; i_14 += 4) 
        {
            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_14 - 2])) / (((((/* implicit */_Bool) (unsigned short)23630)) ? (((/* implicit */int) arr_32 [i_7] [i_7] [i_14])) : (((/* implicit */int) (_Bool)1))))))) / (((((/* implicit */_Bool) var_8)) ? (8438594799922037822LL) : ((-(-9223372036854775807LL)))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_20 [i_14 - 2] [i_14] [i_14])))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (unsigned int i_17 = 1; i_17 < 20; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((-4122850474471306228LL) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_17 + 2] [i_16] [i_17 + 2] [i_17 + 1] [i_17 + 3] [i_17 + 3])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) arr_45 [i_7] [i_17 - 1] [i_16] [i_17] [i_18] [i_7]);
                            var_34 = ((/* implicit */short) (~(((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (13044482303528517062ULL)))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_2)));
                            var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_7] [i_17 - 1] [i_17 - 1] [i_17]))));
                            var_37 = ((/* implicit */int) ((((arr_40 [i_7] [i_15] [i_16] [i_17]) >> (((((/* implicit */int) (unsigned char)102)) - (60))))) & (((/* implicit */unsigned long long int) var_10))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_17 + 1] [i_16] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41910))))) : (((/* implicit */int) ((_Bool) arr_46 [(_Bool)1] [(_Bool)1] [i_16])))));
                            var_39 = (unsigned short)23900;
                            var_40 = ((/* implicit */long long int) ((int) var_1));
                        }
                        var_41 = ((/* implicit */long long int) (+(var_7)));
                        var_42 = ((/* implicit */signed char) ((4760285660559879374ULL) >> (((((/* implicit */int) arr_30 [i_7] [i_17 + 2] [i_17 + 3] [i_17 + 3])) - (35972)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_20 = 1; i_20 < 21; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 23; i_22 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) ((2666113802197068301ULL) * (((/* implicit */unsigned long long int) arr_38 [i_22] [i_21]))));
                            var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                            var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_20 + 1])) ? (arr_18 [i_20 + 2]) : (((/* implicit */unsigned long long int) var_2))));
                            var_46 = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_7] [i_15] [i_15] [i_15])) ? (2166470693U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_15] [i_15])))))));
            /* LoopNest 2 */
            for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) 
            {
                for (short i_24 = 0; i_24 < 23; i_24 += 1) 
                {
                    {
                        var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_24] [i_23] [i_24])) ? (-8438594799922037808LL) : (968858492147747908LL))))));
                        var_49 += var_6;
                        var_50 = ((/* implicit */unsigned long long int) ((13686458413149672230ULL) < (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned long long int) ((arr_25 [i_15]) ^ (2147483646U)));
        }
        for (short i_25 = 4; i_25 < 20; i_25 += 3) 
        {
            /* LoopNest 2 */
            for (short i_26 = 3; i_26 < 22; i_26 += 1) 
            {
                for (signed char i_27 = 1; i_27 < 21; i_27 += 3) 
                {
                    {
                        var_52 = ((/* implicit */int) ((_Bool) 0U));
                        var_53 = max((var_2), (((/* implicit */unsigned int) arr_43 [i_7] [5U] [5U] [i_26] [i_26 - 3] [i_27 + 2])));
                    }
                } 
            } 
            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? (((arr_45 [i_25 + 2] [i_25 + 2] [i_25 - 2] [i_25 - 1] [i_25 + 2] [i_25 + 1]) / (((/* implicit */long long int) 1845752246)))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_25 + 2] [i_25 + 2])))));
        }
        /* LoopNest 3 */
        for (signed char i_28 = 0; i_28 < 23; i_28 += 4) 
        {
            for (signed char i_29 = 0; i_29 < 23; i_29 += 3) 
            {
                for (unsigned char i_30 = 1; i_30 < 21; i_30 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_31 = 2; i_31 < 22; i_31 += 3) 
                        {
                            var_55 = ((/* implicit */unsigned char) max((max((2147483642), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_57 [i_7] [i_30 - 1] [i_29] [i_30 + 1])) & (((/* implicit */int) arr_37 [i_31 - 2] [i_28] [i_7]))))));
                            var_56 += ((/* implicit */long long int) (~(4294967277U)));
                            var_57 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37665))) * ((~(max((((/* implicit */unsigned long long int) var_10)), (18446744073709551600ULL)))))));
                        }
                        for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                        {
                            var_58 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_17 [i_28] [i_7])), (((((/* implicit */_Bool) ((unsigned long long int) (short)-3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48211))) : (((((/* implicit */_Bool) (short)-9484)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58693))) : (18446744073709551613ULL)))))));
                            var_59 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) arr_59 [i_7] [i_32 - 1] [i_29] [i_30 + 1] [i_30 + 2] [i_30])));
                            var_60 = ((/* implicit */unsigned char) (-(var_9)));
                        }
                        var_61 = ((/* implicit */int) ((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_7] [i_28] [i_28] [i_28])))));
                        var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) max((((((_Bool) (unsigned short)14301)) ? (((((/* implicit */_Bool) (unsigned short)23630)) ? (((/* implicit */int) (unsigned short)4023)) : (((/* implicit */int) arr_24 [i_7] [i_28] [i_28] [i_30 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2695)) || (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (!(((/* implicit */_Bool) 10082757981935930162ULL))))))))));
                        var_63 = ((/* implicit */int) (((+(max((((/* implicit */unsigned long long int) arr_28 [i_7] [10] [i_29] [i_30 + 1])), (arr_40 [i_7] [i_28] [i_29] [i_30 - 1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (var_8)))))));
                    }
                } 
            } 
        } 
    }
    var_64 = ((/* implicit */unsigned int) var_3);
}
