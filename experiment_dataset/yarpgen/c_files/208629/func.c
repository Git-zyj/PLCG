/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208629
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) var_0);
        var_14 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_15 = ((/* implicit */signed char) var_3);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned short) arr_1 [i_0] [i_0 - 1])))));
        var_17 = var_6;
    }
    var_18 = ((/* implicit */signed char) ((long long int) var_6));
}
