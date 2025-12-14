/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [14] [i_0] = 21059;
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? (arr_6 [i_1 - 2] [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_18 [i_3] [i_3 + 2] = (arr_8 [i_3] [i_4]);
            var_10 = 127;
            arr_19 [i_3] [i_3] = (arr_17 [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_11 |= 0;
                var_12 = (max(var_12, (arr_20 [0])));

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    arr_26 [i_3] [i_3] [i_7] [i_7] [i_3 + 3] [i_7] = (~-1800957922328341619);
                    var_13 = 1;
                }
                var_14 = -1165718200;
            }
            arr_27 [i_3] [i_3] = (arr_6 [i_3 + 4] [i_3 + 3] [i_5 + 3]);
        }
        arr_28 [i_3] [4] = (((-(min((arr_3 [i_3] [i_3 + 3]), (arr_5 [12] [12]))))));
        var_15 = min(var_7, (((arr_25 [10] [1] [1] [i_3 + 1]) & (((arr_4 [4] [i_3]) ? -5159030079493768984 : (arr_24 [i_3] [i_3]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_31 [i_8] = ((var_6 / (arr_16 [i_8] [i_8 + 1])));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_16 = var_1;
            arr_34 [i_8] = 7679495127120513115;
            var_17 = (arr_5 [i_9] [1]);
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_18 = (166 ? (((arr_3 [i_8 + 1] [i_10]) + (arr_11 [i_8]))) : (arr_21 [i_10] [i_8 + 1]));
            arr_37 [i_8 + 1] [i_8 + 1] [i_10] = (0 - 7679495127120513115);
            arr_38 [2] [2] [2] = (arr_6 [i_10] [i_10] [i_8 + 1]);
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                arr_43 [i_12] [i_12] = (var_4 >> (7679495127120513115 - 7679495127120513096));
                arr_44 [9] [9] [i_12] [9] = 68;
                var_19 += (((arr_2 [i_12 - 1] [i_8 + 1]) / (arr_2 [i_12 - 2] [i_8 + 1])));
                arr_45 [i_12] [i_12] = (arr_32 [i_11]);
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        {
                            var_20 ^= (arr_5 [i_11] [i_14 - 1]);
                            arr_52 [i_12] [i_12] [5] = (((arr_48 [i_12] [i_13 + 1] [i_12 - 2] [i_12]) ? (883728521 < 1) : (arr_23 [i_8] [i_8 + 1] [1] [i_8 + 1])));
                            var_21 = (min(var_21, ((((arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1]) != -0)))));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                arr_56 [i_15] = (((arr_12 [i_11]) == (~1)));
                arr_57 [i_8] [i_8] [i_11] [i_15] = var_1;
                var_22 |= (arr_0 [i_8 + 1] [i_8 + 1]);
                var_23 = (min(var_23, (arr_14 [i_8] [i_11] [i_15])));
                var_24 *= -17984;
            }
            arr_58 [1] [1] [i_11] = var_4;
            var_25 = (arr_32 [i_11]);
        }
    }
    var_26 &= 81;
    #pragma endscop
}
