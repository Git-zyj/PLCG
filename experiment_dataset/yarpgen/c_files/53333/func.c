/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53333
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) arr_3 [(short)0] [i_1 + 1] [i_1 - 2]);
                var_16 = ((/* implicit */unsigned short) var_1);
                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_2 [(short)18] [i_1 + 1] [i_1 - 1])))), (((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 3] [i_1 - 2]))));
                arr_5 [(unsigned char)4] [(unsigned char)4] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            }
        } 
    } 
}
