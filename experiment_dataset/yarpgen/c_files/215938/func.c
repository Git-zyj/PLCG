/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215938
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) arr_0 [i_0 + 2]))))))));
        arr_3 [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(335004951))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (+(-736491305)));
        var_15 = (~((+(((/* implicit */int) (unsigned char)192)))));
    }
    var_16 = ((/* implicit */int) min((var_16), ((+((+((~(((/* implicit */int) var_9))))))))));
}
