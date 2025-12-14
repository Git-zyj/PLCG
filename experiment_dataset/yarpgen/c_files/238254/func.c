/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238254
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_0 [i_0 + 1]))));
        var_14 |= ((/* implicit */unsigned short) arr_0 [i_0 - 3]);
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) (short)-1)))) * (((/* implicit */int) (signed char)-83))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) max((((/* implicit */short) var_10)), (arr_0 [0LL])))) | (((/* implicit */int) var_3)))))))));
    }
    var_16 |= ((/* implicit */long long int) var_6);
    var_17 = var_5;
    var_18 = ((/* implicit */long long int) var_0);
}
