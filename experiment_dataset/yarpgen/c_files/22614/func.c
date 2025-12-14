/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22614
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
    var_11 = var_7;
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])));
        var_14 = ((/* implicit */_Bool) ((int) var_6));
        arr_3 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */int) ((_Bool) var_0))) % (((/* implicit */int) ((signed char) arr_2 [i_0] [(signed char)9]))))));
        arr_4 [i_0] = (~(0));
    }
}
