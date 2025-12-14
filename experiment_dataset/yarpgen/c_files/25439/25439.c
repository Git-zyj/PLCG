/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_0]);
                    var_16 = ((((((((arr_0 [i_0]) * var_9)) / (arr_2 [i_0])))) ? (((arr_0 [i_1]) - var_4)) : (arr_6 [i_0] [10])));
                    var_17 *= (arr_0 [i_1]);
                    var_18 = ((~0) ? (arr_7 [i_0]) : 0);
                    arr_8 [i_0] [1] [i_2] = (min((arr_5 [i_0] [i_1] [i_0]), (29520 != var_0)));
                }
            }
        }
        var_19 -= (((((arr_7 [i_0]) - (arr_6 [i_0] [i_0]))) <= (arr_5 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [5] [5] = (arr_6 [i_4] [2]);
            arr_15 [i_4] = (5068491318354722915 / 5133395537131879112);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_22 [i_3] [i_5] [i_5] [i_6] = ((arr_3 [i_5] [i_3]) | (arr_7 [i_3]));
                arr_23 [i_5] [i_5] = (((~1270751543) << (((arr_4 [i_3]) % (arr_4 [i_6])))));
            }
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                var_20 -= (~0);
                var_21 = (arr_6 [4] [i_5]);
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_22 *= var_12;
                        arr_31 [i_3] [i_5] = (arr_29 [i_3] [i_5] [i_8]);
                        var_23 = (arr_12 [i_5] [i_5] [i_9]);
                        var_24 -= arr_4 [i_3];
                    }
                }
            }
            var_25 = (max(var_25, ((((((arr_13 [i_3]) % (arr_27 [i_3] [i_3] [i_5]))) - (arr_3 [i_3] [i_5]))))));
            arr_32 [i_5] = arr_10 [i_3] [i_5];
            var_26 = ((~(32750 ^ -11613)));
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_36 [i_10] [i_3] = (arr_6 [i_3] [i_3]);
            arr_37 [i_10] [i_3] [i_3] = var_7;
            arr_38 [i_3] [i_10] [i_10] = 15576634926642202206;
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_41 [i_11] [i_3] [i_11] = var_7;
            arr_42 [i_11] [i_11] = ((~(arr_20 [i_3] [i_3] [4] [i_11])));
            var_27 = (arr_19 [i_11] [i_11] [8]);
            arr_43 [i_3] [i_3] [i_11] = 1;
        }
        arr_44 [i_3] = (2015890150 * 12144);
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_28 = (((((((~var_10) + 2147483647)) << (((arr_48 [i_12] [i_13] [i_13]) - 41)))) | ((((arr_45 [i_12]) != (arr_46 [i_13]))))));
            arr_49 [i_13] [i_13] [i_12] = ((var_9 ? (((arr_48 [i_12] [i_12] [i_12]) ? ((var_1 ? (arr_47 [i_12] [i_12] [i_12]) : var_5)) : ((((arr_45 [i_12]) * (arr_45 [i_12])))))) : (((~(arr_46 [i_12]))))));
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            arr_53 [10] [10] = ((((((var_9 > var_3) + (min(149, (arr_45 [i_12])))))) ? (arr_52 [11]) : (arr_47 [i_14 - 1] [i_14] [i_14])));
            var_29 -= var_1;
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_30 = (arr_54 [i_12]);
            arr_56 [i_12] [i_15] = (var_5 - 3683695732250735028);
            arr_57 [i_15] = ((!((max(1022, 0)))));
            arr_58 [i_12] [i_15] = (((((((~(arr_47 [i_15] [i_15] [i_12])))) ? (((~(arr_45 [i_12])))) : (arr_47 [i_12] [13] [i_15])))) ? ((min((arr_50 [i_12]), (var_10 | var_1)))) : (arr_45 [17]));
        }
        arr_59 [i_12] [i_12] = (arr_55 [i_12] [i_12]);
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_31 = (min(((~((10 ? 2059679318 : -6656)))), (arr_55 [20] [i_16])));
        arr_62 [i_16] [12] = (((arr_52 [i_16]) ? (arr_48 [17] [1] [i_16]) : (1809050638 == -1)));
    }
    #pragma endscop
}
