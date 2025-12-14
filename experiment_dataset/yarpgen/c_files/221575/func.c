/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221575
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
    for (short i_0 = 1; i_0 < 7; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 6; i_3 += 1) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0 + 3])), (((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2]))))));
                        var_17 = max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (-(arr_5 [i_0] [i_2])))));
                    }
                } 
            } 
            var_18 -= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_7 [5] [i_1] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (arr_7 [i_0] [i_1] [i_1]))), (min((var_5), (((/* implicit */unsigned long long int) -444958699155750082LL)))))) & (((/* implicit */unsigned long long int) arr_11 [0] [0] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
            {
                arr_15 [i_4 - 1] [i_4 - 1] [i_0] [(short)0] = ((/* implicit */_Bool) (+(((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)148)))) ? (min((-3611136573160910184LL), (((/* implicit */long long int) arr_13 [i_4 + 1] [i_0] [i_0])))) : (max((((/* implicit */long long int) var_3)), (-7121112804548929235LL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_25 [i_0] [i_0] [i_4] [i_7] [i_1] [i_0] = ((/* implicit */int) arr_1 [i_1 + 1]);
                    var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_7 + 1] [i_4 - 2] [i_1 - 1] [i_0 + 3]))))) ? (((unsigned long long int) arr_23 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (arr_16 [i_7 + 1] [i_4 - 1] [i_1 - 1] [i_0 + 3])))) : (max((-2055705294839238903LL), (((/* implicit */long long int) arr_5 [2] [i_1]))))))));
                    arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))) >= (min(((~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))), (((/* implicit */int) (signed char)-106))))));
                }
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))));
                var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)0] [i_0] [i_0 + 2])) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 2] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 2]))))));
            }
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                arr_30 [i_0] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)29))));
                var_24 = (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (((unsigned long long int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0])), (var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)2213)))));
            }
            for (short i_9 = 1; i_9 < 7; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 3; i_10 < 8; i_10 += 3) 
                {
                    arr_37 [i_0] [i_0] = arr_7 [i_9 + 2] [i_1] [6];
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-106)), ((short)2218)))) || (((_Bool) arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 2]))));
                    var_26 &= ((/* implicit */_Bool) var_3);
                    arr_38 [i_0] [i_1 - 1] = ((/* implicit */signed char) arr_12 [(unsigned short)0] [i_1 - 1] [i_9] [i_10]);
                    arr_39 [i_0] [i_9] [1ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((8596644143467962556LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63949)))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9 + 1] [i_9 + 3] [i_9 + 2] [8LL] [i_9]))) % (var_0)))));
                }
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_0 - 1] [i_11] [i_0] [i_0 + 1] [i_0] |= max((max((((/* implicit */unsigned long long int) 513213943)), ((-(var_14))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                        arr_46 [i_0] [i_1] [i_1] [i_12 + 1] = ((/* implicit */long long int) ((max(((~(((/* implicit */int) (unsigned short)1587)))), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)98)), ((unsigned short)86))))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 9; i_13 += 1) /* same iter space */
                    {
                        var_27 |= ((unsigned short) arr_44 [i_0] [i_1]);
                        var_28 = min((((/* implicit */int) var_9)), ((((-(((/* implicit */int) arr_6 [i_1])))) % (((/* implicit */int) arr_21 [i_0] [i_1] [i_9 + 1])))));
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0])), (-170258905)))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_31 [(signed char)0] [i_9 + 2] [(signed char)0] [i_11]))));
                        var_31 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_22 [i_13 - 1] [i_0]))))));
                    }
                    arr_49 [(_Bool)1] [i_0] [i_9 + 3] [i_11] [i_0 + 3] = ((/* implicit */_Bool) var_8);
                }
                arr_50 [i_0] [2ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_3 [i_0 + 1])))))));
            }
        }
        for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
        {
            arr_54 [i_0] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 + 2]))))));
            var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)72))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
                {
                    for (unsigned short i_18 = 2; i_18 < 8; i_18 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)48))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_15] [i_16] [i_17 + 1]))) + (arr_64 [i_18 - 1] [i_16] [i_17] [i_16] [i_15 - 1] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)1601)))))));
                            var_34 = ((/* implicit */_Bool) ((short) 4U));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 3; i_21 < 9; i_21 += 2) 
                    {
                        {
                            var_35 -= ((/* implicit */unsigned short) arr_42 [i_20] [i_20] [i_19]);
                            var_36 = ((/* implicit */unsigned short) max((var_36), (arr_72 [(signed char)9])));
                            var_37 = ((/* implicit */int) arr_71 [i_21] [i_20] [(_Bool)1] [(_Bool)1]);
                        }
                    } 
                } 
            } 
            var_38 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-2213))));
            arr_75 [i_0] [(short)9] = ((/* implicit */_Bool) (~(-1665121256)));
            var_39 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_33 [i_15] [i_15] [i_0] [i_0] [i_0 + 2])))), (((/* implicit */int) arr_40 [i_0 - 1] [i_15]))));
        }
    }
    /* vectorizable */
    for (short i_22 = 1; i_22 < 7; i_22 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) 
        {
            for (short i_24 = 2; i_24 < 8; i_24 += 3) 
            {
                {
                    var_40 = ((((((/* implicit */_Bool) arr_41 [i_22 + 2] [i_22] [i_22] [i_22 + 2] [i_22])) ? (((/* implicit */unsigned long long int) arr_32 [i_23] [i_23] [i_23])) : (var_14))) << (((((/* implicit */int) (short)2217)) - (2215))));
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((((/* implicit */_Bool) arr_83 [i_24] [i_23])) || (arr_9 [i_22] [i_23] [i_24] [i_23]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_81 [i_24 + 2] [i_23]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_22] [(short)3] [i_23] [i_23] [i_23])))))));
                    var_42 |= ((/* implicit */short) ((((/* implicit */_Bool) 262143U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6579162179563276993LL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_25 = 0; i_25 < 10; i_25 += 3) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        arr_94 [i_22 + 2] [i_22] [(unsigned char)6] [i_22 + 2] [i_26] = ((/* implicit */unsigned short) arr_81 [i_22 + 1] [i_22 + 3]);
                        var_43 |= ((/* implicit */short) ((arr_47 [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_25] [i_26]) * (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_22])))));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_1)))))), (max((var_12), (max((var_8), (((/* implicit */unsigned short) (_Bool)1))))))));
}
