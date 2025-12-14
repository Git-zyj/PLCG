/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5222
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)16] = min((((((/* implicit */int) (short)29488)) * (((/* implicit */int) (unsigned char)69)))), ((+(((/* implicit */int) (short)-29488)))));
                arr_7 [(unsigned char)8] = ((/* implicit */int) (((+(-946456285))) != (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_9);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((int) ((short) ((_Bool) var_6)))))));
    var_13 = ((/* implicit */unsigned char) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_10)))))));
}
