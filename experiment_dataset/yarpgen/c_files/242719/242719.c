/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 += -105;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 = ((-2900045081704624448 ? (arr_3 [i_0] [i_0] [i_1]) : var_8));
            var_17 = (var_3 & -2900045081704624466);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_18 = var_3;
                            var_19 = ((~((((arr_12 [i_0] [2] [i_2] [i_4]) != var_4)))));
                            var_20 = (-1480995078 && (arr_0 [11]));
                            var_21 = (!var_14);
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_1, var_11));
    #pragma endscop
}
