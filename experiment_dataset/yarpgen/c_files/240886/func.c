/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240886
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
    var_17 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15457535357610451890ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))))) ? (((/* implicit */int) (unsigned short)14701)) : (((/* implicit */int) var_10)));
    var_18 = ((/* implicit */signed char) (!(var_1)));
    var_19 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((arr_1 [i_0 + 3]) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3]))));
        var_21 &= (!(((/* implicit */_Bool) (+(15457535357610451890ULL)))));
    }
}
