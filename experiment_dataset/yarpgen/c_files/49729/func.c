/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49729
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
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((var_5) << (((arr_0 [i_0 + 2]) - (2901976100U)))))));
        var_12 &= ((/* implicit */unsigned char) (~(var_2)));
        arr_3 [i_0] = ((/* implicit */short) var_4);
    }
    var_13 -= ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)207))))), ((((_Bool)1) ? (var_6) : (var_11))))));
}
