/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 -= (arr_2 [i_0] [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_19 = ((97 ? -98 : (-2147483647 - 1)));
                var_20 = (max(var_20, ((((arr_0 [i_2] [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_0 [i_1] [i_1]))))));
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((var_7 ? (arr_5 [i_1] [i_1] [i_1]) : (!17650737915130960940)));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_21 = ((((!(arr_5 [i_0] [i_3] [i_1]))) ? var_11 : ((var_8 ? (arr_10 [i_3] [i_3] [i_1] [i_0]) : 1444552575))));
                var_22 = ((((((arr_5 [i_0] [i_1] [i_3]) ? var_8 : -98))) ? (((18446744073709551615 ? -1 : 0))) : ((var_0 ? var_0 : -111))));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_23 = ((-15626 ? ((var_12 ? (arr_3 [i_4]) : (arr_3 [i_0]))) : (arr_4 [i_4] [i_1] [i_0] [i_0])));
                var_24 = (max(var_24, ((((!var_14) ? (((var_6 ? var_17 : 32744))) : (arr_14 [i_4] [i_1] [i_4]))))));
            }
            var_25 += var_7;
        }
        arr_15 [i_0] [i_0] &= (max(1, (!var_13)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [i_5] = (arr_16 [i_5]);
        var_26 = (arr_17 [i_5] [i_5]);
        var_27 += (((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_17 [i_5] [i_5])));
        var_28 = ((var_9 ^ (arr_16 [i_5])));
    }
    var_29 = -var_4;
    #pragma endscop
}
