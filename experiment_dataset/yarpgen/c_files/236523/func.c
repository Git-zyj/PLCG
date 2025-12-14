/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236523
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
    var_20 &= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_22 = ((/* implicit */int) arr_0 [(short)3]);
        var_23 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_24 = ((/* implicit */unsigned int) (+(arr_1 [i_0])));
    }
}
