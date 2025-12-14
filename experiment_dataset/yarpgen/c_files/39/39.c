/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += var_6;
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_16 = 1;
                        var_17 = min((arr_4 [i_1]), (arr_7 [i_1] [i_1] [i_3] [i_3]));
                    }
                }
            }
        }
        var_18 = var_12;
        var_19 ^= 18566;
    }
    var_20 = (-(max((max(var_13, var_6)), (((var_12 ? var_0 : var_9))))));
    var_21 = var_1;
    #pragma endscop
}
