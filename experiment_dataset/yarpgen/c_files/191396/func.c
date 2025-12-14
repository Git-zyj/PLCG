/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191396
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        var_11 ^= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_9 [i_0] [i_1] [0U] [i_2 + 3] [0ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) / (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1))))))) ? (10442217012132815355ULL) : (arr_7 [8U] [(signed char)6] [i_2] [i_2])));
                        var_12 &= ((/* implicit */signed char) ((2097151ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26672)))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8339676354493407033ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31508)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [(signed char)1] [i_2 + 1] [i_1]))) : (arr_6 [i_0])))) : (arr_10 [i_0] [i_1] [i_2] [i_1]))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073707454457ULL)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_0);
                            arr_20 [i_6] [0U] [i_1] [i_5] [i_1] [i_1] [i_6] |= ((/* implicit */short) 17795001388105956052ULL);
                        }
                        for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((min((min((2097152ULL), (2097151ULL))), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_1] [i_7] [i_7])))), (((/* implicit */unsigned long long int) var_1)))))));
                            var_16 = (~(((unsigned int) var_4)));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((arr_19 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (+(-511988462))))))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_21 [(unsigned char)6] [i_1] [(unsigned short)8] [i_0] [2U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (18446744073707454482ULL)))))) : (((((/* implicit */_Bool) (+(7526996790854494357ULL)))) ? (((int) arr_17 [i_7] [i_1] [i_2] [i_5] [i_7] [8])) : (((/* implicit */int) var_4))))));
                        }
                        var_17 = ((/* implicit */signed char) min((((min((var_3), (((/* implicit */unsigned int) var_8)))) % (min((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)21809)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 3] [i_2 + 2])) - (((/* implicit */int) (unsigned short)43727)))))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) (((-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) - (arr_22 [i_0] [i_2] [i_2] [i_0] [0U]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0])) * (var_10)))) ? (max((((/* implicit */int) (short)-7545)), (arr_15 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_0)))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 4; i_9 < 6; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_8])) : (((((/* implicit */_Bool) (unsigned char)5)) ? (13708150093533717207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -139598745)) : (13708150093533717210ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -327250720)))))))))))));
                            var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [3LL] [i_0]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2097151ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (min((((/* implicit */unsigned long long int) (short)8191)), (13708150093533717178ULL))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [0LL] [i_8] [i_1] [i_0])), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0]))) : (arr_26 [i_0] [i_1] [i_9] [i_8] [i_9])))))));
                        }
                        var_22 = ((/* implicit */unsigned int) 13708150093533717187ULL);
                    }
                    for (long long int i_10 = 1; i_10 < 7; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_8 [i_10] [9ULL] [i_10 + 3] [i_2 + 3] [i_2 - 2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [(unsigned short)6] [i_10] [i_10 + 2] [i_2 - 2] [i_2 + 3])), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_10] [i_10 - 1] [i_10 + 2] [i_2 + 2] [i_2 - 1])))))));
                        var_24 = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((signed char) (unsigned short)65535)))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1064073890U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((18446744073707454454ULL) == (((((/* implicit */_Bool) arr_5 [(_Bool)0] [i_1] [i_1] [i_1])) ? (1647367729998212013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21809))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 3; i_12 < 6; i_12 += 4) 
                        {
                            arr_35 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_4))))));
                            var_28 = ((/* implicit */unsigned short) (-(arr_7 [i_0] [i_1] [i_12 + 1] [(signed char)3])));
                            var_29 *= ((/* implicit */signed char) (+(var_1)));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (var_3)));
                        }
                    }
                    arr_36 [i_0] [i_1] [i_2 + 2] [(_Bool)1] = (-((+(((/* implicit */int) (unsigned short)16)))));
                }
                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_33 [i_0] [i_0] [i_0] [i_0]))));
                var_32 -= (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_22 [i_0] [i_1] [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18631)) ? (2127119831U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)0)))) : (((/* implicit */int) (unsigned short)0))))), (((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) -116100891)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_13]))))) : (((((/* implicit */_Bool) arr_38 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13]))) : (2097151ULL)))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (-((-(((long long int) arr_38 [i_13])))))))));
    }
}
