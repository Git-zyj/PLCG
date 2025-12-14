/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (arr_0 [i_0]);
        arr_3 [i_0] = max(1, (1 / 1));
        var_16 = ((((((arr_1 [i_0] [i_0]) >> (((arr_0 [i_0 - 1]) - 6298920709643947747)))) / (-106 && var_11))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((((((!((min(var_3, var_14))))))) / ((var_13 + (arr_1 [i_1 + 2] [i_0 - 1])))));
            arr_7 [i_0 - 1] [11] = (!((min((arr_0 [i_1 + 2]), (arr_0 [i_1 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [1] [15] = ((var_0 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (1 >= var_7)));
            arr_11 [i_0] = (!1);
            var_17 *= var_4;
            arr_12 [i_2] [i_2] [i_2] = (1 >= 1);
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0 - 1] [i_0 - 1] = var_11;
            arr_16 [i_3] [i_0] = (1 + 1552618483);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_18 = (min(var_18, (arr_17 [i_4] [i_4])));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] [i_4] [i_6] [i_4] [i_4] = (var_7 >= -15652);
                            arr_32 [i_4] [i_5] [9] [i_4] [i_8] = 242;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_19 = (min(var_19, (arr_33 [i_9 - 1] [i_9 - 1] [i_10 + 2] [1])));
                        var_20 = (max(var_20, (((1552618483 ? ((18160944701753807248 ? var_1 : (arr_1 [i_4] [i_9 - 1]))) : var_9)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
