/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_19 = (arr_4 [i_0] [11] [i_1]);
            var_20 = arr_0 [9] [i_1];
            var_21 = (arr_4 [i_0] [i_0] [i_1]);
        }

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_22 = (arr_3 [10] [i_2]);
            var_23 = (arr_4 [i_2] [i_2] [i_0]);
            arr_9 [i_0] [i_0] [i_2] = (arr_7 [i_0]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [i_3] = (arr_12 [i_0] [i_3]);
            arr_14 [i_3] [i_0] [i_0] = (arr_2 [i_0]);
            var_24 = (arr_3 [i_0] [i_3]);
        }
        arr_15 [i_0] = (arr_6 [i_0] [i_0]);
        arr_16 [i_0] [i_0] = (arr_7 [2]);
        var_25 = (arr_11 [i_0]);
    }
    var_26 &= var_14;
    var_27 = (min(((max(((min(var_15, var_5))), (max(var_8, var_6))))), (max((min(var_7, var_3)), (max(var_3, var_15))))));
    var_28 ^= (min((max(((min(var_8, var_2))), (min(-17327, 6)))), (max(22269, 1))));
    #pragma endscop
}
