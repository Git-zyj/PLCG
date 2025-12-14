/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_2;

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_17 += 12;
            var_18 = (min(var_18, -1));
            arr_5 [i_1] [i_1] = (1 ? 15994937941621014154 : (1 == -2));

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_1] = 10;

                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_19 = (0 & var_0);
                    arr_12 [9] [i_1] [i_2 + 2] [7] = var_11;
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_1] [i_1] = ((-2 ? 720633938 : (4001508671 >> 13)));
                    var_20 = var_2;
                    var_21 = (((((268435455 ? 21118 : 41))) ? (-75 == var_12) : 1));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_22 |= ((293458625 ? (~var_5) : 4001508675));
                        var_23 = 17;
                    }
                    var_24 = (5 && 2);
                }
            }
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_25 *= ((var_5 ? (2 ^ 0) : (1 >= -2)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_26 = 11878;
                        var_27 -= 1;
                        var_28 += (((~4672347662918233790) & (((1 ? 3894782096 : -19)))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_29 = (275627863821256588 && 1);
            var_30 = (~var_14);
            var_31 = (min(var_31, (((3894782107 ? (~119) : 1)))));
            arr_31 [i_0] [i_10] [i_0] = (41 > var_14);
            var_32 = (!47);
        }
        arr_32 [2] = -1;
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 14;i_11 += 1)
    {
        var_33 -= (1 > var_3);
        arr_35 [i_11] = (((1 > 1) > 64482));
    }

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_34 = (~10879);
        var_35 *= (1 == var_10);

        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            var_36 = (min(400185206, ((min(-1, 1)))));
            var_37 = ((1 ? ((max(((0 ? var_1 : var_5)), 1))) : (min((~4294967271), 3894782096))));
            arr_40 [i_13] [i_13 - 1] = ((((var_3 & 1) ? -119 : (-31 > 1))));
            arr_41 [i_13] [i_13] = var_15;
        }
        var_38 = (min(var_38, (((((!(143 > -2))) ? -103 : 524287)))));
        var_39 -= -51;
    }
    var_40 ^= (255 ? var_7 : (((-720633948 ? -10 : 4294967277))));
    var_41 = (min(var_41, (var_1 > var_14)));
    #pragma endscop
}
