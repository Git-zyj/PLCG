/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -392082768;
    var_20 = ((var_11 ? ((-((var_12 ? var_6 : 1)))) : (((!var_17) ? var_16 : ((min(var_15, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [i_1] = min((((((32767 ? var_2 : -4108))) ? 1 : 392082767)), 392082768);
                var_21 ^= ((((((1 ? 4294967295 : 65535)) ? ((max(var_15, var_13))) : (var_18 <= var_1)))));
            }
        }
    }
    var_22 = (max(var_8, var_13));
    #pragma endscop
}
