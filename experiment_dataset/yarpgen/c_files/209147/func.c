/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209147
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
    var_10 = ((/* implicit */short) (-(var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((var_8) - (((arr_4 [i_1 - 2] [i_1 - 1]) >> (((arr_4 [i_1 - 2] [i_1 - 3]) - (4754327186734934966ULL))))))))));
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_9))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_13 = ((/* implicit */signed char) (~(((2016177542U) << (((arr_3 [i_0 + 4]) - (6374533828811285989LL)))))));
                    arr_8 [i_0] [i_2] [i_2] = (short)1023;
                    var_14 = ((/* implicit */unsigned int) arr_3 [i_0]);
                }
                for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    arr_12 [i_0 + 3] [i_3] [i_3] = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            arr_17 [i_5] [i_0] [i_3] [14U] [i_3] [i_1] [i_0] = ((/* implicit */short) var_8);
                            arr_18 [i_0] [i_3] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3] [i_1] [i_0 - 1])) && (((/* implicit */_Bool) (-(min((var_1), (((/* implicit */unsigned long long int) (short)24917)))))))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_1 [i_3] [i_6]);
                            var_16 = ((/* implicit */long long int) (-(var_0)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_26 [i_4] [i_3] [i_4] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */int) var_5);
                            arr_27 [i_1 - 3] [i_1] [i_3] [i_4] [(short)2] [i_4] [(short)10] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_0 [i_3])))) >= (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 3]))))))))));
                            arr_28 [i_0 + 2] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_10 [i_0 + 4] [i_0 + 1] [i_1 - 2]) >> (((2278789754U) - (2278789692U))))))));
                            var_17 = ((/* implicit */int) var_1);
                        }
                        arr_29 [i_0] [i_3] [i_0] = ((/* implicit */short) arr_19 [i_3] [2LL] [5ULL] [i_4] [i_4]);
                        arr_30 [i_3 - 3] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */short) (~((~(arr_23 [i_0 + 3] [i_3] [i_3 + 1])))));
                        var_18 += ((/* implicit */long long int) arr_9 [i_4] [i_0 + 2] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 13; i_8 += 1) 
                    {
                        arr_34 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) var_0);
                        arr_35 [i_3] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_31 [i_0 + 2] [7U]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) | (2278789754U))) << (((arr_31 [i_8 - 2] [i_1 - 2]) - (148353246U)))));
                    }
                }
            }
        } 
    } 
}
