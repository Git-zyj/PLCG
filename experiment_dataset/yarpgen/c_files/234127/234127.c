/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (((((max(127, var_15)))) + var_12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = (182174444 > -113);
                var_21 = (min(var_21, 40856));
                var_22 ^= (((arr_7 [i_2 + 1]) == ((-127 ? (((var_0 + 2147483647) << (((var_18 + 69) - 21)))) : 297348454))));
                var_23 += (~var_17);
            }
            arr_10 [i_0] [i_0] = (max((arr_5 [i_1] [i_0] [i_0]), ((((arr_5 [i_0] [i_0] [i_0]) && var_1)))));
            var_24 ^= ((((((~14403962451283136643) <= (~-127)))) << (((arr_6 [i_0]) - 6253379214327950886))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_25 = ((arr_12 [i_0] [i_0] [i_3]) ? (arr_11 [i_0] [i_0]) : 18153);

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_26 = var_11;
                var_27 = (((arr_6 [i_3]) ? (arr_6 [i_0]) : var_3));
                var_28 *= -127;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_29 = (((-22 + 2147483647) << (127 - 127)));
            var_30 = -182174444;
        }
        var_31 += 1;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [10] = var_10;
        arr_22 [i_6] &= (((-1814093349 / -127) / -13284375715217129329));
        var_32 = var_1;
        var_33 = (~-127);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_34 = (max((arr_18 [i_7]), (-127 - 0)));
        var_35 = (((((~(((arr_23 [i_7]) & (arr_3 [i_7] [i_7])))))) ? -80 : 127));
    }
    #pragma endscop
}
