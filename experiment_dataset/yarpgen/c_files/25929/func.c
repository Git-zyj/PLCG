/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25929
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) var_1);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                            {
                                var_19 |= ((/* implicit */int) var_9);
                                var_20 = ((/* implicit */short) ((3ULL) + (18446744073709551608ULL)));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                            }
                            arr_11 [i_0] [16U] [i_0] &= ((/* implicit */long long int) (-(0U)));
                            var_22 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_1])))))) <= (min((((/* implicit */unsigned long long int) arr_5 [i_1] [0LL] [15ULL])), (var_1)))))) >> (((((/* implicit */int) var_11)) - (23804))));
                            arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_2] = min((arr_9 [i_2] [15U] [i_2] [i_2 - 3] [i_2] [i_2] [i_3 + 1]), (((/* implicit */unsigned int) ((int) arr_0 [i_2 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_23 += ((/* implicit */unsigned long long int) var_3);
                    var_24 |= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1483)) >> (((18446744073709551612ULL) - (18446744073709551606ULL))))) & (arr_4 [16ULL] [i_1] [16ULL])));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (-(var_7)))) * (min((18446744073709551615ULL), (var_13))))) / (var_8)));
}
