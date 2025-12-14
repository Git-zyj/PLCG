/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215180
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) max((1258651357U), (((/* implicit */unsigned int) (unsigned char)33))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)27927))))) ? (min((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [6])))), (max((((/* implicit */int) (short)27066)), (1002890486))))) : (((/* implicit */int) var_9))));
    }
    var_15 += ((/* implicit */unsigned char) 3036315939U);
}
