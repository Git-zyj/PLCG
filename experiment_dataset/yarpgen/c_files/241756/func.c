/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241756
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
    var_20 ^= ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((((int) var_14)) + (2147483647))) >> (((((/* implicit */int) var_18)) + (23))))));
                arr_6 [i_0] [i_1] = 0U;
                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_19)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_1);
}
