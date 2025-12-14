/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39868
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * ((~((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [(unsigned short)15]))));
        var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) (short)-13163))));
        arr_4 [(short)17] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (short)8)))))) | (arr_1 [i_0] [i_0])));
    }
    var_18 = ((/* implicit */unsigned short) var_13);
}
