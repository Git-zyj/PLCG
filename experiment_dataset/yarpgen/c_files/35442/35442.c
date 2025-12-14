/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_5, var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] = (arr_5 [i_1] [i_0]);
                var_16 = (max(var_1, (arr_3 [i_0] [i_1])));
                arr_9 [i_1] = (arr_0 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_17 = (arr_2 [i_2] [i_3]);
                var_18 = (min(8390739903438702296, var_8));
                var_19 = var_14;
            }
        }
    }
    #pragma endscop
}
