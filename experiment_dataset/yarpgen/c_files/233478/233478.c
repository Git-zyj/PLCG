/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (!-58);
                    arr_8 [i_2] [i_2] [i_0] = (+-53);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_19 [11] [3] [i_3] [11] = ((max((arr_2 [i_0]), (~var_4))));
                        var_11 = (arr_14 [i_3 - 3] [i_5 + 3] [i_3 - 3] [i_5]);

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_12 += (max(((38 ? -53 : -743398189)), (var_8 <= 38)));
                            var_13 += 1786445763;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_14 = ((52 ? 44 : var_2));
                            var_15 = (max(var_0, (min(((min(var_9, -4781))), 28518))));
                            arr_25 [i_7] = ((-((max((arr_9 [0] [i_3] [i_4]), ((max(73, var_5))))))));
                            var_16 = (min(var_16, var_5));
                        }
                    }
                }
            }
        }
        var_17 = (max(((max(var_6, var_7))), (max((-127 - 1), var_2))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_9] [i_10] [i_10] = 50;
                    var_18 = 43682;
                }
            }
        }
        var_19 = (((arr_14 [i_8] [5] [i_8] [5]) ? (max((~var_9), ((max(var_5, (arr_24 [i_8] [10] [i_8])))))) : ((119 << (1752 - 1736)))));
        var_20 = (min(var_20, ((((~-var_5) >> (((arr_30 [i_8]) - 8635)))))));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_21 = ((((((min(43661, var_6))) / ((max(var_5, var_6)))))) ? (((var_4 * 30813) / 21843)) : 21854);

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_22 = 1551309396;
            var_23 = (max(253, -1551309396));
            var_24 = (min(var_24, (((((max(38, (arr_37 [i_12])))) ? var_1 : ((min((arr_33 [i_11]), var_5))))))));
        }
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            var_25 = ((~((min((arr_38 [i_13] [i_13 - 1]), var_9)))));
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_26 = 5835;
                            var_27 = -1;
                            arr_54 [i_14] [i_15] [i_14] [i_13] [i_14] = (((var_2 ? (arr_36 [i_13 + 1]) : (arr_36 [i_13 + 1]))) ^ (((arr_15 [i_13] [i_13] [i_16 + 1]) ? var_3 : var_7)));
                        }
                    }
                }
            }
            var_28 += ((-var_7 ? -65375 : -1185521871));
        }
        var_29 = -6214;
    }
    var_30 = (((((~((max(var_6, var_3)))))) ? ((((52565 || 43707) >= var_1))) : var_1));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            arr_66 [i_19] [i_18] [i_18] [i_18] = (arr_57 [i_18]);
                            var_31 &= (var_4 * var_5);
                            var_32 = (~31);
                            arr_67 [i_17] [i_19] [i_17] = 9790;
                        }
                    }
                }
                arr_68 [i_17] [i_17] = ((((((2743657899 ? 44893 : 37193)) ? var_6 : var_7))));
            }
        }
    }
    #pragma endscop
}
