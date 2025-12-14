/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33962
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
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_19)))) || (((/* implicit */_Bool) var_18))));
    var_21 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) min((3601183658781683895LL), (((/* implicit */long long int) 2513295938U))))), (var_0)))));
    var_22 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 *= ((/* implicit */unsigned char) (((~(max((4352980989858860418LL), (((/* implicit */long long int) var_15)))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned char) var_9));
                        var_24 ^= ((/* implicit */long long int) arr_0 [i_1]);
                        arr_11 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_0] [i_0] [i_0]);
                        arr_12 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((long long int) 2584376686U));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 22; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0] [i_1 - 2]);
                        var_25 = ((/* implicit */signed char) ((((unsigned int) var_1)) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((signed char) 3533366173375987191LL));
                        var_27 = ((/* implicit */long long int) max((var_27), (arr_4 [i_0] [i_1] [i_2] [i_5])));
                        var_28 = ((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]);
                    }
                    arr_20 [i_0] [(unsigned short)21] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12972))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))) : (((/* implicit */int) (signed char)-111))))) ? (((/* implicit */int) (short)-12981)) : (((/* implicit */int) (short)12950))));
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 1168421334462444750ULL);
                    var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1 + 1] [i_0]))))), ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_30 *= ((/* implicit */unsigned long long int) (-(min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (short)12971))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) (-(var_7)));
                            var_32 = ((/* implicit */unsigned long long int) ((int) (unsigned short)24665));
                            arr_29 [i_7] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) 393216U);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6))));
                            var_34 = ((/* implicit */long long int) ((unsigned char) arr_19 [i_0] [i_1] [i_2]));
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            arr_33 [0ULL] [(short)21] [i_0] [i_6] = ((/* implicit */signed char) ((((long long int) (signed char)-16)) ^ (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 654002479)) ? (12594831617555996967ULL) : (var_3)))))));
                            var_35 = ((/* implicit */unsigned char) 4294967288U);
                        }
                        arr_34 [(unsigned char)2] [i_1] [i_0] [i_6] = ((/* implicit */unsigned short) arr_19 [i_0] [i_1 - 2] [i_1 - 1]);
                        arr_35 [i_0] [i_0] = ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_10)) + (22486))))))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) var_11);
    }
}
