/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199709
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 -= ((/* implicit */short) (((~(arr_1 [i_0]))) / (((/* implicit */unsigned int) (+(arr_2 [i_0]))))));
        var_19 |= ((/* implicit */unsigned int) min((1231445359), (182556770)));
    }
    var_20 = ((/* implicit */signed char) var_14);
}
