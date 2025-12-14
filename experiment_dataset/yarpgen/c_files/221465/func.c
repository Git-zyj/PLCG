/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221465
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) (unsigned char)128))));
        var_13 = (unsigned char)234;
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [(unsigned char)1]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        arr_4 [(unsigned char)8] = (unsigned char)192;
        arr_5 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)0)))) != (((/* implicit */int) (unsigned char)224))));
    }
    var_15 *= var_11;
}
