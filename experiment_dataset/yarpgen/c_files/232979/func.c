/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232979
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-2147483647 - 1)) : (2147483647)));
        arr_5 [i_0] [i_0] &= ((/* implicit */int) ((254471480U) == (723156233U)));
    }
    var_15 = ((/* implicit */unsigned int) ((((var_13) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 2147483647)) : (var_14)))) ? (var_9) : (((((/* implicit */_Bool) var_6)) ? (3686819704U) : (var_2))))) - (2575976777U)))));
    var_16 = ((/* implicit */unsigned int) 2147483647);
    var_17 = ((/* implicit */unsigned int) max((var_17), (max((((((/* implicit */_Bool) 3281693860U)) ? (1552891181U) : (((/* implicit */unsigned int) (-(var_13)))))), (min((((unsigned int) 821016571U)), (var_3)))))));
}
