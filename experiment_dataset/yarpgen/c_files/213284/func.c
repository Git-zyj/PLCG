/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213284
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_1))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) >> (((128969489) - (128969484)))));
                var_15 = ((/* implicit */unsigned char) arr_3 [(signed char)16] [i_0 - 3] [i_0 - 3]);
            }
        } 
    } 
}
