/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225415
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
    var_10 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) var_9))))) <= (((/* implicit */int) ((signed char) (signed char)15)))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_9)))))))) + (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_12 = var_5;
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((signed char) ((signed char) var_6)))) : (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_1 + 2]), (var_1))))));
            }
        } 
    } 
}
