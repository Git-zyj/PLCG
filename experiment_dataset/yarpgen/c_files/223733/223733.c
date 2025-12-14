/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (min((min(var_2, 856315835)), (max(var_8, var_3)))) : -14365));
    var_12 = 67;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_3 [i_1] [i_1] [i_1]) ? var_5 : var_9));
            arr_8 [i_0] [i_0] [i_0] = -var_4;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_13 = 3438651461;
                arr_15 [i_0] [i_2] [i_0] = ((3438651461 ? var_2 : (arr_6 [i_0 + 3] [i_0 - 2])));
            }
            var_14 = (max(var_14, var_4));
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                var_15 = (min(var_15, (arr_10 [i_5 - 2] [i_5 - 1] [i_5 - 2])));
                var_16 = var_6;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_26 [i_0] [i_0] [11] = var_2;
                var_17 = (max(var_17, (((var_2 << (((arr_10 [i_0] [i_0] [i_0 + 3]) - 99)))))));
            }
            arr_27 [i_0] = var_6;
        }
        arr_28 [i_0] [i_0] = (((arr_4 [i_0 + 1] [i_0 + 1]) ? (arr_5 [i_0]) : var_6));
        arr_29 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
