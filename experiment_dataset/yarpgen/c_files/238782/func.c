/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238782
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [10]))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(arr_0 [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned char) var_15);
}
