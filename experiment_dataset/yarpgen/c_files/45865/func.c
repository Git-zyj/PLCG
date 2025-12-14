/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45865
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
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)122)), (1422661104)))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1422661104))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (min((((/* implicit */int) (unsigned short)31797)), (1422661104)))));
}
