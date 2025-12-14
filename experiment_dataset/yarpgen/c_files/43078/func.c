/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43078
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)5])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (arr_1 [i_0] [i_0 + 1]))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [14ULL]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */signed char) var_5);
}
