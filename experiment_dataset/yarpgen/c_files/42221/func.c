/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42221
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [14] [i_0] = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
}
