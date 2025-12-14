/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = -74;
        var_15 = var_3;
        var_16 = (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = ((!(((arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [9]) != var_3))));
                        var_18 = (min((arr_7 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]), (((arr_4 [i_1 + 2] [i_3]) ? (arr_1 [i_2]) : (arr_3 [i_0 - 1] [i_1] [i_3])))));
                        var_19 = (129 ^ 1);
                        var_20 = ((((103 % (1 && 115))) != (~var_1)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        arr_15 [i_4] = (!((((arr_8 [19] [19] [i_4] [11]) ? (arr_5 [i_4] [i_4] [i_4 - 1] [i_4 - 3]) : var_11))));
        arr_16 [i_4] = var_5;
        var_21 = ((-35 ^ (((arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ^ var_0))));
    }
    var_22 = ((1 ? 39 : 7061));
    var_23 = (min((((((var_12 ? var_2 : var_0)) != 205))), var_7));
    var_24 = ((-((var_3 ? var_4 : var_7))));
    #pragma endscop
}
