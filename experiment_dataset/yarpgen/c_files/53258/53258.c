/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 ^= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((((26 << (218071706 - 218071704)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_3 - 1] [i_1] [4] [i_1] [i_1] [i_0] = -1;
                        var_14 = (var_1 ^ var_7);
                        var_15 = (max(var_15, (((21905 && (var_7 > 2677819568))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (((var_4 ^ 1757151900) ? ((28702 ? 12187342638023940009 : var_5)) : (~var_1)));
        arr_16 [i_4] = var_7;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_16 = ((((5 ? ((var_1 ? 110 : var_9)) : var_5)) / var_3));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((var_7 ? 50918 : var_9))) ? var_10 : ((((9891 - var_9) ? -560318618 : var_3))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_6] [i_5] [i_5] = var_5;
                                var_18 &= ((var_2 < ((((!((((var_0 + 2147483647) << (((var_8 + 8181197262382950280) - 31)))))))))));
                                arr_29 [i_5] [i_5] [i_7] [i_7] [i_5] [i_9] = (+-207917546);
                                var_19 = ((((((var_3 ? var_0 : -25643)) + 2147483647)) << (((var_5 || 0) - 1))));
                                arr_30 [i_6 - 3] [i_6] [i_6] [i_6 - 3] [i_6] [i_5] [17] = (!0);
                            }
                        }
                    }
                    arr_31 [i_5] [i_5] [i_5] = (--1);
                    var_20 ^= 4294959104;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
    {
        var_21 = (25642 <= -1);
        var_22 = (7933649487048290609 ^ var_1);
        arr_34 [i_10] = (((var_3 ^ 15611605075820853322) & var_0));
        arr_35 [19] = (7680 || var_2);

        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_38 [i_10] = (!1464195166);
            arr_39 [i_10] [i_11] [i_10] = 1636795956;
            arr_40 [i_10] [14] [11] = (!var_10);
            arr_41 [i_10] [i_11] [i_10] = var_0;
            var_23 = 1;
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_45 [i_12] = (var_5 / var_0);
            var_24 = var_0;
            arr_46 [2] [i_12] = (((8220 ? (-1 / 3419697598) : var_0)));
            var_25 &= ((-517678296 ? var_3 : 11041685772117777636));
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_26 = (((~var_4) % ((8208 ? 2658171340 : var_7))));
                        var_27 = (((3626540110 << (var_8 + 8181197262382950266))));
                    }
                }
            }
            var_28 ^= 152;
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            arr_56 [i_10] = 46048;
            var_29 |= (+((+(((-7661 + 2147483647) << (var_5 - 1))))));
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 9;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 8;i_20 += 1)
                    {
                        {
                            var_30 = (max(var_30, ((((-1265966827 ^ ((var_9 ? 4744240068196380217 : var_6))))))));
                            var_31 = var_0;
                            var_32 ^= var_8;
                            arr_65 [i_17] [i_18] [i_19 + 2] [i_20] = (8092563697719498008 && 2040);
                        }
                    }
                }
                var_33 = var_10;
            }
        }
    }
    #pragma endscop
}
