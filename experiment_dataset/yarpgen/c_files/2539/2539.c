/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((arr_1 [i_0] [i_0]) ? (min((arr_1 [i_0] [i_0]), 5106)) : (((arr_1 [i_0] [i_0]) ? var_2 : (arr_1 [i_0] [0]))))))));
        arr_4 [i_0] = (max((!18682), (max(9062685899177891175, var_5))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 = (((-2147483647 - 1) != (arr_1 [i_1] [10])));
        arr_9 [i_1] = (var_13 ? var_7 : (arr_7 [i_1]));
        var_17 = ((var_13 - var_3) ? (arr_0 [i_1]) : ((var_3 ? -13 : 66)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_18 += (arr_10 [i_2]);

        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_19 = (arr_21 [9] [9] [i_3] [i_3 - 2]);
                            var_20 = (arr_12 [i_2]);
                        }
                    }
                }
            }
            var_21 = 536868864;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, (((52 && ((((arr_26 [i_2]) ? var_14 : 16465785))))))));
                    var_23 = ((32604 ? 8452614819945535912 : 180));
                }
            }
        }
        arr_30 [i_2] = (((arr_18 [13] [i_2] [i_2]) == (arr_26 [i_2])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_24 = (min(var_24, ((((((arr_33 [i_9] [i_9]) >> (((arr_33 [i_9] [i_9]) - 16155)))) & 45)))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_38 [i_9] = 8452614819945535912;
            var_25 = var_0;
            var_26 = ((var_5 ? (arr_28 [i_9] [i_9] [i_10] [i_9]) : (3973143222193156924 >> 0)));
            var_27 = 2325230476671151303;
        }
    }
    var_28 = var_4;
    var_29 = (min(var_29, (max((~var_11), (min(4278501510, -4625307789689729359))))));
    #pragma endscop
}
