/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246145
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
    var_10 ^= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_11 = ((/* implicit */_Bool) ((3211450625U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((var_3) >= (1083516658U)));
        var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
    }
    var_13 += ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned int) ((0) | (((/* implicit */int) (unsigned short)54495))))), (max((3211450626U), (((/* implicit */unsigned int) -2047375556))))))), (var_2)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_0) + (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (max((((/* implicit */long long int) (short)11086)), (9223372036854775786LL))) : (((/* implicit */long long int) var_7))));
    var_15 = ((/* implicit */signed char) (unsigned short)11035);
}
