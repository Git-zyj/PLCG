/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214287
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_3 [i_0])))));
                arr_5 [i_0] [(unsigned short)5] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                var_17 = ((/* implicit */int) var_14);
                var_18 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */signed char) var_0);
    var_21 = ((/* implicit */unsigned int) var_8);
}
