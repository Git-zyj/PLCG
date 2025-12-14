/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33851
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
    var_17 &= ((unsigned int) (!(((/* implicit */_Bool) (~(var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [6U] &= min((max((max((2198372850U), (3045113193U))), (((((/* implicit */_Bool) var_6)) ? (2280175478U) : (23U))))), (158732992U));
                arr_6 [i_0] [i_1] = var_11;
                var_18 -= max((((var_4) % (arr_2 [i_1 + 1] [i_1] [i_0 + 3]))), (var_8));
            }
        } 
    } 
}
