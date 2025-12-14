/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min((min(5775321119192904041, var_4)), var_6)), var_8));
    var_20 = ((var_6 ? 24 : var_16));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!20802);
        arr_4 [i_0] [i_0] = ((~(min(18842, var_13))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 -= (min(((20802 ? (arr_1 [i_0] [i_0]) : (arr_2 [10]))), ((min((arr_2 [2]), (arr_2 [6]))))));
            arr_8 [i_0] [1] [i_0] = (min((min(((-(arr_0 [i_0] [i_0]))), 20802)), (arr_6 [i_0] [i_0] [1])));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_22 *= (arr_5 [i_2 - 2] [1] [i_2 - 1]);
            var_23 = (min(var_23, var_4));
            arr_12 [i_0] [i_0] [i_0] = ((-(max(-1270072321, -var_16))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_24 = (((((-(arr_1 [i_2 - 3] [i_2 - 3])))) ? (max(var_9, (~19428))) : -1610));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_25 = (max((~var_17), var_18));
                            arr_23 [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3] = -var_6;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_26 = (max((arr_9 [i_0] [i_2] [i_3]), (arr_20 [i_0])));
                            arr_27 [i_0] = (max((arr_11 [i_2 - 2] [i_2 + 1]), var_5));
                            arr_28 [i_0] [i_2 - 1] [i_3] [i_0] [i_0] = 1;
                            var_27 = ((-(min((min(var_16, 30606)), (arr_15 [i_2] [i_0] [i_2])))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_2] [i_0] [9] = var_5;
                            arr_32 [i_0] [i_2] [16] [i_4] [i_0] = 59390;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [5] = ((1610 ? (~51) : (arr_11 [i_4] [i_3])));
                            arr_37 [i_0] [i_2] [i_2] [i_2] [i_0] [i_8] = var_12;
                        }
                    }
                }
            }
            arr_38 [i_0] [i_2] = (((!(arr_22 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [i_0]))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_41 [i_0] [i_0] = (arr_20 [i_0]);
            var_28 &= (arr_24 [i_0] [i_0] [i_0] [0]);
            var_29 = arr_1 [i_9 - 1] [i_9 + 1];
        }
    }
    var_30 = var_16;
    var_31 = var_0;
    #pragma endscop
}
