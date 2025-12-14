/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238289
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0]));
        var_12 = ((/* implicit */signed char) min(((-(max((-1254925802), (((/* implicit */int) arr_0 [i_0])))))), (-1672624037)));
    }
    var_13 = ((/* implicit */unsigned short) 4194303U);
    var_14 = ((/* implicit */short) var_1);
    var_15 = ((/* implicit */signed char) (+(var_5)));
}
