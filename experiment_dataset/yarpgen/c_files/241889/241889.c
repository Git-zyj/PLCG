/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_7 * ((~((var_10 ? var_10 : var_2))))));
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((var_12 || ((min(26025, 255)))));
                var_16 *= (((max(var_4, 10254017922015548555)) < -248206300));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_3] [i_2] [i_3] = ((29836 ? -7471939750750734971 : 26026));
                var_17 = (((!120) ? 115 : ((min(var_7, (arr_9 [i_3 + 2]))))));
                var_18 += (!26005);
                var_19 = (((var_11 / var_6) - var_1));
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_20 [i_4] |= (max((arr_6 [i_4] [i_4]), (arr_7 [i_4])));
        var_20 = max(((max(((((arr_4 [i_4] [i_4]) || (arr_1 [18])))), (min((arr_3 [i_4] [i_4]), -26030))))), (min(-9128968824325417867, (((125 ? 15465 : 54364))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = var_8;
        var_21 = (((arr_22 [i_5]) | (((var_0 || (arr_9 [i_5]))))));
        var_22 = (max((!-26007), -1));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_23 = var_12;
            var_24 = (max((min((min(9128968824325417880, var_5)), 38858)), var_3));
            var_25 = 560353592;
            var_26 -= (max((((!(arr_19 [i_5])))), (min((arr_0 [i_5]), (arr_19 [i_6])))));
        }
        var_27 = var_4;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 = (arr_28 [i_7] [i_7]);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_29 = (max(var_29, 120));
                        var_30 = ((!(arr_27 [i_8 - 1])));
                        arr_36 [i_10] [i_9] [i_9] [i_7] [i_7] &= 14567418937428439746;
                        var_31 *= var_3;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_51 [i_11] [i_13 + 1] [i_11] [i_11] = var_9;
                                var_32 = (max(var_32, ((max(var_10, (--124))))));
                                var_33 = (min(var_33, var_7));
                                arr_52 [i_11] [i_14] [i_13] [i_12] [i_11] = ((-(arr_33 [i_15])));
                            }
                        }
                    }
                    arr_53 [i_11] [i_12] [9] [i_11] = (~((((arr_39 [i_11] [i_11]) || (-133 && 139)))));
                }
            }
        }
        var_34 = ((110 + (arr_34 [22] [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
    #pragma endscop
}
