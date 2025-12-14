/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2203
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
    var_10 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((int) (signed char)-127)), ((-2147483647 - 1))))), (var_0)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_7))));
        var_12 = (signed char)127;
    }
    var_13 = ((/* implicit */unsigned int) var_3);
}
