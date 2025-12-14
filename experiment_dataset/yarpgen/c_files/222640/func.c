/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222640
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (13710102376693340786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_1 [i_0 + 3])))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_5)) % (2446210144606188271ULL))), (((/* implicit */unsigned long long int) ((signed char) var_0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) | ((+(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-6183)))));
}
