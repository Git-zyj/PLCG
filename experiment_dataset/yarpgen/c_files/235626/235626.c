/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((+((max((arr_1 [16]), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((((max(((-1782764463 ? var_9 : 0)), (arr_0 [i_0] [13])))) ? (arr_0 [21] [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 = -1301278958;
        arr_7 [i_1] = max(var_13, -1301278954);
        var_17 = (min(var_17, (((55 << (((arr_6 [i_1 + 2]) - 1935649699)))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        arr_12 [i_2] = 1;
        var_18 = arr_4 [i_2 - 1];
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = ((((var_7 ? 64 : (var_12 / 114))) / var_5));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_6] [i_5] [i_5] [1] [i_3] = ((-((((max(-1301278947, var_10))) ? ((max(1, (arr_14 [i_3])))) : (~0)))));
                                arr_26 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6] = (6 ^ -93);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_20 += (~(((arr_31 [1] [i_4] [19] [i_8 - 1] [16] [16] [i_4]) ? ((((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]) <= var_8))) : 32764)));
                                arr_32 [i_9] [i_8] [i_5] [i_5] [i_3] [i_3] = (((1 ? -29380 : 0)));
                                arr_33 [i_5] [i_4] [1] [i_5] [i_8] = ((((((-37 ? var_5 : var_10))) ? 21 : var_3)));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 1; i_10 < 24;i_10 += 1)
        {
            var_21 *= var_13;

            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                arr_39 [i_11 - 1] [i_10] [i_11] = (-123 <= var_2);

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_22 = ((((100 >> (14856 - 14849))) >> (((arr_34 [i_12] [i_10] [i_3]) + 2937))));
                    arr_44 [i_3] [i_10] [i_3] [i_12] [i_11] [i_11] = -1301278954;
                }
            }
            var_23 = ((var_0 != (arr_15 [i_3] [i_10 - 1])));
            var_24 = (max(var_24, (!var_10)));
        }
    }
    var_25 = ((2147483647 ? (((((min(var_0, var_12))) > var_7))) : ((var_1 ? var_12 : 1301278953))));
    var_26 = var_11;
    var_27 = ((((min(((-123 ? 155 : 208)), 51775))) == 4011505012));
    var_28 |= 48;
    #pragma endscop
}
