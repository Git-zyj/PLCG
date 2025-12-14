/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191533
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = arr_1 [i_0] [i_0 - 1];
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) >> (((((((/* implicit */int) var_4)) * (((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_13 = var_10;
}
