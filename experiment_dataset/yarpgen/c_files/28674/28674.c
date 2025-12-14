/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (((arr_1 [i_0]) ? var_12 : 180));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (arr_11 [i_1] [i_2]);
                        var_18 = (-1 ^ -11);
                        var_19 = (arr_11 [i_1] [5]);
                        arr_13 [i_0] [21] [i_0] [1] [i_0] = (((arr_11 [i_0] [i_1]) && var_16));
                    }
                }
            }
            arr_14 [i_1] [i_0] [i_0] = var_2;
        }
        var_20 = (arr_11 [i_0] [i_0]);
    }
    var_21 = ((~(2016 | 1)));
    var_22 = (2038187168432510884 / 4294967280);
    #pragma endscop
}
