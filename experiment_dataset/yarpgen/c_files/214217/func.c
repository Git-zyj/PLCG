/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214217
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
    var_19 &= ((long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0] [(short)13]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 ^= ((/* implicit */signed char) (~(arr_3 [(signed char)10] [(short)12] [i_0 + 2])));
            var_22 = ((/* implicit */signed char) ((short) arr_4 [i_0]));
            var_23 = ((/* implicit */short) (-(((int) 498030069U))));
            var_24 = ((/* implicit */short) ((int) arr_4 [i_0]));
        }
    }
}
