/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49211
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
    var_17 = ((/* implicit */long long int) ((unsigned short) 2379106351U));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 1915860945U);
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */short) ((unsigned int) max((-1192858539), (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
}
