/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_11, (((min(var_6, -1696890831))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 0;
        arr_3 [i_0] = (-(min((((1696890829 ? -1696890852 : 1696890851))), ((var_1 ? (arr_0 [i_0]) : (arr_0 [10]))))));
        var_19 = (min((arr_0 [i_0]), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (~-var_0);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = ((((arr_10 [i_1] [i_1] [i_2]) ? 2455990293 : var_1)));
            arr_11 [7] [i_2] = (arr_4 [i_2] [i_2]);
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_15 [i_3] = (((var_4 ? (arr_5 [i_1]) : (arr_12 [9] [i_3] [i_3 - 2]))) - 1);
            arr_16 [i_1] [i_3] = (arr_4 [i_3 - 2] [i_3 + 1]);
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_21 &= (var_5 == 1);

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                arr_25 [i_1] [i_1] [i_1] [i_5] = 6287881210964974211;
                arr_26 [i_5] = (arr_6 [i_4]);
            }
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                arr_29 [i_1] [i_1] = var_12;
                var_22 &= (((arr_28 [i_1] [i_6 - 1] [i_1]) ? (arr_28 [i_1] [i_6 + 2] [i_6]) : (arr_12 [i_4 + 1] [i_1] [i_6 + 1])));
                var_23 = (min(var_23, (!-1696890829)));
            }
            var_24 = ((+(((arr_18 [6] [6] [i_4]) ? -1696890830 : (arr_6 [i_4])))));
        }
        var_25 += ((7 ? (((-1696890829 + 2147483647) >> (-1696890829 + 1696890855))) : -15));
    }
    var_26 = (((max(((min(var_12, var_17))), ((var_17 ? var_7 : var_10)))) == ((((!((min(11, var_9)))))))));
    #pragma endscop
}
