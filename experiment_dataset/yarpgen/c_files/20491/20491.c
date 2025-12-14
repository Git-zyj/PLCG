/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 255;
        arr_3 [i_0] = ((var_3 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = 255;
        arr_7 [i_1] = ((208 < (((((~(arr_5 [2]))) <= ((15 ? (arr_4 [i_1]) : (arr_5 [i_1]))))))));
        arr_8 [i_1] [i_1] = 248;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_17 = (((arr_0 [i_5]) <= 240));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_18 += (--100);
                            arr_22 [i_2] [i_3] [i_2] [i_2] = ((-(arr_18 [i_2] [i_3] [i_4] [i_5] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [i_2] [4] [i_3] [i_7] = 0;
                            var_19 = -43;
                            var_20 -= (((arr_11 [i_7]) + (arr_11 [i_5])));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_21 = ((((0 < (arr_23 [i_2] [0] [i_4] [i_5] [i_5] [i_8] [i_8])))));
                            var_22 = (((((233 ? var_6 : 255))) ? (arr_19 [i_2] [i_2] [0] [4] [i_5] [i_8]) : 31));
                            var_23 = 219;
                        }
                        var_24 = (((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [1] [i_2]) > 3));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_32 [i_2] [i_3] [i_2] [i_2] [i_2] = ((15 > ((2 ? var_9 : 255))));
                            arr_33 [i_3] [i_3] [i_3] [1] = (arr_24 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                        var_25 = ((213 <= (arr_14 [i_2] [i_3] [i_3])));
                    }
                }
            }
        }
        arr_34 [i_2] [i_2] = (((((232 >> (238 - 234)))) ? (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : ((135 ? (arr_4 [17]) : 219))));
        arr_35 [i_2] [0] = (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_16 [i_2] [4] [i_2] [i_2]) : 45));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_26 = (max(var_26, (((211 ? (arr_39 [i_10] [10]) : 0)))));
        arr_40 [i_10] [4] = (((((var_14 ? 19 : 49))) || 128));
    }
    #pragma endscop
}
