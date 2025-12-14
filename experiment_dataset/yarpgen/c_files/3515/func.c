/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3515
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_11 = ((((/* implicit */int) max((var_10), (var_10)))) >> (((((/* implicit */int) ((unsigned short) var_1))) - (39462))));
                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((short) max((((/* implicit */int) min((var_8), (((/* implicit */signed char) var_0))))), (((((/* implicit */int) var_6)) * (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((var_3), (var_9)))))), (((/* implicit */int) max((min((((/* implicit */unsigned short) var_10)), (var_9))), (max((var_9), (((/* implicit */unsigned short) var_4)))))))));
}
