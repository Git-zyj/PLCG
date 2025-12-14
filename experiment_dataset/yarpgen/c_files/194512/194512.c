/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_20 = (((((arr_13 [i_4] [i_3 - 1] [i_4]) % (arr_10 [i_0] [i_1 - 1] [i_3 - 2] [i_4 - 2]))) == (arr_11 [i_0] [i_1] [i_2] [i_3 - 2])));
                                arr_15 [i_0] [i_0] [i_4] [i_0] [i_0] = (((arr_11 [i_2] [i_1 - 1] [i_2] [i_2]) ? (0 == var_11) : ((((arr_3 [i_0]) <= -72)))));
                                arr_16 [i_2] [i_4] [i_2] [10] [i_4] = (var_2 == ((max((arr_9 [i_4] [i_4 - 2] [i_3] [i_1] [i_1] [19]), 15))));
                                var_21 = ((30242 ? (!18446744073709551615) : -1855680613));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_22 = (min(var_22, 1));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = (~0);
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 = ((min((arr_18 [i_3] [i_3] [i_1 + 1] [18] [i_1 - 1] [i_0]), (arr_21 [i_3 + 1] [i_2] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_0]))));
                                arr_23 [i_6] [11] [8] [i_2] [i_1 - 1] [i_0] = 18446744073709551601;
                                var_24 = ((var_0 >> (((arr_7 [i_0] [i_1] [i_3] [i_0]) + 122))));
                            }
                            var_25 ^= (!1);
                        }
                    }
                }
                var_26 = (min(var_26, (((((((90 ? var_6 : var_0)) ? var_18 : (arr_17 [i_1 + 1] [2] [i_0] [i_1] [i_0] [2]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_27 &= (((arr_20 [i_10] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_8]) & var_5));
                        var_28 = var_7;
                    }
                    var_29 = arr_3 [i_7 - 3];
                    var_30 = 120;
                }
            }
        }
    }
    #pragma endscop
}
