/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (arr_3 [i_0] [1] [1])));
            var_19 = (max(var_19, (arr_0 [i_0])));
            var_20 = (-2147483647 - 1);
            var_21 = (min(var_21, (arr_1 [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_14 [i_0] = 2745840306;
                arr_15 [i_3] [i_0] [i_0] [i_0] = (arr_8 [i_0]);
            }
            arr_16 [i_0] = ((32758 >= (arr_4 [i_0])));
            arr_17 [i_0] [i_2] [i_0] = (~var_5);
        }
        arr_18 [i_0] = var_7;
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_22 -= (max(((((((~(arr_0 [i_4])))) ? (arr_10 [i_4 - 1]) : 1549126989))), -1176520489267875442));
        var_23 = (min(var_23, var_8));
        arr_22 [i_4] = (max(1464144053, (((((min((arr_2 [i_4] [10]), 4693099556165088181))) ? (arr_21 [i_4] [i_4 - 2]) : -32759)))));
        arr_23 [i_4] = (min((((-(arr_10 [i_4])))), ((((max((arr_5 [i_4]), (arr_9 [1] [10] [i_4 - 2])))) ? (min((arr_3 [i_4] [i_4] [7]), 1)) : 10723))));
        var_24 |= (max((((arr_6 [i_4 + 1] [i_4 + 1]) ? var_4 : (arr_6 [i_4 - 2] [i_4 + 1]))), var_16));
    }
    #pragma endscop
}
