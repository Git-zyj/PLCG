/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3639521170639389147;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [9] [i_0] [i_2] [i_3] = var_10;

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [i_2] [3] = ((~(3639521170639389147 + 7306259995001539027)));
                            var_19 ^= (((var_13 ? var_2 : (arr_12 [7] [i_1] [i_2] [i_3] [i_4]))));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_20 = (arr_14 [i_0] [i_5 - 2] [i_2] [i_3 + 1] [i_0]);
                            arr_19 [i_0] [i_1] [i_0] [i_2] [i_2] [i_5] [9] = (((((480 ? 255 : var_9))) ? 2 : (~-4615776073198512088)));
                            arr_20 [5] [5] [i_0] [i_3] = ((var_13 ? 1368989903 : (6639 || var_6)));
                            var_21 = ((!(arr_18 [5] [i_3 + 1] [i_3 - 1] [i_3])));
                            var_22 = var_0;
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [2] [i_0] [i_2] [i_3 - 1] [i_3] [i_6 - 1] = (arr_3 [i_0]);
                            var_23 = (min(var_23, (((((((arr_0 [i_0]) & (arr_8 [i_1] [i_2] [i_2])))) ? -135230661 : (arr_12 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 1]))))));
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((arr_13 [i_7 - 2]) ? (arr_13 [i_7 - 2]) : 4398046511103));
                            arr_29 [i_0] [11] [i_2] [i_1] [i_0] = (((((arr_17 [i_3 - 1] [i_7 + 1] [i_3 + 1] [i_3 + 2] [i_2]) + 2147483647)) << (((var_10 + 3112641010164937055) - 19))));
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (245 != 15);
                        arr_31 [i_0] [i_2] [i_0] [i_0] = var_16;
                        var_25 = -15294;
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_2] = (((arr_0 [i_0]) / var_6));
                        arr_35 [i_0] [i_2] [i_0] [i_0] = var_10;
                    }
                    var_26 &= (((~8502996676506267183) ^ ((140737488355327 ? var_8 : -3097))));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_40 [i_0] [2] [i_2] [i_0] = ((var_9 ? (arr_8 [i_0] [i_9] [i_9 + 1]) : (arr_12 [i_0] [3] [i_2] [i_9 - 2] [i_10 + 1])));
                                arr_41 [i_10] [i_9] [i_9] [i_1] &= (((arr_21 [i_9 - 2]) ? var_5 : (arr_21 [i_9 - 3])));
                                arr_42 [i_0] [i_1] [i_1] [i_1] [3] [i_1] = -86;
                            }
                        }
                    }
                }
            }
        }
        arr_43 [i_0] [i_0] = ((1276 ? (arr_21 [i_0]) : -1265564098));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_27 = ((-5647 ? 50367 : 63));
            arr_50 [i_11] [i_11] [i_11] = (((140737488355342 ? 49793 : 8685810250459894924)));
            arr_51 [i_11] = (((((-490 ? -1 : 2044))) ^ ((var_15 ? -6639 : var_9))));
            var_28 = (max(var_28, (-57 % var_2)));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_56 [i_13] [i_11] [i_11] = var_0;
            arr_57 [i_11] = (var_8 / var_3);
            var_29 = var_9;
        }
        var_30 = -1158794972;
    }
    for (int i_14 = 4; i_14 < 9;i_14 += 1)
    {
        arr_60 [i_14] [i_14] = (min(((var_5 ? (arr_45 [i_14 - 2]) : (arr_45 [i_14 - 3]))), (arr_45 [i_14 - 1])));
        arr_61 [i_14] [8] = (min(((((arr_7 [i_14] [i_14 - 1] [i_14]) && (arr_7 [i_14 - 4] [i_14 - 4] [i_14])))), var_13));
    }
    #pragma endscop
}
