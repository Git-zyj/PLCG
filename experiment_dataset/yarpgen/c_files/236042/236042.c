/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(29648, (max(8192, 214)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = var_15;
                    var_20 = (min(var_20, var_14));
                }
            }
        }
    }
    var_21 = ((((var_13 ? ((max(var_18, var_17))) : ((var_18 ? var_0 : var_15)))) % var_18));
    #pragma endscop
}
