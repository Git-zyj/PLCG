/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = 124;
        arr_4 [i_0] = (arr_0 [i_0]);
        var_17 = ((-26892 ? ((255 + (arr_0 [i_0]))) : (((arr_3 [i_0]) ? var_11 : var_8))));
        arr_5 [i_0] = ((255 ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = ((((((arr_3 [i_1]) / var_5))) ? ((min((arr_1 [i_1]), (arr_2 [i_1])))) : (((arr_3 [i_1]) & (arr_2 [i_1])))));
        var_19 -= (((((((arr_0 [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1])))) ? var_14 : (157 >= var_14))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((var_11 / (arr_7 [i_2])));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_20 = 239;
                var_21 = ((78 ? var_8 : (arr_0 [i_1])));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_18 [9] [i_1] [i_2] [i_1] = (arr_7 [i_1]);
                    var_22 &= ((((((arr_8 [i_2] [i_4]) <= 32738))) <= 252));
                    var_23 = ((-((102 ? -111 : 1))));
                    arr_19 [i_4] [i_1] = (((((arr_11 [i_3] [i_3] [i_3 - 2] [i_3]) + 2147483647)) >> var_10));
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_24 = (((arr_23 [i_1] [i_5]) ? ((min((arr_23 [i_1] [i_1]), (arr_6 [i_1] [i_5])))) : (((arr_23 [i_1] [i_5]) >> (var_8 - 168)))));
            var_25 = (min(var_25, 242));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_27 [12] [i_6] |= var_11;
            var_26 = ((-((min(var_5, var_5)))));
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_27 = (min(var_27, (((var_10 ? var_9 : (~var_14))))));
                var_28 ^= 118;
                var_29 = (((arr_2 [i_8]) ? ((var_9 ? ((min(-1, (arr_28 [17])))) : (arr_31 [i_8]))) : var_13));
            }
        }
    }
    #pragma endscop
}
