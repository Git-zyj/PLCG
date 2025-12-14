/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29664
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned long long int) 0U);
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2080374784U))) ? (((/* implicit */unsigned long long int) 4294967295U)) : ((~(var_10)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */_Bool) 13386342745976562065ULL)) ? (2697540319340664090ULL) : (17822846603772803506ULL))))) : ((~(min((16191248388657899080ULL), (((/* implicit */unsigned long long int) 4294967286U))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (3326667026U) : (3597856998U)));
    var_18 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) 2140245902U)) ? (18446744073709551594ULL) : (623897469936748107ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_1)))))));
}
