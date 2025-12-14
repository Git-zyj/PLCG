/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_13 = (min(var_13, var_5));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [5] [i_1] [i_1] [i_1] = ((var_3 * (var_3 * var_4)));
                        var_14 = var_5;
                        arr_12 [i_0] [i_1] [i_1] [10] [11] = (var_2 != var_9);
                        arr_13 [i_0] [i_0] [2] [i_3] = var_11;
                    }
                    arr_14 [i_0] [i_1] [6] [13] = var_12;
                }
                arr_15 [i_0] = var_3;
                arr_16 [i_1] [i_0] = var_1;
                var_15 *= (var_2 < var_3);
                var_16 = (min(var_16, var_8));
            }
        }
    }
    var_17 *= (((((((var_1 >> (var_10 - 682634160))) < var_2))) > var_5));
    #pragma endscop
}
