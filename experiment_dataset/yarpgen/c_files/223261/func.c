/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223261
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_5 [i_0])))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_3);
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3903)) >= (((/* implicit */int) (short)25798))));
            }
        } 
    } 
    var_11 = ((int) var_5);
    var_12 = ((/* implicit */unsigned char) var_0);
}
