/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195548
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 += ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2473802589U)) || (((/* implicit */_Bool) (short)13603))));
}
