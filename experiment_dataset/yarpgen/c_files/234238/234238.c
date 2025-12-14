/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0] [i_0] = (((arr_1 [i_4 - 1]) + (arr_1 [i_4 + 1])));
                                var_18 = var_10;
                                var_19 = (min(var_19, var_5));
                                arr_13 [i_0] [0] [i_2] [i_1] [i_0] = -1630888807;
                            }
                        }
                    }
                    var_20 = var_16;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_21 &= ((-(arr_20 [9] [3] [9] [i_6] [i_7] [i_7])));
                        var_22 &= var_6;
                        var_23 = -1630888807;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_9] [i_8] = 1630888807;
                    arr_31 [i_8] [i_8] = var_3;
                }
            }
        }
        var_24 = (min((((arr_26 [i_8] [i_8] [i_8]) ^ (arr_23 [i_8]))), (arr_24 [i_8] [i_8])));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_25 = ((arr_34 [i_11] [i_12] [i_11]) < (min(1630888807, (arr_36 [i_11]))));
            var_26 = (max(var_26, ((((arr_34 [i_11] [i_11] [23]) ^ (((((arr_35 [i_12]) % var_5)) ^ ((((var_13 == (arr_36 [i_11]))))))))))));
        }
        var_27 -= min(511, 32767);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_28 = var_12;
        var_29 = var_16;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                {
                    arr_43 [i_15] [i_15] [i_15] [i_13] = 1;
                    var_30 = (max(var_30, (arr_21 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])));
                    var_31 -= (((arr_29 [0] [i_14] [i_13] [i_14]) / var_14));
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_32 = (arr_35 [i_16]);
        var_33 = (arr_20 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]);
    }
    #pragma endscop
}
