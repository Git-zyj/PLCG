/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min((min(3171926583, (arr_1 [i_0 + 1]))), (((~(arr_1 [i_0 + 1])))));
        var_18 = -1123040712;
        var_19 = 3171926583;
        var_20 -= ((((((3171926584 && (arr_0 [i_0 + 1]))))) ^ 1123040706));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = (~3171926588);
        var_22 = (max(var_22, 3171926585));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (max((arr_7 [i_2]), (((!(arr_4 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, (((((-(max(1123040712, 127)))) <= (min(3171926583, (max(1123040716, 1123040724)))))))));

                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_24 |= (min((arr_13 [i_2 - 2] [i_3] [i_5]), (((arr_13 [i_4] [i_5 - 3] [i_2 - 1]) | 793536906))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_20 [i_5] [i_3] [i_4] [i_5] [i_6] [5] = (min((min((arr_16 [i_2 + 1]), (max(3171926583, (arr_6 [i_5 + 4]))))), (max((arr_10 [i_2 + 1]), 3171926584))));
                            arr_21 [i_6] [i_5] = (min((((((!(arr_11 [i_4])))))), 3171926584));
                            var_25 = (~118);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = (+-1123040705);
                            var_26 += ((!(~1123040705)));
                        }
                        var_27 = ((~(((!(~1123040712))))));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_28 [i_5] [19] [i_4] [1] [i_8] = -10758;
                            var_28 = (min(var_28, (((!(max((!3171926590), (0 || 33554176))))))));
                            var_29 = -10758;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_30 = (min(var_30, (((~(min(0, -33554153)))))));
                            arr_32 [i_5] [i_3] = ((1123040712 % (((max((arr_31 [i_2 + 1] [i_5] [i_5 + 3] [i_5] [i_5 - 1] [i_5] [i_5]), (arr_22 [i_2 + 1] [9] [i_5 + 3] [i_9] [i_9] [i_5])))))));
                            var_31 = (max(-33554153, (min((arr_30 [i_5] [i_5] [i_5]), (arr_24 [i_5] [i_5 + 4] [i_4] [i_2] [i_5])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            arr_35 [i_5] [i_10] [i_10] [9] [i_10] [i_10] = 1123040719;
                            arr_36 [i_2] [i_5] [i_5] [i_4] [i_3] [i_5] [i_2] = (!-256);
                        }
                    }
                    for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_32 = (~3171926570);

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_33 += (~18446744073709551615);
                            arr_44 [i_2] [i_3] [i_3] [i_4] [i_3] [i_11 + 2] [i_12] = 15;
                            var_34 = (max((max(((min(1123040719, 3171926584))), (min(127, (arr_14 [8] [6]))))), ((min(-32718, (~-9223372036854775806))))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_35 = (min(var_35, ((min(((min(-33554186, 0))), ((min((~3171926555), 1123040704))))))));
                            var_36 += (arr_5 [i_4]);
                            arr_49 [i_4] [i_4] [i_13] [i_11] [i_11] = (arr_16 [i_2]);
                            arr_50 [6] [i_13] [14] [i_4] [i_11] [i_13] = -10749;
                            var_37 = -33554198;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_38 = (min(var_38, (arr_8 [i_2 + 1] [i_2 - 2])));
                            arr_54 [i_4] [i_11] [i_14] = 247;
                        }
                    }
                }
            }
        }
    }
    var_39 = (min(var_39, var_8));
    var_40 += var_4;
    #pragma endscop
}
