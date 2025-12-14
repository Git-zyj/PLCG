/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199788
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2] [i_2])))))) == ((-(arr_4 [i_2 + 2] [i_2 + 1] [i_2] [i_2])))));
                    var_16 ^= arr_1 [i_0 + 1];
                }
            } 
        } 
    } 
    var_17 = var_9;
}
