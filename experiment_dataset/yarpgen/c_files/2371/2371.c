/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = (((arr_7 [i_0] [i_4 - 1]) % (((arr_11 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 + 1]) ? (arr_11 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [i_4 + 1] [4] [i_4]) : (arr_11 [10] [10] [i_4 + 2] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1])))));
                                var_11 = ((((((var_4 ? 10998457376387798086 : (arr_0 [i_0]))) * var_2)) * var_0));
                                var_12 = var_0;
                                var_13 = ((((((((!(arr_11 [i_4 + 1] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0])))) >> (((min(var_2, var_2)) + 8566996737687736810))))) < (max(((var_9 ? var_9 : var_8)), 241))));
                            }
                        }
                    }
                }
                var_14 = ((((!((min((arr_10 [i_1]), (arr_7 [i_0] [16])))))) || var_3));
                var_15 = (arr_9 [i_0] [i_1] [i_1]);
                var_16 = (((((((var_8 ? var_6 : var_1))) ? (min(var_1, (arr_6 [i_1] [i_0] [i_0] [i_1]))) : (arr_0 [i_0]))) % (((min((12880251766438336575 && 5425155271929839056), (arr_5 [i_0] [i_1] [i_0])))))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_17 = ((~(((((var_9 ? var_7 : (arr_1 [i_7])))) ? (((arr_20 [i_5]) / var_8)) : var_3))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_18 ^= var_3;
                            var_19 = (arr_1 [i_7]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, var_2));
                            var_21 = ((-8553826853023141435 ? 5737178872771721887 : 7448286697321753540));
                            var_22 = ((var_6 ? var_9 : (arr_19 [i_7 + 3] [i_6 - 1] [i_6 - 1])));
                        }
                        var_23 = (max(var_23, ((min(((~(min(0, var_1)))), (((((min((arr_30 [2] [i_6] [4]), var_4))) ? (!var_3) : (0 & -38)))))))));
                    }
                }
            }
        }
        var_24 = (max(var_24, ((max((max(((var_2 ? (arr_5 [i_5] [i_5] [i_5]) : var_2)), ((((arr_21 [i_5] [0]) & var_7))))), var_7)))));
        var_25 = (var_8 % var_4);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_26 = (arr_12 [i_14] [i_14] [i_11] [i_11] [i_12] [i_12 - 2]);

                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            var_27 |= (arr_8 [i_12 + 1] [i_12] [18] [0]);
                            var_28 = (arr_42 [i_11] [i_11] [i_13] [i_11]);
                            var_29 = (!(arr_45 [i_11]));
                            var_30 = (var_2 ? (arr_4 [i_11] [i_11]) : ((var_1 << (var_4 - 82))));
                        }
                    }
                }
            }
        }
        var_31 = (max(var_31, ((((arr_10 [i_11]) >> var_3)))));
        var_32 = var_6;
    }
    #pragma endscop
}
