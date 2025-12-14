/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50738
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
    var_13 ^= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [(signed char)14] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((arr_2 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)27484)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_0))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_15 |= arr_0 [i_0] [i_0];
    }
    var_16 = (!(((/* implicit */_Bool) ((unsigned short) var_11))));
}
