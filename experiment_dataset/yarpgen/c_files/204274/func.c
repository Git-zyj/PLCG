/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204274
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
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_15 = ((arr_1 [i_0]) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : ((-2147483647 - 1))))))) : ((+(1188723871))));
        arr_3 [i_0] = (((~(((/* implicit */int) (!(var_11)))))) >= (((/* implicit */int) var_0)));
    }
    var_16 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0))));
}
