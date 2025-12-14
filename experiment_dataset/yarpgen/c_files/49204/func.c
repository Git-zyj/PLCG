/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49204
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
    var_15 += ((/* implicit */short) ((unsigned char) var_8));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) var_9))))))));
        arr_4 [i_0 + 3] = ((/* implicit */unsigned char) ((((arr_2 [i_0] [i_0 + 3]) / (((/* implicit */long long int) var_6)))) + ((~(arr_2 [i_0] [i_0 + 1])))));
        var_16 &= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0 + 2])) ^ (((/* implicit */int) arr_0 [i_0 + 2])))) + (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (short)937)) * (((/* implicit */int) arr_0 [i_0]))));
    }
}
