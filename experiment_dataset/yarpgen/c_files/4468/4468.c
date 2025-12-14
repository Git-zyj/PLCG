/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_11 / -16);
    var_17 = (min((((var_14 + 32) / 6164129179315962718)), var_9));
    var_18 -= var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 -= (-32 > -1500092935);
                    var_20 -= 16;
                }
            }
        }
        var_21 = 0;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                {
                    var_22 = -87;
                    var_23 -= ((15335 / (arr_6 [i_0 + 1] [i_3 - 1] [i_3 + 1] [i_4 + 1])));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_24 = (min((((~((((-127 - 1) >= -33)))))), (min((((arr_16 [5]) * (arr_13 [i_5]))), (arr_14 [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [15] [i_6] [i_7] [i_8] = ((1 & ((max(-87, -80)))));
                        var_25 = (((!(arr_24 [i_5 + 1] [i_5 - 1] [i_6 + 1] [i_8] [i_8] [i_5]))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_26 -= (((((-(18446744073709551615 > -17)))) % var_2));
                        var_27 = (min(((max((-87 | 93203221), var_5))), (~var_6)));
                        arr_36 [i_9] [i_10] [i_11] [i_12] [i_9] [i_11] = var_10;
                    }
                }
            }
        }
        var_28 = ((((min(61, (~65521)))) <= (arr_35 [i_9])));
        arr_37 [i_9] [i_9] = (max((max((arr_35 [i_9]), (arr_35 [i_9]))), (max((arr_35 [i_9]), (arr_31 [i_9] [i_9] [i_9])))));
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        var_29 = (max(var_29, 70368744177663));
        var_30 = (min(var_30, ((min((((!(arr_18 [i_13 + 1] [4])))), (((arr_18 [i_13 + 1] [i_13 - 1]) / (arr_18 [i_13 - 1] [5]))))))));
        var_31 -= (max((4 >= 50881), (min((arr_30 [2]), (arr_30 [6])))));
    }
    #pragma endscop
}
