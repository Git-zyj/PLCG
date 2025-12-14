/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44169
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
    var_20 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((16777184U) <= (16777169U)))) : ((~(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(383101544U)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 4278190114U)) : (-6005748677379992554LL))))));
    var_21 += ((/* implicit */unsigned long long int) var_7);
    var_22 |= ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        arr_13 [i_0] [2] [2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 + 1])) % (((/* implicit */int) arr_3 [i_3 - 2] [i_0] [i_3 - 2]))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (~(arr_12 [i_3 - 2] [i_0] [i_0] [i_2])));
                    }
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) arr_9 [i_4 + 2] [i_0] [i_0] [i_4]);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(4278190126U)));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((7958369588089506577LL) % (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_4 - 1] [i_2] [i_2]))))) <= (((/* implicit */long long int) var_9)))))));
                        }
                        for (short i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_11 [i_0] [i_4] [i_2] [4U] [i_1] [(short)0]))));
                            arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [2ULL] [i_4 - 1] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) (short)-9867)) : ((-(977098650)))));
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-9897))));
                            arr_24 [i_0] [i_1] [i_4 - 1] [i_1] [i_6] |= ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_10))))));
                        }
                        for (int i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) arr_19 [i_2] [7U] [i_2] [7U] [i_2] [i_7]);
                            arr_28 [i_0] [15ULL] [i_2] [i_4] [15ULL] [i_0] = ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_0] [i_4 + 2] [i_7]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 &= ((/* implicit */unsigned long long int) (signed char)127);
                            var_29 = ((/* implicit */_Bool) ((((2147483647) >= (((/* implicit */int) arr_4 [i_4 + 2] [i_4 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((~(((/* implicit */int) (_Bool)1)))))))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_30 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (!(arr_18 [i_0] [i_0]))))))));
                        }
                        var_31 = ((/* implicit */long long int) max((var_31), (((arr_0 [i_0] [i_4]) ? (((arr_18 [i_0] [i_4 - 1]) ? (((/* implicit */long long int) arr_7 [i_4 + 2])) : (arr_26 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4] [i_4] [i_4 + 2]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) 3217523614U))));
                        var_33 -= ((((/* implicit */_Bool) (~(977098670)))) ? (((/* implicit */int) arr_29 [i_0] [(signed char)8] [i_9] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)6412)));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_6 [i_9] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                        arr_35 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_0] [i_0]))));
                    }
                    arr_36 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [9LL])) ? (((/* implicit */unsigned long long int) 4665523545121063778LL)) : (arr_32 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((arr_32 [4ULL] [i_0] [i_1] [i_2] [i_2]) * (224ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 3) 
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((((/* implicit */_Bool) ((arr_2 [i_10 - 2]) ? (((/* implicit */long long int) 14U)) : (-4665523545121063800LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_10])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 1413930898U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3217523628U)))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 - 2])) - (((/* implicit */int) arr_10 [i_10 - 2] [i_10 - 2] [i_10 + 2] [i_10 - 2])))))));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10] [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_10])) ? (arr_32 [i_10] [i_10] [i_10 + 1] [i_10] [i_10]) : (arr_32 [i_10] [2ULL] [i_10 + 1] [i_10] [i_10])));
    }
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        var_37 ^= ((/* implicit */unsigned long long int) arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]);
        arr_41 [(signed char)11] = ((/* implicit */_Bool) (short)-22069);
    }
}
