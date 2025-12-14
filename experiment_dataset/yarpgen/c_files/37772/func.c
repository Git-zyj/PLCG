/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37772
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((unsigned int) ((signed char) var_1)))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)9)), (var_4)));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])) : (arr_9 [i_0] [i_1] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) | (var_6))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)162)) / (((/* implicit */int) (_Bool)1))))))));
                                var_13 = (short)-14787;
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_5])), (var_10)))) ? (max((13175194970082382015ULL), (((/* implicit */unsigned long long int) (signed char)96)))) : (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_3] [i_4] [i_5])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [(short)12])) || (((/* implicit */_Bool) arr_1 [4ULL]))))))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)93))))), (((long long int) var_1))))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 1; i_6 < 24; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */long long int) var_4);
                                var_17 = ((/* implicit */unsigned int) var_1);
                                var_18 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((unsigned long long int) var_7)) : (max((13175194970082382015ULL), (((/* implicit */unsigned long long int) var_2))))))));
                                arr_23 [i_1] = ((/* implicit */unsigned short) arr_9 [21U] [i_1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 24; i_9 += 1) 
                    {
                        for (short i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_14 [i_10 + 1] [i_10] [i_10 + 4] [i_10] [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_14 [i_10 + 2] [i_9] [0LL] [i_9] [i_9]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-4)))))));
                                var_20 ^= ((/* implicit */_Bool) arr_17 [i_0] [4LL] [i_0] [i_10]);
                                arr_30 [(signed char)2] [i_10] [i_9 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)121)) ? (-1693831699) : (((/* implicit */int) (short)-14777))))))) ? (max((((0LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58705))))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93)))));
                            }
                        } 
                    } 
                }
                for (signed char i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) 3338168278U)))))))));
                    var_22 = var_3;
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2051))) : (18279484792563241808ULL))), (((unsigned long long int) var_2))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_2 [12U]))));
                                var_25 = ((/* implicit */unsigned int) var_6);
                                arr_41 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) max(((~(((unsigned long long int) arr_37 [i_0] [i_0] [i_11] [i_1] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) & (max((-914614271639677283LL), (((/* implicit */long long int) var_4)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_24 [i_0] [18U] [i_11 - 2])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))) : (max((((/* implicit */long long int) arr_24 [i_0] [8LL] [i_0])), (max((0LL), (((/* implicit */long long int) var_7)))))))))));
                }
                var_27 *= arr_22 [i_0] [i_0] [i_0] [i_0];
                arr_42 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_29 [i_0] [i_0] [i_1] [i_1] [i_1])))) / (1023U)));
                arr_43 [i_1] = ((/* implicit */_Bool) (signed char)9);
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (13175194970082382015ULL) : (17288658941178559037ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14787))) | (13175194970082382015ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)0)))))), (var_10)));
    var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 917188415U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (4294967295U))))), (var_1)));
}
