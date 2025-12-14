/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245033
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) arr_2 [i_0]);
        var_19 += (!(((/* implicit */_Bool) (~((~(arr_1 [i_0] [i_0])))))));
        var_20 ^= ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1 + 1] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */int) (short)14385)) % (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))));
        arr_7 [i_1 - 2] = (~((+(arr_3 [i_1]))));
    }
    var_21 = var_15;
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (var_15)));
    var_23 = ((/* implicit */long long int) var_16);
}
