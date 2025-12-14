/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232989
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
    var_19 = var_9;
    var_20 = max((((((var_7) / (4113881145U))) * (((181086152U) / (var_8))))), (var_8));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = min(((-(arr_0 [i_0 + 2]))), (((var_14) + (arr_0 [i_0 + 3]))));
                    arr_9 [i_0] = ((unsigned int) (-(((/* implicit */int) ((var_18) > (var_18))))));
                }
            } 
        } 
    } 
    var_22 = min((min((((((/* implicit */_Bool) var_4)) ? (3739704490U) : (3739704487U))), (((((/* implicit */_Bool) 3221225472U)) ? (var_9) : (var_7))))), (min(((~(3739704480U))), (var_4))));
    var_23 = 16777184U;
}
