/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42279
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_7 [i_1] = arr_6 [i_0] [i_0 + 1] [i_1 - 2];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((arr_5 [i_0 - 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0 + 1])))) > (((var_3) | (-1)))));
                            var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) -3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((unsigned long long int) 4294967277U))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) var_10)))));
                                var_16 *= ((arr_5 [i_0 + 1]) ? (((/* implicit */unsigned int) ((int) 7166219446782618641LL))) : (3840U));
                                var_17 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((-1) < (((((var_3) + (2147483647))) << (((((arr_10 [i_1] [i_2]) + (3204100669653822293LL))) - (26LL)))))))) : (((/* implicit */signed char) ((-1) < (((((var_3) + (2147483647))) << (((((((arr_10 [i_1] [i_2]) - (3204100669653822293LL))) - (26LL))) - (3641126054312649564LL))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) | (arr_10 [i_2] [i_2]))) : (((/* implicit */long long int) ((int) arr_2 [i_4]))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_3] [i_0 - 1] [i_0 - 1])) - (var_7)));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) 
                            {
                                arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) var_11))));
                                arr_20 [i_0] [(unsigned short)1] [i_1] [i_2] [i_3] [i_5 - 4] = ((/* implicit */unsigned int) ((signed char) var_5));
                            }
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                arr_23 [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) + (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_0 - 1])))));
                                arr_24 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [0] [i_1] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_9)))) ^ (arr_0 [i_1])))) < (arr_9 [i_0 + 1] [4U] [i_1 + 3])));
                                arr_25 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0])) ? (var_5) : (((/* implicit */int) var_9)))));
                                var_19 ^= ((/* implicit */signed char) arr_13 [i_3] [i_0] [1] [i_0]);
                                var_20 *= ((/* implicit */short) max((((signed char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (arr_8 [i_0] [i_0])))), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) var_4)))))));
                            }
                            arr_26 [(unsigned short)4] [i_1] [i_1] [i_1 + 3] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_1]) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967272U))))) : (((int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) arr_0 [i_1 + 2]);
                var_22 &= ((/* implicit */signed char) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) max((arr_17 [0U]), (arr_17 [(short)4]))))));
                arr_27 [i_1] [i_1] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_23 = ((/* implicit */int) 11369565708343817908ULL);
}
