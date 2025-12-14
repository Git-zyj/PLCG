/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = -3650;

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_20 = 0;
            arr_6 [1] [i_1] [i_0] &= (arr_3 [i_0] [i_0] [i_0]);
            arr_7 [i_0] [i_1] [i_1 - 1] = -11710;
            arr_8 [3] [i_0 + 3] = ((((((arr_4 [i_0 + 3] [i_0] [i_0]) ? 32 : (arr_5 [i_0] [i_0] [i_1 + 1])))) || var_16));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [i_2] = (((arr_10 [i_0] [i_0] [i_2]) ? (arr_10 [i_0] [i_0] [i_2]) : (arr_10 [i_0] [i_0] [i_2])));
            arr_13 [i_0] [i_2] [i_2] = (arr_10 [i_2] [i_2] [i_2]);
            arr_14 [i_2] = (arr_5 [i_2] [i_2] [i_0 + 1]);
        }

        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_21 = (((((arr_0 [i_3] [i_0]) ? (arr_3 [i_0] [21] [i_0 + 2]) : var_3)) * 78));
            var_22 = ((var_17 ? (arr_16 [i_0] [i_3] [i_3]) : ((468332277 ? var_9 : (arr_1 [i_0])))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                arr_23 [i_4] [i_0 - 1] [i_4] [i_0 - 1] = (arr_15 [1]);
                var_23 = (arr_19 [i_0] [22]);
                var_24 = (arr_19 [i_0] [i_5]);
            }
            arr_24 [i_4] = var_1;
            var_25 = (max(var_25, (!var_0)));
        }
        var_26 = 0;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_27 [i_6] = -109;
        arr_28 [i_6] [i_6] = (arr_0 [i_6] [8]);
    }
    var_27 = var_2;
    var_28 = (((-((var_13 ? var_3 : 13636664673452787367)))));
    #pragma endscop
}
