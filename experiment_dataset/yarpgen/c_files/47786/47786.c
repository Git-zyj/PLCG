/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = var_4;
                        var_17 = var_1;
                        arr_10 [i_3] [11] [i_2] [i_1 - 2] [15] [i_3] = var_7;
                        var_18 = var_0;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_19 = var_1;
                        arr_13 [i_0] [i_1] [i_0] [i_0] = var_4;
                        var_20 = var_11;
                    }
                    var_21 = var_0;
                    var_22 = (min(var_22, var_4));
                    arr_14 [15] [15] [i_2 + 1] [i_2 + 1] = var_1;
                }
            }
        }
        var_23 = var_2;
        var_24 -= var_12;
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_17 [15] [15] = var_2;

        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] [i_5] = var_7;
            arr_21 [8] [2] [i_6] = var_10;
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_7] = var_8;
            arr_25 [i_5 - 1] = var_4;
            arr_26 [i_5] [i_5 + 1] [i_5 + 1] = var_13;
            var_25 = var_9;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_29 [i_5 - 1] [i_8] [2] = var_13;
            arr_30 [i_5 + 1] [i_5 + 1] = var_6;
            var_26 = var_0;
            var_27 = (min(var_27, var_5));
            var_28 = (max(var_28, var_13));
        }
        arr_31 [i_5] = var_6;
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = var_8;
        arr_36 [i_9 + 1] = var_7;
    }
    #pragma endscop
}
