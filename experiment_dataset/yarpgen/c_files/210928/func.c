/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210928
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
    var_17 *= ((/* implicit */int) max((((((/* implicit */_Bool) ((var_10) ? (var_15) : (var_4)))) ? (var_14) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 0))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 -= ((/* implicit */int) ((17740066094260327997ULL) >> (((16368942905906050347ULL) - (16368942905906050335ULL)))));
        arr_2 [i_0] [i_0 + 1] = (+(((/* implicit */int) (signed char)40)));
        var_19 ^= ((/* implicit */signed char) (~((~(arr_0 [i_0])))));
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_20 = max(((+(((/* implicit */int) arr_3 [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_6))));
    }
    var_22 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) 504288453))), (min((((/* implicit */int) var_12)), (max((((/* implicit */int) var_11)), (var_6)))))));
    var_23 = ((/* implicit */int) var_12);
}
