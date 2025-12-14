/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53889
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2 + 3])), (arr_0 [i_0])))))) ? (min((((/* implicit */long long int) arr_5 [i_2 + 1] [i_0 - 1] [i_0 - 1])), (arr_3 [i_0 + 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (arr_0 [i_0 - 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 4090718548U)) ? (((/* implicit */int) (signed char)102)) : (var_9))), ((+(arr_12 [i_0] [i_1] [i_2 + 3] [i_3] [i_3] [i_4]))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((667589018U) - (667589018U))))))));
                                var_14 ^= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (signed char)101)))), (((/* implicit */int) (unsigned short)22792))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_9);
}
