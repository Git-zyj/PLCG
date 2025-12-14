/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30424
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((-869521615) * (((((int) (unsigned short)1964)) * (((((/* implicit */int) var_1)) & (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 = ((((_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 + 2])))) : (((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) * (((((/* implicit */unsigned long long int) -3734468740020771197LL)) / (18446744073709551609ULL))))));
    }
}
