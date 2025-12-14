/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (-53 && 4);
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_15 = (46 + 45);

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_16 = arr_2 [i_0] [i_1];
                var_17 = min(-52, -46);
            }
        }
        var_18 = arr_5 [i_0] [8] [i_0];
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = -68;
        var_20 = ((!(((var_9 ? var_2 : var_10)))));
        var_21 = arr_7 [i_3] [i_3];
        arr_9 [i_3] = arr_0 [i_3];
        var_22 = ((((-(arr_1 [5]))) + -51));
    }
    #pragma endscop
}
