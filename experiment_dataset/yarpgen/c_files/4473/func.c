/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4473
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)59))))) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (63904))))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) << (((arr_1 [i_0]) - (1443470521U)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)20] = ((/* implicit */_Bool) 4210678714U);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_2] [i_0] = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) var_10)))));
                        var_13 ^= ((/* implicit */short) ((int) var_0));
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2109809249U))) << (((((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])) - (162)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (short)-346))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_8 [i_0] [i_2] [i_4] [i_5])) - (40)))))) ? (((((/* implicit */_Bool) (unsigned char)188)) ? (4278190080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))) : (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_1]))) - (51171U))))))));
                            var_17 = ((/* implicit */_Bool) (+(var_7)));
                            var_18 += ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_6))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_4] [i_6]))));
                            var_20 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                            arr_20 [i_6] [i_4] [i_4] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_23 [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_7) - (2408094751U)))))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11419))))) << ((((+(var_7))) - (2408094765U))))) << (((((/* implicit */int) min((var_1), (var_0)))) - (117)))));
                            var_22 ^= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1]))))));
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) var_11)) << (((((arr_22 [i_7] [i_4] [i_2] [i_1] [i_0] [i_0]) + (868983770))) - (6)))))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((var_7) << (((((/* implicit */int) var_8)) - (206)))));
                        arr_24 [i_4] [i_1] [i_1] [i_4] &= ((/* implicit */short) max((((((/* implicit */_Bool) (-(638295809U)))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [(unsigned short)17] [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)115)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2650152663060742707LL))))))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2] [i_4])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_2] [i_8] [i_9] [i_1] = ((/* implicit */unsigned short) min((-5504678426027663146LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 896795741U)) ? (1782854253U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41327))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (arr_22 [i_0] [i_1] [i_2] [i_8] [i_2] [i_9 + 1]) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_9 + 1] [i_8] [i_1] [i_8]))))) + ((+(((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
                                arr_31 [i_0] [i_0] [i_1] [i_0] [i_9] [i_9] = ((/* implicit */short) ((unsigned char) (signed char)-60));
                                arr_32 [i_0] [i_0] [i_0] [i_0] = arr_17 [i_0] [i_0] [i_2] [i_9] [i_9] [i_9];
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((min((((((var_3) + (2147483647))) << (((((var_3) + (678557339))) - (24))))), (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (short)-13788))))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned char) ((_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((2850640577482420983ULL) - (2850640577482420983ULL))))));
    }
    var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) (short)10545)), (2758269736566752672LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (4278190080U)))))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)39)) << (((1782854253U) - (1782854253U)))))))))));
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
}
