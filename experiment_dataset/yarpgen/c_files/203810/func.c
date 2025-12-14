/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203810
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
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [i_1 - 2]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
            }
        } 
    } 
    var_13 = max((var_0), (((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_12)))) <= (((/* implicit */int) var_7))))));
    var_14 -= ((/* implicit */unsigned short) ((_Bool) var_10));
}
