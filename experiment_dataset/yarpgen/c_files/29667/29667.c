/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -73;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = 3217023563592858584;
        var_20 = -var_17;
        var_21 = (min(var_21, (((15229720510116693026 ? (arr_1 [i_0]) : 87)))));
        arr_3 [i_0] [i_0] = 683224513303391601;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 &= 11974906298940698095;
            arr_6 [i_1] = 4098975655617803673;
            var_23 = var_7;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_24 = 3217023563592858590;
            arr_11 [i_0] [i_2] [i_2] = -3217023563592858603;

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_25 = (min(var_25, var_0));
                var_26 = (max(var_26, ((((arr_12 [i_0] [i_0] [i_3]) ? (arr_13 [i_0] [i_2] [i_0] [i_3 + 4]) : 10915633453622859362)))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_27 -= 10542;
                arr_18 [i_2] = 7531110620086692260;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_24 [1] &= ((-79 ? (arr_2 [i_5]) : (arr_17 [i_2] [i_5] [i_6])));
                            var_28 ^= ((-(arr_1 [i_4])));
                        }
                    }
                }
                var_29 = ((((arr_21 [i_2] [i_2]) && var_9)) ? (var_15 + 5968797796343574376) : (10915633453622859362 & var_0));
                arr_25 [i_4] [i_2] [i_2] [i_0] = 1;
            }
            var_30 = ((!(arr_14 [i_0] [i_0] [9] [i_0])));
            arr_26 [i_2] = 68;
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_31 = -var_1;
        var_32 *= 30835;
        var_33 = max(3217023563592858590, 1);
        var_34 = (-1099511627776 % (-9223372036854775807 - 1));
        var_35 = (min(var_35, (arr_10 [1])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_36 -= (((~var_11) <= ((((arr_1 [i_8]) ? 1 : (arr_10 [1]))))));
        var_37 = var_17;
        var_38 = var_5;
        var_39 = ((arr_17 [i_8] [i_8] [i_8]) != (arr_28 [i_8]));
    }
    #pragma endscop
}
