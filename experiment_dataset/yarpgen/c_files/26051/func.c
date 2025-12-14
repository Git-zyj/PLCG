/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26051
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
    var_11 -= ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [4ULL] [i_0] = arr_2 [i_0] [i_0];
        var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (arr_1 [i_0])))));
        var_13 &= ((/* implicit */unsigned char) var_7);
    }
    var_14 = ((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_3) || (((/* implicit */_Bool) var_0))))), (((unsigned char) var_3))))))));
}
