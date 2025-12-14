/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19032
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
    var_15 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 1] = 2538799259465831127ULL;
                arr_6 [i_1] [i_0] = ((14911322313600928469ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [i_0] [i_0 - 2] [i_1]) - (0ULL))) == (((arr_1 [i_0]) + (5355710732552180057ULL))))))));
            }
        } 
    } 
}
