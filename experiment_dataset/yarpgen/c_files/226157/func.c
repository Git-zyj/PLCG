/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226157
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
    var_10 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_2 [i_1]))))))) : (max((((/* implicit */long long int) 864626881U)), (0LL)))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
}
