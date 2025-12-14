/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_2 ? ((20 ? var_15 : ((var_7 << (var_10 + 4027))))) : ((((var_8 ? var_4 : var_6))))));
    var_18 *= (((max(((var_9 ? 0 : var_11)), 1)) | (max((min(var_14, var_11)), var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((((max(((max(var_11, 8388608))), var_15))) ? ((var_12 ? var_2 : (arr_2 [i_1] [i_0]))) : 255));
                arr_6 [16] = (max((min((min(var_16, var_11)), var_16)), ((max((max(65520, 1)), var_9)))));
            }
        }
    }
    var_20 = (min(var_15, var_6));
    #pragma endscop
}
