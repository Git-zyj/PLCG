/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((var_8 | (arr_1 [i_0])))), (~var_6)));
        arr_3 [i_0] &= (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1 - 2] [i_1 - 2] = (-142906264 < -5166062779382651820);
        var_13 &= var_6;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = (~65535);
        var_14 = (max(var_14, (((((10010 ? 1 : 1)) | ((var_3 ? ((((arr_8 [i_2]) <= -3))) : (arr_9 [11] [11]))))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = -18292574165625526910;
        var_15 = (((((var_9 >= (arr_13 [i_3])))) + var_11));

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            arr_17 [i_4] = ((var_4 ? (1 | 1) : 1));
            var_16 = (min(var_16, (!-604220566)));
            var_17 = (max(var_17, (arr_16 [i_3])));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [20] = ((((1 ? 1 : 29725)) ^ ((var_9 ? (arr_15 [i_3]) : (!var_3)))));
            var_18 = (~var_12);
            arr_21 [i_5] [19] = (min(16082, -9634));
            arr_22 [20] = max((((!(((274877906912 & (arr_18 [14]))))))), var_0);
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_19 = (max(var_19, (((var_1 | ((min(var_5, 1))))))));
                var_20 += (arr_18 [9]);
            }
            var_21 = (min(var_21, (((((((-(arr_9 [i_3] [i_6 + 1]))) + 2147483647)) >> ((((-274877906913 ? 29725 : 0)) - 29719)))))));
            arr_27 [i_6] [i_6] [i_6] = ((29725 * (!var_8)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_22 = (min(var_22, -274877906930));
                        var_23 = arr_29 [i_3] [11] [20] [i_6];
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((var_10 ? ((1 ? -1456294087070121541 : var_9)) : ((((-274877906913 * 65535) ? 71 : var_4))))))));
    var_25 = (((274877906931 ? -29725 : 65531)));
    var_26 = (4301561536852789537 <= -274877906928);
    #pragma endscop
}
