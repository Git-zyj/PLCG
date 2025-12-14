/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221326
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
        var_16 ^= ((/* implicit */long long int) max((((((/* implicit */int) arr_2 [20U])) >> (((/* implicit */int) arr_2 [(_Bool)1])))), (((((/* implicit */_Bool) 1523688820)) ? (((/* implicit */int) arr_2 [2LL])) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) var_6);
    }
    var_18 = ((/* implicit */long long int) (_Bool)1);
    var_19 -= ((/* implicit */long long int) (_Bool)1);
    var_20 = ((/* implicit */long long int) var_10);
}
