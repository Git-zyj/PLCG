/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_11 || var_0);
    var_16 = (var_12 % var_10);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 += (-(max((arr_0 [i_0] [i_0]), 2721310110)));
        arr_2 [4] [i_0] = (((max(var_9, (arr_1 [i_0] [i_0]))) + 950216760));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((max((1061753149 ^ 4294967295), (~950216760))) ^ var_10);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_1] |= (~2339193013);
            arr_11 [14] [14] = arr_9 [i_1];
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_18 = var_11;
            arr_14 [2] [i_3] = (-((1925481084 << (((arr_5 [i_1] [13]) - 3759640824)))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_19 = var_5;
                arr_19 [i_1] [i_3] [i_3] [i_4] = 3344750533;
            }
            /* vectorizable */
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                arr_22 [i_3] [i_3] [i_3] [i_1] = 4294967295;
                var_20 *= var_7;

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_21 = arr_3 [i_3 - 1] [i_3];
                    var_22 = var_13;

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_23 = 393156372;
                        var_24 = var_3;
                    }
                }
                arr_29 [i_1] [0] [i_5] = var_0;
                var_25 = (arr_7 [i_3 - 1] [i_5 + 2] [i_5]);
            }
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_33 [i_8] [i_8] [i_8] = -3344750533;
            arr_34 [i_8] = (max(((~(arr_4 [i_8]))), (arr_25 [i_1] [4] [10] [i_8])));
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_37 [i_9] [i_9] [5] = (((380033062 & 1447749359) % (max(3344750535, 4095))));
            var_26 = ((((((arr_26 [i_1] [0] [i_1] [i_1]) ^ (arr_1 [i_1] [7]))) >> (((((arr_3 [i_1] [0]) >> 23)) - 95)))) >> (((((var_4 ^ var_3) << (((arr_15 [i_1] [i_1] [i_1] [i_1]) - 1825585851)))) - 2868080632)));
        }
        arr_38 [i_1] [i_1] = ((-1763397200 <= (((arr_7 [i_1] [i_1] [i_1]) % (arr_32 [i_1])))));
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_45 [i_10] [i_11] = (-(max((arr_31 [i_10 + 2] [8]), (arr_31 [i_10 - 1] [14]))));
            arr_46 [i_10] [i_10] [i_11] = var_4;
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            arr_55 [i_10] = var_12;
                            var_27 = min(((~(arr_13 [i_10 + 1]))), var_9);
                            var_28 -= (4294967294 ? (((-((((arr_48 [i_12] [i_15]) <= (arr_21 [i_10] [i_10] [i_15]))))))) : 1763397195);
                        }
                    }
                }
            }
            var_29 = arr_31 [i_10 + 1] [i_12];
        }
        arr_56 [0] &= (((((var_6 ^ (max(2531570096, (arr_28 [i_10] [i_10])))))) && ((min(950216760, (((arr_43 [i_10] [i_10 + 1] [4]) | var_12)))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            arr_59 [i_10] = (((arr_21 [i_10] [i_10] [2]) > var_6));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        var_30 = 0;
                        var_31 = (4147186745 ^ var_14);
                        arr_65 [9] [i_10] [i_17] = (((arr_9 [i_18]) < var_6));
                    }
                }
            }
        }
        for (int i_19 = 1; i_19 < 8;i_19 += 1)
        {
            arr_70 [i_10] = ((!(3279207870 && 1530333746)));
            arr_71 [i_10] [i_19] = max((arr_57 [i_10] [i_10] [i_10 - 1]), 1015759426);
            arr_72 [i_10] [i_10] = arr_57 [i_10] [i_19] [i_10];
        }
        for (int i_20 = 1; i_20 < 10;i_20 += 1)
        {
            var_32 = (3263694429 * 1090036293);
            var_33 = (max(var_33, (max(2545199907, 2328149489))));
            var_34 = 6;
            arr_76 [i_10] = ((arr_51 [i_20] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [2]) ^ (((min(1763397200, 3204931002)) & (((arr_12 [3] [13] [i_20 - 1]) | var_6)))));
            var_35 |= ((max((arr_48 [i_10 + 2] [i_20 - 1]), (arr_8 [i_10 + 1] [i_20 + 1]))) / (max(4294967295, 3279207884)));
        }
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            arr_79 [i_10] [i_10] [i_21] = 4095851919;
            var_36 = (((((arr_26 [i_10 + 1] [3] [i_10 + 2] [i_10]) / (arr_26 [i_10 - 1] [i_10] [i_10 - 1] [i_10])))) ? (((var_7 < var_12) ? (arr_8 [i_10 + 1] [i_10 + 2]) : (arr_36 [i_10 - 1] [i_10] [i_10 - 1]))) : ((0 ? 4294967291 : 2645249395)));
            arr_80 [i_10] [i_10] = ((arr_26 [i_10] [i_10 - 1] [2] [i_21]) & var_13);
        }
    }
    #pragma endscop
}
