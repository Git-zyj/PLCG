/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194105
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) 2147483647);
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 18446744073709551615ULL);
                }
            } 
        } 
    } 
}
