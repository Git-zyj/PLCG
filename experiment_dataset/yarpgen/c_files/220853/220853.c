/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-9223372036854775807 - 1) >= 59442));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((-(arr_1 [5] [i_0]))), ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_13 = (((!9223372036854775807) ? (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 ^= ((!(arr_5 [14])));
        var_15 = (max(var_15, var_10));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = (min(((-(var_10 || 59442))), (((var_2 % 4) >> (var_9 - 775266116)))));
        var_17 = (min(var_17, 9223372036854775800));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_18 = (max(var_18, (((((arr_9 [i_3] [i_3]) == ((((arr_0 [i_3]) >= var_4)))))))));
        var_19 = 59442;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_20 = ((((16920 << (var_9 - 775266134)))) | ((17631159218477477181 ? (arr_6 [i_5]) : 9223372036854775800)));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_21 [i_3] [i_6] [i_5] = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (1179791 - 1179730)));
                            arr_22 [i_5] [i_7] = (arr_18 [i_7] [10] [i_5] [10] [i_4] [10] [10]);
                        }
                        arr_23 [i_5] [i_4] [i_5] [i_5] [i_5] = ((~(arr_7 [i_3])));
                    }
                }
            }
            var_21 = ((!(arr_10 [i_3])));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_8] = (arr_18 [i_3] [i_3] [7] [i_8] [7] [i_3] [i_3]);
            arr_27 [i_3] [i_8] = ((!((!(arr_0 [i_8])))));
        }
    }
    #pragma endscop
}
