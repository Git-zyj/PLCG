/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (143951523109241104 * 18302792550600310511);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = var_7;
        var_11 = 131071;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {
                    arr_16 [i_2] = ((var_8 ? var_8 : (~42240)));
                    arr_17 [i_3] [i_1] = (max((((((24158 ? 18302792550600310511 : 143951523109241098))) ? (min(18302792550600310511, 18302792550600310511)) : 143951523109241104)), ((max((~var_1), ((min(var_3, var_4))))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_12 = 143951523109241105;
        var_13 *= (((max((arr_14 [i_4] [i_4]), 42240)) == (!32767)));
        var_14 = (max((arr_14 [i_4] [i_4]), (max(18302792550600310501, var_7))));
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_15 = ((!((min(var_5, (arr_22 [i_5] [i_5]))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_16 = ((~(arr_20 [i_5 + 2] [i_6 + 1])));
                var_17 = var_6;
                var_18 = (((1 ? 143951523109241105 : 97)));
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_19 = (max(var_19, 10964547446930771935));

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_20 = (min((max((((!(arr_28 [i_5] [i_8] [i_9])))), var_3)), var_3));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_21 = ((-(max((max((arr_35 [i_5] [i_10]), 143951523109241107)), (min(143951523109241108, 3854255883975637390))))));
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_4 ? var_9 : ((((var_7 ? var_0 : var_3))))));
                            arr_41 [i_5] [i_8] [i_8] [i_10] [i_10] [i_11] [i_10] = ((143951523109241111 / ((((max(-7474, -33)))))));
                            var_22 = (var_4 ? var_2 : (((max(var_0, (-127 - 1))))));
                        }
                    }
                }
            }
            arr_42 [i_5] [i_5] [i_5] = ((max((arr_34 [i_5 - 1]), var_5)));
        }
        var_23 |= (min((var_5 % var_7), ((max((arr_23 [i_5] [i_5] [i_5 + 1]), 0)))));
        arr_43 [i_5] &= ((((max((arr_37 [i_5] [i_5] [i_5] [i_5]), (-1 - var_1)))) ? -1 : (arr_25 [i_5] [i_5])));
    }
    #pragma endscop
}
