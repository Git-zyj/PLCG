/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226851
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
    var_20 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [5LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)8)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                            {
                                arr_11 [i_2] = ((/* implicit */signed char) (((+(((unsigned long long int) var_17)))) / (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_9 [i_0] [i_1] [i_4 - 2])))), (arr_8 [i_4 - 1] [i_4] [i_4 + 2] [i_4] [i_4 - 2] [i_4 + 2])))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) (short)32767)))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_5])) <= (var_5))))) >= (((unsigned long long int) (short)-32767))));
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_3] [i_5]))) : (var_5)))) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))));
                                var_24 = ((/* implicit */unsigned char) ((((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_3])) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_8))));
                            }
                            var_25 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) & (((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) (unsigned char)84))));
                        }
                    } 
                } 
            }
        } 
    } 
}
