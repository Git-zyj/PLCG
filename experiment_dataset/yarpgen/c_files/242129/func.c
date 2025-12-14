/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242129
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    var_10 = ((/* implicit */short) var_3);
                    var_11 = var_4;
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_8) >= (((/* implicit */unsigned long long int) -869318499))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6014)) && (((/* implicit */_Bool) var_1))));
                        var_12 = ((/* implicit */unsigned int) ((var_3) < (var_3)));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((var_8) >> (((var_4) - (16975645629845159481ULL))))))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1752211025)) >= (((var_2) >> (((((/* implicit */int) var_9)) - (42)))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) & (var_3))) > (869318498)));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((var_3) * (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5))))));
                    }
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_21 [i_7 + 1] [i_1] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */int) var_4);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_5))));
                                var_19 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_4))) & (14702242782174320505ULL));
                                var_20 = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((869318499) != (((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))))) != (((/* implicit */int) ((((/* implicit */_Bool) 10759378800407907342ULL)) && (((/* implicit */_Bool) (signed char)69)))))));
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_3)) + (((((/* implicit */unsigned long long int) 1659920564U)) + (var_8)))));
                    arr_26 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_5);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_29 [(unsigned char)7] [i_1] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_1);
                            arr_34 [i_0] [i_0] [i_1] [(unsigned short)9] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))) - (((/* implicit */int) ((var_3) < (((/* implicit */int) var_1)))))));
                            var_23 *= ((/* implicit */signed char) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)79)))) << (((((((/* implicit */int) (short)28054)) + (((/* implicit */int) var_9)))) - (28123)))));
                            var_24 = ((/* implicit */unsigned int) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((3744501291535231111ULL) > (((/* implicit */unsigned long long int) 952521580))))))));
                        }
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 4; i_12 < 10; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_2))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_2)))));
                        var_26 *= ((/* implicit */unsigned long long int) var_5);
                        arr_41 [i_12] [i_11] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_2) & (((var_2) - (((((/* implicit */unsigned long long int) 4212568507U)) - (3744501291535231117ULL)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_44 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                        arr_45 [i_0] [i_0] [i_1] [i_13] [i_1] [(signed char)2] = ((/* implicit */short) ((((var_4) & (var_8))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 200255675)) >= (4294967295U))))) / (var_4)))));
                        var_27 *= ((/* implicit */short) ((var_4) != (var_8)));
                    }
                    for (short i_14 = 2; i_14 < 10; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */int) var_5))))) ^ (var_2)));
                        var_29 = ((/* implicit */long long int) var_3);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (var_2))))));
                            var_31 = var_4;
                        }
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned short) var_2);
                            var_33 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_9))))) + (((/* implicit */int) ((var_3) < (((/* implicit */int) var_9)))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (var_0)));
                        }
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                        {
                            var_35 *= ((/* implicit */signed char) ((((18U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_36 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 4294967295U)) / (12170857026372397678ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3239)))));
                        }
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                        {
                            arr_61 [i_0] [i_1] [i_11] [i_1] [i_18] = var_6;
                            arr_62 [i_0] [i_1] [i_14] [i_14 - 1] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 21LL)) ^ (var_4))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_19 = 3; i_19 < 8; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */int) 3744501291535231117ULL);
                            var_38 = ((/* implicit */unsigned int) var_5);
                        }
                    }
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_5))));
                    arr_66 [i_1] [i_1] [i_11] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((((/* implicit */int) (short)-28055)) + (((/* implicit */int) var_1)))) - (24336)))));
                    arr_67 [i_1] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((var_4) / (((/* implicit */unsigned long long int) -34100838))))));
                }
                for (int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    var_40 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) >= (var_3))))) % (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((var_4) / (((/* implicit */unsigned long long int) 1560618429))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        arr_76 [i_0] [i_1] [i_20] [i_1] [i_21] [i_21] = ((/* implicit */short) ((((((/* implicit */int) var_6)) % (((/* implicit */int) (unsigned char)205)))) / (((/* implicit */int) ((((/* implicit */_Bool) 2065663730)) || (((/* implicit */_Bool) var_7)))))));
                        arr_77 [i_21] [i_21] [i_21] [i_1] [i_21] = ((/* implicit */_Bool) 0LL);
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 16899054038507729164ULL))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        arr_81 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) 7LL)))))));
                        var_43 = ((/* implicit */unsigned long long int) var_5);
                    }
                }
                arr_82 [i_1] = var_1;
                arr_83 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
                var_44 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45129))) - (1U))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 1) 
    {
        arr_88 [i_23] [i_23] = ((/* implicit */long long int) 12170857026372397685ULL);
        arr_89 [i_23] = ((/* implicit */unsigned long long int) (short)28055);
    }
    for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 3) 
    {
        arr_94 [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 15LL))));
        /* LoopNest 3 */
        for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 3) 
        {
            for (unsigned long long int i_26 = 1; i_26 < 13; i_26 += 3) 
            {
                for (signed char i_27 = 0; i_27 < 14; i_27 += 3) 
                {
                    {
                        var_45 = ((/* implicit */long long int) ((3744501291535231122ULL) + (((var_4) / (((/* implicit */unsigned long long int) 1737154031U))))));
                        arr_103 [i_24] [i_24] [i_24] = ((((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) & (((/* implicit */int) var_5)));
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_104 [i_24] [i_25] = ((/* implicit */long long int) var_6);
                        var_47 *= ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 1) 
    {
        /* LoopNest 2 */
        for (short i_29 = 0; i_29 < 16; i_29 += 3) 
        {
            for (unsigned short i_30 = 0; i_30 < 16; i_30 += 1) 
            {
                {
                    var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((3744501291535231140ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))))))));
                    arr_115 [i_28] [i_29] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-107))));
                }
            } 
        } 
        arr_116 [i_28] [i_28] = var_2;
        var_49 *= ((/* implicit */signed char) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))));
    }
}
