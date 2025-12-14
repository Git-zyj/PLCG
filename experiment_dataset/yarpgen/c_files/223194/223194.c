/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 ^= (arr_2 [i_0]);
        var_20 = var_1;
    }
    var_21 = 471716874;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, var_4));
                    arr_11 [i_1] |= -62907;
                    arr_12 [i_1 - 2] [i_2] [11] = (arr_4 [i_1]);
                }
            }
        }
    }
    var_23 = var_18;
    var_24 = var_11;
    #pragma endscop
}
