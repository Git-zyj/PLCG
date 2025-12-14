/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26154
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [4ULL] [i_0]);
                    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((var_2) + (2147483647))) << (((((/* implicit */int) var_1)) - (21105)))))) : (var_9))), (((/* implicit */long long int) var_7))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
}
