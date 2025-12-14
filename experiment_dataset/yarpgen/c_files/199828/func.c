/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199828
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23597)) ? (((/* implicit */int) (short)23600)) : (((/* implicit */int) (short)23597))));
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((unsigned short) var_2)))));
        var_11 *= (~(arr_1 [i_0 - 1] [i_0 - 1]));
        arr_4 [i_0] = ((((/* implicit */_Bool) 4294967295U)) ? (4423075632503884576ULL) : (((/* implicit */unsigned long long int) -1996632936405769628LL)));
    }
    var_12 = ((/* implicit */long long int) ((4294967295U) & (4294967295U)));
}
