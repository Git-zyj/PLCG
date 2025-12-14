/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229194
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
    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2112410452)) ? (1960463599) : (var_0)))) ? (((var_10) / (var_16))) : (((((/* implicit */_Bool) -3)) ? (536838144) : (-268263906)))))) ? (-268263925) : (((int) -268263906))))));
    var_19 = min((((((/* implicit */_Bool) -1855243158)) ? (((int) var_6)) : (2097151))), (((((var_4) >= (var_16))) ? (((516382074) >> ((((((-2147483647 - 1)) - (-2147483623))) + (45))))) : (var_7))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((max((((815360047) & (-516382074))), (((((/* implicit */_Bool) 49152)) ? (-516382074) : (1841547885))))) < (-516382061)));
        arr_2 [i_0] [i_0] = arr_1 [i_0];
    }
}
