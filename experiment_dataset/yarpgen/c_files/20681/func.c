/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20681
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [(signed char)2] |= ((/* implicit */long long int) ((unsigned int) (_Bool)1));
        var_19 = ((/* implicit */unsigned int) var_9);
    }
    var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
}
