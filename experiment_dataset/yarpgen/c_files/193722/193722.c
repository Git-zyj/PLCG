/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        var_17 = var_13;
        arr_3 [i_0] = var_0;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [8] = var_6;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_1] [i_2] [i_3] = var_3;
                var_18 = var_0;
                var_19 = var_4;
                var_20 = var_11;
            }
            var_21 += var_7;
            arr_14 [i_1] [6] = var_4;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = (max(var_22, var_3));
            arr_19 [i_4] [i_1] = var_13;
            var_23 = var_6;
            arr_20 [i_1] [i_1] [i_1] |= var_14;
            arr_21 [i_1] [i_1] = var_2;
        }
    }
    var_24 = var_6;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_25 = var_11;

        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            arr_28 [i_5] = var_4;
            arr_29 [3] [i_6] [4] = var_1;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_32 [i_5] [i_7] [i_7] = var_9;
            var_26 = var_11;
            var_27 = var_15;
            var_28 ^= var_4;
        }

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_29 = var_12;
            var_30 = var_16;
            arr_37 [i_5] [i_8] [i_8] = var_3;
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_41 [12] [i_9] = var_15;
            arr_42 [i_9] [i_9] = var_4;
        }
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            arr_47 [i_10] [i_5] = var_11;
            var_31 = var_13;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_32 &= var_13;
            var_33 = var_14;
        }
        arr_50 [i_5] = var_16;
    }
    var_34 = var_16;
    var_35 = var_11;
    #pragma endscop
}
