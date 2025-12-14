/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 / var_18) ? (!var_13) : var_3);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0]))), -1948874848));
        var_21 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_3 [i_1] [i_1 - 2]) ? (~var_4) : (((arr_2 [i_1 + 1]) % var_0))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_22 &= ((7432001858258384616 ? (~var_16) : var_0));
                        arr_15 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] = var_16;
                        var_23 = ((((~(arr_14 [i_1] [i_3 - 1] [i_2 + 1] [i_4 - 2] [22] [i_4]))) < ((~(arr_14 [i_1] [i_3 - 1] [i_2 - 1] [i_4 + 1] [i_1] [i_4])))));
                        var_24 &= ((~(arr_11 [i_1 + 1] [i_2 - 1] [i_4 + 2])));
                    }
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_3] [i_2] [i_1] [8] [i_2] [i_3 - 1] = ((var_11 ? var_16 : ((((arr_14 [i_5 + 1] [16] [i_5 - 4] [i_5] [i_2 - 1] [i_2 - 1]) ? (arr_14 [i_5 - 1] [i_5 - 4] [i_2 + 1] [i_5 + 1] [i_5] [i_2 + 1]) : -1658509669)))));
                        var_25 |= (arr_8 [14] [14] [i_3 - 1]);
                    }
                    var_26 = arr_6 [i_1] [i_2] [i_3];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_27 = (((((arr_20 [18]) | (arr_23 [i_6]))) ^ (arr_21 [i_6])));
        var_28 *= (~3319243149);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_27 [9] = arr_10 [i_7] [i_7] [i_7] [14];

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_31 [i_7] [i_7] = -9223372036854775785;
            arr_32 [i_7] [i_7] [i_8] &= (!16649982835210405733);
        }
        var_29 = var_0;
    }
    var_30 = (max(var_30, var_14));
    var_31 &= var_6;
    #pragma endscop
}
