/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209488
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((((/* implicit */_Bool) -4228657675866541413LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_19))) : (((/* implicit */long long int) (+(var_10)))))) * (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) 20U);
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_23 = arr_0 [i_1];
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1])), (arr_0 [i_1 - 1])))) ? ((~(arr_0 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (arr_4 [i_1 - 1] [i_1 - 1]))))))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_3 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) && (var_12)));
}
