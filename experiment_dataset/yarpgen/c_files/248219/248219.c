/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 -= ((((arr_1 [i_0]) ? (min(12859917163064251049, 5586826910645300577)) : ((((arr_1 [i_0]) ? var_3 : var_7))))));
        var_11 -= ((((arr_1 [i_0]) ? 5769190184874469986 : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = var_8;
            var_12 = (min(var_12, (((min((arr_0 [i_1]), 5586826910645300567))))));
            var_13 = ((min((((-29935 ? var_6 : var_8))), 830583503866906443)));
            var_14 = ((min(((var_1 ? 0 : var_8)), 3035953807)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_15 = (((var_2 ? (max(var_3, (arr_5 [7]))) : 246)));
                            var_16 += (arr_0 [i_3]);
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_17 = 29931;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    arr_24 [i_1] [i_6] = ((18763 ? (arr_5 [i_6 + 2]) : var_5));

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_18 = var_8;
                        var_19 = (arr_16 [i_1]);
                    }
                    var_20 &= (((var_2 ? (arr_23 [i_1] [i_6] [i_7]) : -2814642957386323635)));
                    var_21 = 29931;
                }
                var_22 = (arr_8 [i_7] [i_6 + 3]);
                var_23 = (max(var_23, (arr_17 [i_6 + 3])));
            }
            arr_27 [i_1] [i_1] = (arr_23 [i_1] [i_6] [i_1]);
        }
        arr_28 [i_1] = (((min(-6647845721551259209, var_9))) ? (((((6531849911598533625 ? -29931 : 46))))) : (min(18014398375264256, var_5)));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_24 = (((((var_0 ? var_8 : (arr_1 [i_1])))) ? (((arr_26 [i_1] [3] [9] [1] [0] [i_11]) ? var_4 : (arr_31 [i_1] [i_1] [i_11]))) : -13842));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_35 [i_1] [i_1] [i_1] [i_1] = var_2;
                        arr_36 [i_1] [i_1] = -11;

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_25 = 65521;
                            arr_39 [i_1] [i_10] [i_11] [i_13] [i_11] [i_1] = 29935;
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_43 [i_1] [i_1] [10] [i_12] = (((((var_7 ? var_8 : var_9))) ? (arr_9 [i_1] [i_11] [i_12] [i_14]) : var_8));
                            var_26 = ((var_9 ? var_8 : 0));
                        }
                        var_27 = (max(var_27, (arr_23 [i_12] [9] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        var_28 = ((-18014398375264257 ? var_8 : var_1));
                        var_29 = ((4097828521 ? (arr_16 [i_1]) : 92));
                        arr_47 [i_1] [11] [i_1] [i_1] [i_15] = (arr_21 [i_1] [i_1] [i_10] [9] [i_11]);
                        var_30 ^= (((arr_10 [i_11] [0]) ? -31223 : (arr_42 [i_1] [i_11] [i_15 - 1] [i_15 + 1] [i_15 + 2] [i_15 + 2])));
                    }
                    var_31 = -125;
                    arr_48 [i_1] [i_1] [6] [i_1] = 9742;

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_32 = ((((194 ? 165 : 126))));
                        arr_53 [i_1] [i_10] [i_11] [i_1] = ((min(var_8, (((arr_40 [6] [7] [5] [i_1] [i_11]) ? var_1 : (arr_8 [i_10] [i_10]))))));
                        var_33 += (((((min((arr_16 [i_16]), 1)))) ? (((((25121 ? 722957392 : (arr_31 [i_1] [i_16] [i_1])))) ? (arr_15 [i_10] [i_16]) : ((var_1 ? 78 : var_0)))) : (min((arr_32 [i_1] [i_10] [i_11] [i_10]), (arr_25 [i_16] [i_16] [i_10] [i_16])))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            arr_57 [i_1] [i_11] [i_10] [i_1] = 12825696530153459519;
                            var_34 ^= ((449970962 ? var_1 : var_1));
                        }
                        arr_58 [i_1] [i_10] [i_10] [i_16] = 1009991336;
                    }
                }
            }
        }
        var_35 = ((min((arr_7 [i_1] [i_1] [i_1] [i_1]), var_5)));
        var_36 = 9741;
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_37 += ((11805 ? (min(2508599053181465985, 9223372036854775807)) : -256));
            var_38 = (min(var_38, (arr_37 [i_19] [i_19])));
            var_39 = (min((max(var_7, (arr_19 [i_19] [i_18] [i_18] [i_18]))), (arr_23 [i_18] [i_18] [8])));
        }
        var_40 = ((max(((((arr_37 [9] [9]) ? 9753 : var_3))), ((var_0 ? 2548138900681015062 : (arr_7 [i_18] [i_18] [i_18] [4]))))));
    }
    var_41 = (min((((((15 ? var_0 : var_0))) ? ((var_8 ? var_1 : var_2)) : ((var_5 ? -6 : var_5)))), (((min(55794, 65515))))));
    var_42 = (((164 ? 10030 : 4)));
    #pragma endscop
}
