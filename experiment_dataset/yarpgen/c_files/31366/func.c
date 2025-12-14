/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31366
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_0] = ((/* implicit */short) ((signed char) arr_0 [i_1]));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1180924658)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((1180924658) << (((((/* implicit */int) (signed char)34)) - (34)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_3))) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)));
}
