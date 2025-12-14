/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25817
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_11))))));
                arr_5 [i_0] [i_0] = (!((((!(((/* implicit */_Bool) -2358867109188900044LL)))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0] [i_1])), (arr_3 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (var_12)))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((((/* implicit */_Bool) 3512827002424668281LL)) ? (1607802042) : (-1607802025)))))) : ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (var_10)))))));
}
