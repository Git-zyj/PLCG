/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239664
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) (signed char)-121)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) < (((/* implicit */int) arr_2 [i_0 - 1])))))));
        var_14 = ((/* implicit */long long int) (_Bool)1);
        var_15 += ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0 - 1])))) * ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) (unsigned short)55146)) ? (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_8)))))))))));
    }
    var_17 = ((/* implicit */signed char) var_3);
}
