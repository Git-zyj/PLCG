/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -119;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((-(arr_0 [i_0]))) > 61655));
        arr_4 [2] [2] &= (((arr_1 [i_0]) << (((min(1319197715, (arr_2 [i_0]))) - 1319197711))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_16 = ((+(((arr_5 [i_1 - 1] [i_1 + 1]) - ((max(24031, var_14)))))));
        var_17 = (((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : ((33151 ? var_2 : var_8)))) >= ((max((arr_5 [i_1 + 1] [i_1 + 1]), (1 & var_9))))));
        var_18 = (arr_5 [i_1 - 1] [i_1 - 1]);
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_19 += ((((min(var_1, (arr_5 [i_2 - 2] [i_2 - 3])))) ? 574182635771558326 : (arr_5 [i_2 - 3] [i_2 + 1])));
        var_20 |= (((((124 ? ((max(var_6, var_4))) : ((-(arr_7 [i_2] [i_2])))))) || var_14));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = ((var_12 ? ((~(arr_8 [i_3] [i_3]))) : ((max(85, -26300)))));

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_21 = ((!(((1706987407 ? var_5 : var_10)))));
            var_22 += 85;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_23 = ((max(2050925741, 1951113448)));
            arr_21 [i_3] = var_6;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_24 = 1;
            var_25 = (((((arr_13 [i_3]) ? (arr_23 [i_3] [i_6]) : (arr_23 [i_3] [i_3]))) | (arr_10 [i_3] [i_6 + 1])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_3] [i_3] = 9;
            var_26 += var_14;
            var_27 = (max(var_14, (arr_7 [i_7] [i_3])));

            /* vectorizable */
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    var_28 = (arr_30 [i_3] [i_8 - 1] [i_8 - 1]);
                    arr_33 [1] [i_8 - 1] [1] [1] |= ((var_2 ? ((var_13 ? 4 : var_14)) : var_0));
                    arr_34 [i_3] [i_8] [i_7] [i_3] = var_11;

                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = var_4;
                        var_29 = (~34);
                        var_30 = 85;
                        arr_38 [i_3] = (((arr_19 [i_8 - 1] [i_8 - 1]) + (arr_12 [i_9 - 3])));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_3] [i_11] = 38032;
                        var_31 = 1;
                    }
                    var_32 = ((-1 >= ((var_13 ? (arr_25 [i_3]) : var_12))));
                }
                arr_43 [i_7] [i_3] = -1;
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_33 = (-(arr_44 [i_12 - 1] [i_3] [i_12 - 1] [i_12 - 1]));
                var_34 = (arr_9 [i_12 - 1]);
            }
        }
        arr_48 [1] &= (+-7209);
    }
    #pragma endscop
}
