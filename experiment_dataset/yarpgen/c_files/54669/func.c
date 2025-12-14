/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54669
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
    var_13 = ((var_4) & (((int) ((((/* implicit */_Bool) var_11)) ? (4095LL) : (((/* implicit */long long int) var_6))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((-(-1707254493))) ^ (((/* implicit */int) var_7)))))));
    var_15 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((unsigned short) 8049005929557430892LL));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) max(((~(arr_0 [i_2 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (arr_1 [i_2 + 2]) : (-2080299358))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_18 &= var_6;
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */int) ((arr_4 [i_0]) ^ (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */long long int) arr_7 [i_1])) : (max((((/* implicit */long long int) var_5)), (var_9)))))));
                                var_19 = ((/* implicit */int) ((unsigned char) min((439148809), (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                                arr_13 [i_4] [12U] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (arr_8 [i_3])))) ? (max((var_4), (var_2))) : (arr_5 [i_2 - 2] [i_2 - 2] [i_2 + 2])))), (((long long int) min((arr_10 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0]), (((/* implicit */int) var_0)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned short) (~(((long long int) arr_11 [i_2] [i_2 - 2] [i_2] [i_2 + 2] [i_2]))));
                                var_21 = ((int) ((35184372088832LL) / (35184372088832LL)));
                                var_22 *= ((/* implicit */unsigned int) max((((((/* implicit */long long int) arr_2 [i_0] [i_1] [10])) ^ (max((-8271685587970069640LL), (-8049005929557430911LL))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_5] [i_0] [i_2 - 2])) ? (min((arr_0 [i_3]), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [9])))))));
                                var_23 = arr_2 [i_3] [i_3] [i_1];
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_6 = 1; i_6 < 6; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 3; i_7 < 8; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] [i_6 + 4] = ((/* implicit */long long int) var_4);
                        arr_29 [i_8] [i_8] [i_6] [i_9] = ((/* implicit */long long int) (-(var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 7; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_41 [i_6] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_12])) ? (arr_18 [i_6]) : (arr_31 [i_6]))), (((/* implicit */int) min((var_7), (arr_30 [i_6]))))))) ? (((long long int) min((8935141660703064064LL), (((/* implicit */long long int) var_5))))) : (((/* implicit */long long int) min((min((var_8), (((/* implicit */unsigned int) 2080299357)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)38236)))))))));
                                var_24 = ((((/* implicit */_Bool) min((min((2080299357), (2147483645))), (((/* implicit */int) arr_27 [i_6 + 2] [i_6 - 1] [i_6] [i_10 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (arr_9 [i_6] [i_6] [i_6] [i_12] [i_12] [i_6] [0LL])))) && (((/* implicit */_Bool) arr_2 [i_11] [i_12] [i_13])))))) : (((long long int) -1707254520)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 9; i_14 += 2) 
                    {
                        for (long long int i_15 = 1; i_15 < 9; i_15 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_11] [i_15] [i_15 + 1] [i_15] [i_6] [i_15 + 1]))) && (((/* implicit */_Bool) arr_42 [i_6 + 3] [i_10] [i_11] [i_6]))));
                                var_26 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_11]))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */long long int) var_8);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            arr_52 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [8] [i_16])) & (((/* implicit */int) (unsigned char)123)))) << (((((/* implicit */int) ((unsigned short) arr_48 [i_6] [i_16]))) - (25815)))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */int) arr_26 [i_16] [i_16] [i_16] [i_16] [i_6] [i_16]))))) ? (((/* implicit */long long int) var_6)) : (((long long int) var_9))));
            var_29 = ((/* implicit */long long int) 439148821);
            var_30 = ((/* implicit */long long int) arr_22 [i_6] [i_6]);
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                arr_57 [i_6] [i_17] [i_6] = ((unsigned short) arr_10 [i_6] [i_6] [i_6 - 1] [1LL] [i_18] [i_18]);
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_6])) ? (arr_47 [i_6]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_6] [i_6] [i_17] [i_6] [i_6] [i_18])))))));
                var_32 = ((/* implicit */unsigned short) arr_9 [i_6] [i_6] [i_6 - 1] [i_18] [i_18] [i_18] [i_18]);
                var_33 = ((/* implicit */int) max((var_33), ((((-(arr_8 [i_17]))) / (((/* implicit */int) arr_36 [i_18] [i_18] [i_18] [i_18] [i_6 + 1] [i_6 + 1]))))));
            }
            var_34 = ((/* implicit */long long int) var_8);
        }
        for (int i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) var_8))))) ? (((/* implicit */int) arr_11 [i_6] [i_19 + 2] [i_19 + 2] [i_19] [i_19 + 1])) : (((((/* implicit */_Bool) min((arr_46 [i_6] [i_6] [i_6] [3] [i_6] [i_6]), (arr_25 [i_6] [i_6] [i_6] [i_19] [i_19 + 2])))) ? (((/* implicit */int) arr_56 [i_19 + 2] [i_6] [i_6] [i_6 - 1])) : (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_11 [4] [i_19 + 1] [i_19 + 2] [i_19 + 2] [4])) : (var_4)))))));
            arr_60 [i_6] = ((((/* implicit */long long int) arr_38 [i_6])) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-439148812) : (arr_43 [i_19 + 1] [i_6] [i_6] [i_6])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (arr_15 [8LL] [8LL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_19])) ? (arr_1 [i_6]) : ((-2147483647 - 1))))))));
        }
        var_36 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min((((/* implicit */int) var_7)), (arr_48 [i_6 + 3] [i_6 + 3])))), (max((arr_14 [i_6]), (((/* implicit */long long int) arr_21 [i_6])))))), (((((/* implicit */_Bool) arr_54 [i_6 + 1])) ? (((((/* implicit */_Bool) 1751847202)) ? (-8049005929557430911LL) : (4286599473294310176LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    }
}
