/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((((~(arr_1 [i_0] [i_0]))) >= ((((((arr_0 [i_0]) & -20)))))));
        var_10 &= ((((min(var_1, var_1)))) > 4432118227646139895);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_11 &= (arr_5 [i_1]);
        arr_6 [i_1] = (((arr_1 [i_1] [i_1]) / var_5));
        var_12 = (((arr_4 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_13 = 3;
        var_14 = (((((9302253463821711134 ? (arr_2 [i_2 - 1]) : (arr_5 [i_2])))) ? (min(var_5, 0)) : (arr_8 [7])));
        var_15 = var_9;

        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_16 = var_6;
            arr_12 [i_2 + 1] [i_3 + 1] [8] = (((arr_9 [i_3]) | (arr_5 [i_2 + 1])));
            arr_13 [i_2 - 2] [i_2 + 2] [i_2 - 2] = ((-684521019101626975 && (~var_1)));
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = ((((min((min(18, 65535)), (arr_0 [i_2 + 3])))) - 1));
            var_17 = ((-((17897927462108730618 ? -108 : 210))));
            arr_17 [21] [i_2] [i_2] = (arr_0 [i_2]);
            arr_18 [i_2 + 3] [i_2 - 1] = ((0 ? 13322908009803905713 : 2086070106898020127));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        arr_23 [i_5] = (((arr_15 [i_5 - 1] [i_5] [i_5]) && var_4));
        arr_24 [i_5] [i_5] = ((-var_8 ? 11482583340011312664 : (210 / var_2)));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_28 [i_5] [i_6] = (((arr_4 [i_5 + 1]) | (arr_4 [i_5 + 1])));

            for (int i_7 = 4; i_7 < 7;i_7 += 1)
            {
                arr_31 [i_5 + 1] [i_5] [i_6] [i_7 + 2] = (arr_4 [i_5]);
                arr_32 [i_5 + 1] [i_5] [i_7] = (arr_20 [i_7]);
            }
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_36 [i_5] = (arr_4 [i_8 - 1]);
            arr_37 [i_5] [i_8 - 1] = ((var_2 ? var_0 : (arr_8 [i_5 - 1])));
            var_18 = (((arr_27 [i_5 + 1]) ? (arr_27 [i_5 - 1]) : (arr_27 [i_5 - 1])));
            arr_38 [i_5] [i_8 - 1] = (((arr_21 [i_5 - 1] [i_5 + 1]) <= (arr_33 [i_5])));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_41 [i_5] [i_5 + 1] [i_9] = (((arr_20 [i_5]) ? (arr_25 [i_5]) : 44127));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_19 = ((-754871917867345888 <= (arr_25 [i_5])));
                var_20 = (i_5 % 2 == 0) ? (((((((arr_11 [18]) / (arr_4 [i_5])))) ? (arr_0 [i_10]) : (((var_5 + 2147483647) >> (((arr_19 [i_5]) + 7214632360860896857))))))) : (((((((arr_11 [18]) / (arr_4 [i_5])))) ? (arr_0 [i_10]) : (((var_5 + 2147483647) >> (((((arr_19 [i_5]) + 7214632360860896857)) - 5782641688125104965)))))));
            }
            var_21 = -191;
            var_22 = (arr_11 [i_5 - 1]);
        }
    }
    #pragma endscop
}
