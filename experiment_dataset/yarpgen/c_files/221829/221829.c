/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -32763;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = 3846119633;

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 8;i_3 += 1)
                {
                    {
                        var_14 = (arr_4 [i_3]);

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_15 = -var_3;
                            var_16 |= (((arr_5 [i_0 - 1] [i_1]) & ((var_10 ? -115 : -115))));
                        }
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_17 = var_2;
                            arr_14 [i_5] [i_0 + 2] [i_0 + 1] [i_3] = ((2833224959 ? (var_11 + 59460) : -126));
                            arr_15 [i_0] [i_0] [i_2] [i_5] [i_2] = ((!((((arr_7 [i_0]) + 1)))));
                            arr_16 [1] [i_1] [i_2] [i_0] |= (var_9 ? -1 : (1 != var_6));
                        }
                        arr_17 [i_0] [i_0] [i_2] [i_1] [i_3] = (64 / var_7);
                        arr_18 [7] [7] [i_2] [i_3] [i_0] = ((var_0 ? (arr_12 [i_2] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_2] [i_0 + 1]) : var_7));
                        var_18 = (((-(arr_3 [i_0] [i_0] [0]))));
                    }
                }
            }
            arr_19 [i_0] [i_0] [i_1] = (((arr_13 [i_0] [i_1] [4] [i_1 + 1] [i_0]) ? var_7 : (arr_0 [i_0])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 = var_9;
            var_20 = (((var_10 + 2147483647) << ((((arr_7 [1]) > 6227)))));
        }
        arr_22 [3] = ((((((arr_10 [4] [4] [i_0] [i_0 - 1] [i_0]) ? var_5 : (arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1])))) ? (arr_0 [i_0 - 1]) : (((var_4 || (arr_0 [i_0]))))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_21 = var_10;
            arr_26 [i_0] [i_0] = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [2]);
        }
    }
    var_22 = ((min((max(114, var_7)), var_7)) - (var_4 >= var_2));
    #pragma endscop
}
