/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191474
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(var_2)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 + 1] [i_1 - 1])) : (var_0)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 937460218U))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_0])))) : (arr_10 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                        arr_14 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) 937460218U));
                        arr_15 [i_1] = ((/* implicit */unsigned long long int) -1401129964);
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) var_4))));
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)));
                    }
                }
            } 
        } 
    }
}
