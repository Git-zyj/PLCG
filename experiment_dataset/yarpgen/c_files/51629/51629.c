/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1933005435;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = ((((((arr_5 [i_0] [i_1] [i_2]) ? ((736120471 & (arr_2 [i_0] [i_1] [i_0]))) : 10538))) ? var_13 : ((~(3558846825 * var_12)))));
                        arr_10 [7] [i_2] [i_1] [7] = 44983;
                        var_19 = (max(var_19, ((((-1231031326 + 2147483647) << ((((((((min(var_9, 20528))) ? -1916630496 : 1314887369)) + 1916630513)) - 17)))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, var_12));
                            var_21 += -44976;
                            var_22 = 736120463;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_8] [5] = (6 || var_13);
                            arr_28 [i_0] [i_4] [14] [14] [3] = 3558846832;
                        }
                    }
                }
            }
            var_23 = (20547 / var_8);
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_24 ^= 26119;
            var_25 ^= -0;
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        arr_34 [16] [17] = var_0;
        var_26 = (~26227);

        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_38 [i_13] = ((((((-1240240273 + 2147483647) >> (3558846801 - 3558846797)))) ? -108973472959578576 : 4294967277));
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        var_27 = ((!(1231031325 ^ 736120474)));
                        arr_45 [i_13] |= (((var_6 ? -12594 : 136)));
                        var_28 = (min(var_28, 204));
                    }
                }
            }
            var_29 = (max(var_29, (((-1231031326 ? 26132 : 16646144)))));
            var_30 = -181;
        }
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        arr_48 [i_16] = (((((max(2147483647, 30) >= var_6)))));

        for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
        {
            arr_53 [i_17] = ((((-(arr_52 [i_16] [i_17] [i_16]))) + (((min((arr_33 [i_17] [i_16]), 59204))))));

            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_57 [i_17] = 65519;
                var_31 = var_15;
            }
            arr_58 [i_17] = ((((((arr_56 [i_17] [i_17] [i_17]) || (arr_56 [i_17] [10] [i_17])))) + (max(65535, 307635604))));
            var_32 = (arr_41 [i_16] [i_16] [i_16]);
        }
        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
        {
            var_33 = (min(-2056437992, -1073855555));
            arr_62 [i_16] [i_16] [i_16] = var_13;
            var_34 = var_1;
        }
        for (int i_20 = 3; i_20 < 17;i_20 += 1)
        {
            arr_65 [i_20] [i_20] = (((min((arr_52 [i_16] [i_20] [i_20 + 1]), (arr_52 [i_20] [i_20] [18]))) < (arr_50 [i_16] [i_20] [i_20])));
            var_35 += ((~(!20)));
        }
        var_36 ^= (((min((1240240272 || -2147483631), var_6)) - var_13));
    }
    var_37 = 120;
    #pragma endscop
}
