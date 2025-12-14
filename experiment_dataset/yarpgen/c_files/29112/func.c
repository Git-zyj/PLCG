/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29112
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
    var_17 = (short)-11699;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_1 [i_0 - 1] [i_1]))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
}
