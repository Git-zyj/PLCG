/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233747
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
    var_17 ^= ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_18 *= ((/* implicit */signed char) (+(arr_3 [i_0 - 2] [i_0 - 2])));
        var_19 *= ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)1712)))) % (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)16))))));
        var_20 |= ((((/* implicit */_Bool) ((int) var_11))) ? (var_1) : (((/* implicit */long long int) var_15)));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
}
