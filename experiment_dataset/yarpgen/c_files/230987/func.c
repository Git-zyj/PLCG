/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230987
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
    var_17 = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23349)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)496))))), (((((/* implicit */_Bool) 2194728288256LL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)))))), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13))), (((/* implicit */long long int) var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_0 [6LL])) > (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) > ((-(((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (short)-13806)))));
    }
    var_21 = ((/* implicit */short) min((var_21), (var_3)));
}
