/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, 4294967295));
        var_12 = (min(var_12, (4719 == 22)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = 1;
            var_14 = ((239 ? 17907 : (arr_1 [i_2])));
            arr_8 [i_1] [i_2] = (var_7 > 3164967028);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_7));
            arr_11 [i_3] = (arr_10 [i_3]);
            var_16 = ((var_3 ? 37864 : (var_5 / 2802544590)));
            arr_12 [i_3] [i_3] [i_3] = (((arr_5 [i_1] [1]) ? 79 : 16383));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = (((3783420666 ? var_5 : var_1)));
                arr_15 [i_3] [i_3] [i_4] = (arr_2 [i_1] [i_1]);
                var_18 = (((((1 ? 0 : 1))) ? (var_8 * -105) : (1 << 1)));
            }
        }
        arr_16 [i_1] = 0;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_19 = var_3;
        arr_21 [i_5] = (((((arr_17 [i_5]) ? (arr_19 [i_5]) : (arr_17 [i_5]))) % var_8));
        var_20 = var_7;
        arr_22 [18] |= (((((!var_9) ? var_8 : (arr_18 [16]))) != (var_5 == 16431)));
        var_21 = (((((1671063575446083634 ? ((2235152230859579821 ? var_10 : 7135841381679545185)) : ((((arr_17 [i_5]) + 127)))))) ? (arr_19 [i_5]) : ((min(0, var_10)))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_22 = (max(3221225472, 12100));
        arr_26 [i_6] = (arr_24 [i_6]);
        var_23 = ((((49105 & (arr_19 [i_6]))) % ((((arr_18 [6]) >= 1343979536)))));
        var_24 += (min((arr_20 [1]), (0 % 82)));
    }
    var_25 = (max(var_25, var_8));
    #pragma endscop
}
