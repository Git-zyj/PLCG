/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min(var_15, -8710310966272821421));
                var_16 ^= ((((((arr_0 [1]) <= var_2))) >= var_14));
            }
        }
    }

    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_17 = var_4;
        var_18 = (min((((-(max((arr_1 [i_2]), var_4))))), ((var_5 ^ (!var_6)))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_8 [i_3] [i_3] &= (((~(arr_3 [i_3] [i_3]))) % (arr_3 [i_3] [i_3]));

        /* vectorizable */
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        var_19 ^= 0;
                        var_20 = ((-(arr_10 [i_3] [i_3] [i_3])));
                    }
                }
            }

            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                var_21 |= var_14;
                arr_17 [i_3] [i_4] [i_3] = -8710310966272821421;
                var_22 -= (~(arr_9 [i_3] [i_7 - 2]));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_23 += ((-760793916 ? (var_11 && var_12) : (~-8710310966272821421)));
                            var_24 = (62035 % var_2);
                            var_25 = ((arr_0 [i_4 - 1]) <= var_9);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_26 = var_13;
                    var_27 = var_6;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_28 ^= (((arr_28 [i_3] [i_4 + 1] [i_8] [i_4 + 1] [i_4] [i_8]) ^ (arr_18 [i_4 + 2])));
                    arr_31 [1] [i_4 - 1] [i_8] [i_4] = (~7070522050917994163);
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, (((!(arr_30 [i_13] [i_13] [i_8] [i_4] [i_3]))))));
                    arr_35 [i_4] = arr_10 [i_3] [i_3] [i_13];
                }
            }
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_30 = (arr_42 [i_14]);
                            arr_46 [i_16] [i_16] &= var_9;
                        }
                    }
                }
            }
            var_31 = (((min(((var_2 ? (arr_41 [i_14] [i_3]) : (arr_38 [i_14] [i_14] [i_3] [i_3]))), (((arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) - 160664001)))) <= (((((((arr_40 [i_3] [i_14]) ^ 6767839755329693154))) && (arr_40 [i_3] [i_14]))))));
            var_32 = (((~var_7) | 7714476467956840440));
            var_33 = ((((~(arr_23 [i_3]))) == 62056));
        }
    }
    var_34 -= var_4;
    var_35 = 1;
    #pragma endscop
}
