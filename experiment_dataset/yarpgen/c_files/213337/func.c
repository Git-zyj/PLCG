/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213337
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_12 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_1]))));
            var_14 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) arr_3 [(signed char)0] [i_0])))))));
        }
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    var_18 ^= var_6;
}
