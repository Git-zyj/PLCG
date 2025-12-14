/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34542
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */signed char) ((min((((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_0]))), (arr_1 [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) 2147483647);
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */int) var_10)) & (2147483647))))));
}
