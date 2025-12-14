/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231831
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
    var_11 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) (+(arr_3 [i_0 - 2] [i_0 - 2] [i_2])));
                    arr_7 [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1] &= var_9;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_7))));
}
