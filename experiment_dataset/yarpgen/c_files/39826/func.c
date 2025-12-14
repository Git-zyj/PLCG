/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39826
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (((-(((unsigned long long int) var_9)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_3] [i_0]), (arr_10 [(unsigned char)9] [i_0 - 2] [i_0 + 1] [(unsigned char)9] [i_0 - 2]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [9U] = 2758407488U;
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) max((var_13), (((/* implicit */short) arr_11 [(unsigned char)12] [(unsigned char)3] [i_1] [(unsigned char)12] [i_1]))))), (max((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])), (var_14))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned char) 1536559819U));
}
