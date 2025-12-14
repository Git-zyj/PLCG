/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] = var_2;
                    var_10 = ((!((((arr_5 [i_0] [i_0] [i_2]) ? (arr_7 [i_1] [9]) : var_7)))));
                }
            }
        }
        var_11 += ((!(arr_7 [i_0] [i_0])));

        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_12 = (arr_11 [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [1] [6] [i_3 - 2] [i_0] = (~var_4);
                            var_13 |= 1;
                            var_14 = (max(var_14, ((((((var_5 ? (arr_2 [5] [i_3 + 1] [i_0]) : (arr_5 [0] [i_3 - 2] [i_4 - 1])))) ? ((1 ? 27 : 6)) : (((var_9 ? var_9 : var_0))))))));
                            var_15 = ((+(((arr_6 [i_0] [i_5] [6]) ^ 18446744073709551588))));
                        }
                    }
                }
                var_16 = var_4;
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 7;i_8 += 1)
                {
                    {
                        var_17 *= (2989978468 == 1397216527);

                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            arr_32 [i_8] [1] [3] [i_7] [i_3 - 2] [i_8] = (((arr_10 [i_7] [i_9 + 2]) - var_2));
                            arr_33 [i_3 + 1] [1] [1] [5] [i_8] = (((-1 - 1) ? (arr_8 [i_3] [i_8 - 2]) : (arr_19 [2] [1] [i_7 - 3] [i_9 - 1] [i_9])));
                        }
                        var_18 = (((~(arr_11 [i_3]))));
                        var_19 += (((((4145431917495042897 ? var_6 : 24830))) ? (arr_18 [i_8 - 2] [i_0]) : ((((arr_11 [9]) & (arr_23 [i_0] [i_0]))))));
                    }
                }
            }
            var_20 = arr_16 [i_3] [i_3 - 2] [i_0] [i_0];
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_21 -= var_4;
                arr_40 [i_11] = ((!(arr_31 [i_11] [i_10] [i_11] [i_11] [i_0])));
            }
            arr_41 [i_0] [i_0] [i_0] = ((~((~(arr_38 [i_0] [2])))));
        }
    }
    var_22 = ((~((min((!44925), var_3)))));
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                arr_48 [i_13] = arr_47 [i_12];
                var_23 = (arr_45 [i_12]);
            }
        }
    }
    #pragma endscop
}
