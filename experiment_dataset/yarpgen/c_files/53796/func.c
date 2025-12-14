/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53796
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
    var_12 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5373467131124852819LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13909)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = var_11;
        arr_4 [i_0] = ((/* implicit */signed char) ((int) arr_1 [i_0] [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
}
