/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201868
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((int) max((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */int) (signed char)121)), (((arr_4 [i_0]) / (((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))));
    var_22 = ((/* implicit */unsigned short) ((var_11) / (max((((1578019236) ^ (((/* implicit */int) var_12)))), (((/* implicit */int) var_18))))));
}
