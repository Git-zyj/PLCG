/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((min((var_12 & 31880), (min(var_2, var_10))))) - ((var_6 ? (((min(127, -100)))) : ((-812038334 ? var_4 : var_2))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, ((min(((((((arr_1 [0]) ? var_13 : var_9))) ? (min(var_4, (arr_0 [i_0] [8]))) : (arr_0 [2] [2]))), ((((((var_8 ? (arr_0 [6] [2]) : -88))) && var_2))))))));
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_16 = var_9;
            var_17 = (((~(min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = (((-1956283950 ? 120 : -15)));
                var_18 += (((arr_7 [i_2] [2] [i_1] [2]) ? var_3 : (~var_4)));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        var_19 += (((arr_1 [8]) & 15));
                        var_20 += (((arr_11 [i_0 - 1] [i_1 - 1]) ? (arr_12 [i_0 - 1] [i_0 - 1] [8] [8] [8] [i_0 - 1] [i_4]) : 1));
                        var_21 *= (!var_9);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = (arr_10 [2]);
                        arr_15 [i_0] [6] [i_0] [i_3] = 24057;
                        arr_16 [i_0] [9] [8] [i_0 - 1] [i_0 - 1] [i_0] = (((((var_12 ? 812038334 : var_13))) ? -var_12 : (arr_14 [i_0] [i_0 - 1] [i_0 - 1] [8] [9] [2])));
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_5] = ((~(((arr_9 [i_5] [i_0] [i_2] [i_2] [i_0] [9]) ? 11 : (arr_4 [i_0 - 1] [i_0])))));
                    }
                    var_23 &= ((~(arr_0 [i_0 - 1] [i_2])));

                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_0] [i_6 + 2] = (((((~(arr_0 [i_0 - 1] [i_0])))) ? var_6 : -2147483628));
                        var_24 = (((arr_1 [i_0 - 1]) & 0));
                    }

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 + 1] [2] [i_0] [i_7] = 1;
                        arr_26 [i_0] = var_12;
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_25 = ((-((-106 ? (arr_27 [1]) : (arr_9 [i_0] [8] [8] [8] [i_0] [5])))));
                        var_26 = ((~(((arr_0 [i_0] [i_0]) ? var_13 : 2147483647))));
                    }
                }
                var_27 = (max(var_27, ((((arr_23 [i_0 - 1] [i_2]) ? var_11 : (((arr_4 [i_0 - 1] [3]) + var_9)))))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                arr_33 [i_0] [i_9] = 0;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_28 = (arr_9 [i_0] [i_0 - 1] [9] [3] [i_0] [i_1 - 2]);
                    arr_36 [8] [2] [6] [i_10] &= var_3;
                    arr_37 [i_0] [i_0] [6] [1] [i_9] [1] = (!4104166271570678853);
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, (arr_34 [i_11 - 2] [i_11] [i_11 + 1] [i_1 - 3] [i_0 - 1])));
                    arr_41 [i_1] [i_0] [9] = 32760;
                }
                for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_30 = 1;
                    var_31 = ((min(((~(arr_24 [i_0 - 1] [i_1] [i_9] [i_9] [i_12 - 2]))), (arr_32 [i_0] [i_0] [i_9] [i_12]))));
                }
            }
            var_32 = (i_0 % 2 == zero) ? (((((min((var_8 | -2147483628), ((var_10 ? -5131 : (arr_38 [3] [3] [1] [i_1 - 3])))))) == (((min((arr_35 [i_0 - 1] [5] [3] [i_0 - 1]), 2601127368750795632)) << (arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1])))))) : (((((min((var_8 | -2147483628), ((var_10 ? -5131 : (arr_38 [3] [3] [1] [i_1 - 3])))))) == (((min((arr_35 [i_0 - 1] [5] [3] [i_0 - 1]), 2601127368750795632)) << (((arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1]) + 42)))))));
            var_33 = (((min(var_7, -61)) != ((((67 ? var_12 : (arr_23 [i_0] [i_0])))))));
        }
    }
    var_34 = ((((min(619604623547199111, var_10))) ? var_4 : ((((((-29117 + 2147483647) << (1521966629 - 1521966629))) | (var_1 | var_7))))));
    #pragma endscop
}
