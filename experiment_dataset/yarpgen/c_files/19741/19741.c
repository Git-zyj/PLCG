/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((1 ? 1 : 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (+-68);
        arr_2 [i_0] &= ((((~(~3435747110754753563))) | var_9));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (arr_6 [i_1] [i_1] [7]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = -52753;
                                arr_14 [i_0] [i_1] [i_2] [1] [i_4] = max(-4, ((max(var_13, var_12))));
                                var_22 = ((!(((~(arr_4 [i_1 + 1]))))));
                                var_23 = (min(var_23, (arr_9 [i_0] [i_1] [i_0] [i_1])));
                                var_24 = ((~((1 ? (arr_1 [i_0]) : (arr_3 [i_1] [i_2] [i_2 - 1])))));
                            }
                        }
                    }
                    var_25 ^= (~var_15);
                }
            }
        }
        var_26 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_27 = var_5;
            var_28 = (min(var_28, ((min(12773, ((+((var_13 ? (arr_15 [i_0]) : 32766)))))))));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_29 |= (min(89, 12761));
        var_30 = ((((((52775 ? var_12 : 4193280)) + 2147483647)) << (-var_6 - 1062487941)));
        var_31 = (min(((-31870121 || (arr_12 [i_6]))), (!6144)));
        var_32 = (arr_17 [1] [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_33 = ((var_1 ^ (((min(0, 12762))))));
        var_34 = ((min(1, 6386854025842867163)));
        var_35 |= (((((~(arr_5 [i_7])))) ? ((-(((arr_12 [8]) / var_5)))) : (max(var_10, (arr_1 [i_7])))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_36 = ((((min((arr_4 [5]), (arr_4 [i_7])))) ? var_5 : ((~(~11221701312124443823)))));

            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                var_37 = arr_26 [6];
                var_38 |= ((-(arr_11 [1] [11] [16] [i_9 + 1] [i_7])));
                var_39 = (arr_9 [i_7] [i_7] [5] [i_9]);
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_40 = (max((max((arr_6 [i_7] [16] [11]), (arr_6 [i_10] [i_8] [i_7]))), ((((var_12 + 2147483647) << (var_13 - 54016))))));
                var_41 = ((63 ? -var_7 : (((~(((!(arr_24 [i_7])))))))));
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_33 [i_7] [4] [21] = 1118676065;
            var_42 = (max(12766, 19704));
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_43 = (min(var_43, ((max((max((arr_13 [14] [0] [1] [i_13 + 1] [22] [1] [i_13]), var_11)), (max((-32767 - 1), (arr_38 [16]))))))));
                        var_44 = var_11;
                    }
                }
            }
        }
        var_45 = (max((min((arr_22 [i_12] [i_12] [i_12]), var_8)), (max(-1, var_13))));
    }
    #pragma endscop
}
