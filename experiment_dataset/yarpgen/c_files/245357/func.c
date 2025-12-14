/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245357
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) arr_8 [i_0 + 2] [i_0 + 1]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16993959903811216032ULL)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)0] [i_0 + 1] [i_2]))))) | (((/* implicit */long long int) ((/* implicit */int) (short)-29988)))));
                        arr_11 [i_0] [i_1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) 977602268U);
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((var_5) ? (((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 2])))), (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned short)31075)), (var_2))))))))));
                    }
                    var_16 *= ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        for (short i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_12))))))));
                                arr_17 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned int) max(((-(arr_13 [i_4 - 1] [i_4] [10ULL] [i_5 + 2] [i_5 + 1]))), (var_10)));
                                var_18 *= ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_9))));
}
