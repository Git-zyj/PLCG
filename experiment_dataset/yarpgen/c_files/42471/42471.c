/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [23] = (max(var_14, var_13));
        arr_3 [i_0] [14] = -4029612305;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 += -var_6;
        var_17 = (max(var_13, var_0));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_1] [i_3] [i_3] = var_9;
                    arr_11 [i_1] [i_3] [i_1] [i_1] = var_14;
                }
            }
        }
        arr_12 [i_1] [i_1] = -var_1;
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        arr_17 [3] = (max((!var_7), ((~(max(0, var_2))))));
        var_18 = ((!(((var_9 & 1) > var_5))));
    }
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_20 *= (min(((255 | (var_9 % var_4))), 255));
                        var_21 = (min(var_21, ((min(((-(0 > 0))), var_10)))));
                        var_22 -= (!0);
                        arr_30 [i_5] [4] [i_6] = (~22);
                        arr_31 [i_5] [i_5] = 1;
                    }
                    arr_32 [i_5] [i_6] [i_5] = ((255 + ((~(var_5 ^ 0)))));
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_41 [i_5] [3] [4] [3] = 0;
                        arr_42 [i_5] [i_6] [i_5] [i_5] = ((((((1156624914 % var_12) * (!var_1)))) > var_13));
                        var_23 = (max((((49 > (115 == 1156624914)))), var_6));

                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_24 = (min(var_24, ((((!var_6) || ((max(127, var_14))))))));
                            var_25 -= ((min((var_12 >= var_6), (!var_2))));
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_26 = (max(((((max(-13376, var_14))) % (((var_5 + 2147483647) << (((var_8 + 914296116098446702) - 25)))))), var_3));
                            var_27 = (2147483616 ^ 0);
                        }
                    }
                    arr_49 [1] [1] [i_5] = (2097151 / 255);
                    arr_50 [i_5] [10] [i_9] [i_5] = (min(var_2, (max(-2, 0))));
                    arr_51 [i_6] [i_5] [i_9 + 3] = (~(min(-1, var_0)));
                }
                var_28 *= var_7;
                var_29 = 111750904;
            }
        }
    }
    var_30 = var_10;
    #pragma endscop
}
