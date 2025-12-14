/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28149
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
    var_17 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((((unsigned int) arr_0 [i_0] [i_1])) / (((/* implicit */unsigned int) ((int) arr_0 [i_1] [i_1]))));
                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) 1755554274)), (arr_5 [i_0] [i_1])))))) && (((/* implicit */_Bool) arr_3 [i_1]))));
            }
        } 
    } 
}
