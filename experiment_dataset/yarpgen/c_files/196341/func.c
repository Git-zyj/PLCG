/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196341
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_11 = arr_1 [i_0] [i_0];
        var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
    }
    var_13 = ((/* implicit */long long int) (short)32500);
    var_14 += ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((long long int) var_4)), (min((var_0), (((/* implicit */long long int) var_3))))))), (var_7)));
}
