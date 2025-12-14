/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = arr_3 [i_0];
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_13)) : (arr_2 [i_0])))) ? ((+(arr_2 [i_0]))) : ((-(arr_2 [i_0])))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */short) (_Bool)1);
}
