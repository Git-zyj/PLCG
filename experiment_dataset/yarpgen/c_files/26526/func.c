/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26526
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= max(((_Bool)1), ((_Bool)1));
                var_14 = ((/* implicit */_Bool) ((min(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1]))))) / (((((/* implicit */int) arr_0 [i_0] [i_0])) << (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
            }
        } 
    } 
    var_15 = var_3;
}
