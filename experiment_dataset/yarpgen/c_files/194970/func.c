/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194970
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
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) var_5)), (var_12)))))) ? ((-(((/* implicit */int) (!(var_14)))))) : (((/* implicit */int) var_18))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((13835058055282163712ULL) != (13835058055282163715ULL)));
        arr_4 [i_0] &= arr_2 [i_0];
    }
}
