/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238327
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
    var_20 = ((/* implicit */long long int) var_18);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_1 - 1] [i_2] &= ((/* implicit */signed char) min((arr_0 [i_2]), (((/* implicit */long long int) ((int) var_8)))));
                    arr_9 [i_1] [i_1] [i_1] [(short)19] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (var_5))))))) << ((((-(var_8))) + (5380279520638157952LL)))));
                }
            } 
        } 
    } 
}
