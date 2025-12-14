/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_5 >> (var_4 - 13522))))) ? 0 : ((var_2 ? (max(var_2, var_3)) : var_1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_12 += ((min((((arr_1 [i_0]) | var_3)), 12)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((max(var_8, var_8)) + (2147483635 * 26)));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_13 = (max(var_9, (((var_3 ? 5934269844384924672 : 20)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_14 = (0 * (!65));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_15 &= (((197 ? var_6 : 4294967289)));
                            var_16 |= var_0;
                            var_17 += ((~(((((arr_8 [i_5] [i_2] [i_3]) + 2147483647)) << (268435455 - 268435455)))));
                            var_18 |= (((((arr_8 [i_4] [i_4] [i_4]) + 2147483647)) >> (arr_13 [i_1] [i_2] [i_3] [i_4] [i_3] [i_4])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_2] = -var_1;
                            arr_19 [i_2] = (((((((max(var_9, 35))) + (223 - 7)))) ? ((max((arr_8 [i_2] [i_3] [i_2]), var_5))) : (((min(3036402646, (arr_12 [i_1] [i_2] [i_2] [i_4] [i_6]))) + -68))));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_2] = (min(72, -39));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_19 -= ((((((-1 && var_3) / (19 && 53)))) ? var_9 : (arr_15 [i_1] [i_1] [i_2 + 3] [i_3] [i_3] [i_4] [i_7])));
                            arr_24 [i_7] [i_2] [i_2 - 1] &= min(38, 47);
                        }
                        arr_25 [i_4] [i_3] [i_2] [i_1] [i_1] = (((((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]) ? var_6 : (arr_15 [i_2 + 1] [i_2] [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3] [i_2]))) << ((min((arr_15 [i_2] [i_2 + 3] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2] [i_2]), 20)))));
                    }
                }
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_20 = 1171175541;
                var_21 = var_10;
                var_22 = 122;
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_34 [i_10] [12] [i_1] |= var_4;
                            arr_35 [i_1] [i_9 + 1] [i_2] = ((((min(983943977, 1401843009))) ? 16156281927236338931 : var_2));
                            var_23 = (((((var_10 > var_9) == 7)) ? (((!(((-(arr_6 [i_2]))))))) : ((((max(40, 38))) ? var_3 : (193 | 1)))));
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    var_24 = 4121485990;

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_25 &= var_3;
                        var_26 = var_1;
                        var_27 = (min(((1 ? 5626645780505854100 : (arr_17 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_2] [i_11 + 1] [i_11]))), (arr_37 [i_2] [i_11] [i_11] [i_11 - 1])));
                    }
                }
            }
            var_28 += (((min(var_10, 38))));
        }
        arr_42 [i_1] |= -var_6;
    }
    #pragma endscop
}
