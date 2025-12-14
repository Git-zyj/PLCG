/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242977
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [(short)0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-5496))));
                                var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5496)))))));
                                var_11 = ((((/* implicit */_Bool) max(((short)13388), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)44196)) ? (9777767632196113020ULL) : (((/* implicit */unsigned long long int) 3665468147U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_22 [i_0] [9] [i_1] [i_5] [i_2] [(unsigned short)11] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)112))));
                            arr_23 [i_0 - 1] [i_1] [i_2 + 2] [i_5] [i_6] [i_2] [i_6] = ((/* implicit */short) (+(812288447U)));
                        }
                        arr_24 [i_5] [i_2] [i_2] [5LL] = ((/* implicit */long long int) 810549015U);
                        arr_25 [i_2] [i_1] [i_2] [(unsigned short)12] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_26 [i_0] [i_1] [i_2] [i_2] [i_2 + 1] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)44196);
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21339)) ? (7994542670096710365LL) : (-3417397777481899315LL)));
                    }
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_14 = ((/* implicit */_Bool) (+(810549015U)));
                            arr_34 [i_0] [i_2] [(unsigned short)6] [i_2] = ((/* implicit */unsigned long long int) (short)-31580);
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned short)21340))));
                        }
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_38 [i_0] [14U] [i_2] [8ULL] [i_9] &= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-13389))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)113)))) ? (((/* implicit */int) (short)31579)) : (((((/* implicit */_Bool) 1097961034638923113LL)) ? (((/* implicit */int) (short)-13403)) : (((/* implicit */int) (short)-5494))))));
                        }
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-5496)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (unsigned char)255))))));
                    }
                    for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        arr_43 [10ULL] [i_1] [i_2] [(unsigned char)10] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        arr_44 [i_2 - 1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))) : (31LL)));
                        arr_45 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_48 [i_11] [(short)4] [i_2] [i_1] [i_0 - 1] = ((/* implicit */long long int) (unsigned short)2048);
                        var_17 = 2147483647;
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)127)))), (((/* implicit */int) (short)-22725)))))));
                        arr_49 [i_0 - 1] [0LL] [i_2] [i_11] [i_2] = ((/* implicit */long long int) (-(max(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))))));
                        var_19 = -6LL;
                    }
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1097961034638923113LL)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_0);
    var_22 |= ((/* implicit */unsigned char) (unsigned short)2048);
    /* LoopNest 2 */
    for (signed char i_12 = 3; i_12 < 23; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) (unsigned char)1);
                arr_56 [18LL] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)100)))), ((-(((/* implicit */int) (unsigned char)100))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) 750000034)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)20717)))))));
            }
        } 
    } 
}
