/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50094
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
    var_19 = ((/* implicit */short) ((var_17) > ((+(((/* implicit */int) (_Bool)0))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [18LL] [0LL] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_2 [i_1 + 3] [0LL])), (arr_5 [9])));
                    arr_11 [i_1] = ((/* implicit */unsigned int) (((-(max((var_8), (((/* implicit */long long int) var_16)))))) & (((/* implicit */long long int) var_9))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 + 1]);
                }
            } 
        } 
    } 
}
