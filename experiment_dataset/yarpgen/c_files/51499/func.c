/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51499
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
    var_18 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4861228795920207810LL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
}
