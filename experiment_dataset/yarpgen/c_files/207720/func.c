/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207720
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_0))), (var_9)))) ? (((/* implicit */int) var_10)) : (var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (signed char)-103)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 - 2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [3U])) || (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1]))))))));
                var_14 = ((/* implicit */long long int) ((_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_5 [i_0 - 3])))));
            }
        } 
    } 
    var_15 = var_0;
    var_16 = min((((/* implicit */unsigned int) ((var_11) != (((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_1))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6))));
}
