/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201812
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((_Bool) (_Bool)1));
    var_21 = ((/* implicit */signed char) var_6);
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_17))));
}
