/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = ((32297 ? (max(var_14, ((min(-463359501, var_13))))) : -54));
    var_18 = (!var_3);
    var_19 = ((0 ? var_2 : var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = -32303;
                    arr_8 [i_0] [i_1] [i_0] [i_1] = (33240 - 33241);
                    arr_9 [i_1] [i_1] [i_1] = (!32296);
                }
            }
        }
    }
    #pragma endscop
}
