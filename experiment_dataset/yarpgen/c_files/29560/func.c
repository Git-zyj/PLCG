/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29560
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
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (max((((/* implicit */long long int) arr_1 [i_0] [9])), (var_8)))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [10ULL] [i_0 - 2])) ? (arr_2 [i_0 + 4] [i_0 + 2]) : (arr_2 [i_0 - 1] [i_0 + 1])))));
        var_15 = ((/* implicit */short) ((((long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-14)))))));
    }
}
