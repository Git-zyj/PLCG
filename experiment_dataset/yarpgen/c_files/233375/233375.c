/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-1);
    var_14 = var_10;
    var_15 *= var_5;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((min(0, -9))) ? (!var_11) : (min(26, (min(var_0, (arr_2 [i_0])))))));
        var_17 = ((-29 ? (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 2]) : 1)) : (!var_5)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_18 *= (((min((arr_3 [i_1 + 3]), var_3))) >= ((((arr_4 [i_1 + 3]) <= (arr_3 [i_1])))));
        var_19 = max(1, (8399009894575532917 % 67));
        var_20 = (min(((1 ? var_7 : (arr_4 [i_1 + 2]))), ((max(1, 1)))));
        arr_5 [1] [18] = (((arr_4 [i_1]) & (min(16380, -8399009894575532917))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_21 ^= (var_6 >= 0);
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        arr_15 [i_2] [0] [1] [i_2] = var_4;
                        var_22 = var_9;
                        var_23 = ((var_3 ? 484393133 : var_1));
                        arr_16 [i_2] [i_3] [i_4] [i_2 + 2] [i_2] = var_2;
                    }
                    var_24 = (var_4 >= ((min((arr_14 [i_4 - 1] [i_2 + 2] [i_4 - 1]), -20))));
                    var_25 = (min(var_7, (arr_4 [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                {
                    var_26 = (min(var_26, ((!(((((max(var_4, (arr_4 [i_7])))) ? (28 | 1) : var_6)))))));
                    var_27 = -var_6;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_7] [i_7] [i_7] = -339484067;
                                var_28 = (arr_14 [i_7] [i_8] [i_9]);
                                var_29 *= (arr_6 [4]);
                                var_30 = (arr_27 [i_2] [i_2] [i_2] [i_2] [i_2 + 1]);
                            }
                        }
                    }
                    var_31 = 0;
                }
            }
        }
    }
    var_32 |= -1;
    #pragma endscop
}
