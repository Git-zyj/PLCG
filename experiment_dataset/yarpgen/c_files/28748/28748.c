/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [6] |= 32767;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [12] = var_14;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_18 = ((!((!(!var_16)))));
                    var_19 = (min(var_19, 7672502794255109285));
                }
            }
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_20 = var_4;
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_21 -= var_13;
                            var_22 = (max(var_22, var_4));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            var_23 *= -17070;
            var_24 = (!17069);
            var_25 = -var_11;
            var_26 = (max(var_26, var_11));
            var_27 = (max(var_27, var_1));
        }
        var_28 = (min(var_28, var_14));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_30 [i_9] = 0;
        var_29 = var_4;
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_30 = -17070;
        var_31 = 17069;

        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_32 = var_7;
            arr_35 [i_10] = var_13;
            arr_36 [i_10] [i_11] = var_15;
            var_33 -= 10;
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 18;i_13 += 1)
            {
                {
                    var_34 = (max(var_34, (!-17070)));
                    arr_41 [3] [3] [i_13] = -10;
                    arr_42 [i_13] = 2873064541;
                    arr_43 [i_10] [i_10] [i_10] [i_10] |= var_13;
                    arr_44 [i_13] [i_10] [i_12] [i_13] = var_6;
                }
            }
        }
        arr_45 [i_10] = (~4318034965683145761);
    }
    var_35 = (~var_6);
    #pragma endscop
}
