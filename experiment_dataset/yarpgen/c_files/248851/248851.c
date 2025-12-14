/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = 10;
                        arr_10 [i_1] [i_2] [i_2] = 633708969;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_14 = (var_1 ? var_0 : ((3722320123071699823 ? var_4 : 255)));
                        var_15 += -50596;
                    }
                }
            }
        }
        var_16 = 127;
        var_17 = (arr_14 [i_0] [7] [7] [6]);
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        arr_19 [i_6] |= ((~(max(268173312, -99))));
        arr_20 [i_6] [i_6] = ((176 ? (((3458749805 ? (arr_17 [i_6 - 1]) : 42))) : 0));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_23 [i_7] = 110;
        arr_24 [i_7] = max(var_8, var_5);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_18 = (min((~18432185861041080441), (~637561739)));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_19 |= (max(268173312, -0));
            arr_31 [i_8] [i_8] [i_8] = 5899349494834138902;
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            var_20 = 0;
            arr_36 [i_8] [i_10 - 2] [i_8] = (((arr_32 [i_8] [i_8]) ? 12547394578875412723 : var_4));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_44 [22] [22] [20] [20] [i_8] = ((-var_6 ? 7 : -1572832661));
                            var_21 = 4914583859812274720;
                            var_22 = (min(var_22, 5899349494834138902));
                            var_23 = ((!(arr_40 [i_12 + 3] [4] [i_13 + 1] [i_13])));
                        }
                    }
                }
            }
            arr_45 [i_8] [i_10] = (arr_33 [i_8]);
            var_24 -= ((~(arr_21 [i_10 - 3] [2])));
        }
    }
    #pragma endscop
}
