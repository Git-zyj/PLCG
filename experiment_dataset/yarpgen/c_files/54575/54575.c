/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [8] &= (min(1, ((((arr_3 [i_0] [5]) || 0)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_13 *= ((((1 ? (-2147483647 - 1) : var_8)) <= (1 < 6)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = ((-(1 % 52558)));
                            var_15 = 26052;
                            var_16 = ((!(((var_12 ? var_8 : 52566)))));
                            var_17 = ((arr_8 [i_0] [i_1] [i_1 + 1]) ? var_9 : (arr_12 [7] [i_3] [i_3] [i_4]));
                            var_18 = (min(var_18, -52562));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_19 = ((208 / (arr_1 [i_1 + 1] [i_1 + 1])));
                    arr_19 [i_0] [i_5] = -var_0;
                }
                var_20 = (min(var_20, var_0));
            }
            var_21 = (max(var_21, -16708850495240475430));
        }
        var_22 = (max(var_22, var_9));
        var_23 = var_12;
        var_24 = (((min(16708850495240475416, 1))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((((!((((arr_23 [i_6] [i_6]) ? var_11 : var_7))))) ? -29779 : ((max(var_6, 1)))));
        var_25 = var_9;
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        var_26 = (((((arr_23 [i_7 - 2] [i_7 + 1]) / 162)) % ((max((arr_20 [i_7 - 2] [10]), var_5)))));
        arr_28 [i_7 - 3] = -24784;
    }
    var_27 = ((((min(var_5, (min(7059, 26052))))) ? ((var_11 ? var_7 : 57873)) : ((-((661019912 ? 39484 : -44))))));
    var_28 ^= var_11;

    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        var_29 = 36728;
        var_30 = 22618;
    }
    #pragma endscop
}
