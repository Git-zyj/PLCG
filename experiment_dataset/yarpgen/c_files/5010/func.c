/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5010
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
    var_15 = ((/* implicit */int) var_0);
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_1)));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = arr_0 [i_0 + 1];
                arr_5 [0ULL] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1052275035U)) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (1052275034U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_7)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [6])) ? (1204218970060699058ULL) : (arr_1 [i_0])))))) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) 2088586654U)))));
                var_18 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (32736) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1]))))), (var_0)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_5);
}
