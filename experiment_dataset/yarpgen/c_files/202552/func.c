/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202552
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((arr_1 [i_0]) / (arr_1 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
        var_21 = ((/* implicit */_Bool) (-(var_6)));
        arr_4 [i_0] &= ((/* implicit */int) (_Bool)0);
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0])), ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] &= ((/* implicit */signed char) var_17);
    }
    var_23 &= (!(((/* implicit */_Bool) var_14)));
}
