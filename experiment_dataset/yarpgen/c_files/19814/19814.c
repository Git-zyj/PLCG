/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((var_4 ? 1 : ((-6836 ? 29924 : 1))))));
    var_15 = var_9;
    var_16 = 13193;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0 + 3]) : (((min(1, 1))))))) ? (arr_1 [i_0]) : ((-17885 ? -5674721864530367300 : -1531428611))));
        var_17 = ((~((var_0 * (arr_0 [i_0])))));
        var_18 ^= ((((min(1, -2025026570630558474)) == 1)));
        arr_3 [i_0] = (((arr_0 [i_0]) << ((((var_7 ? var_11 : (arr_0 [i_0]))) - 5840))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-949388377 ? -19769 : 1));
        var_19 = (~12);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 = ((!(arr_8 [i_4 + 1])));
                        var_21 = var_9;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 = (arr_16 [i_1] [i_1]);

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (((~-24311) | (12772022209179184307 ^ 37883)));

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_24 = ((-((var_7 ? (arr_17 [i_5] [i_5] [i_5]) : var_8))));
                            arr_24 [i_7] [i_1] [i_1] = (1 - var_1);
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_25 = (arr_14 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1]);
                            arr_27 [i_1] [i_5] [i_1] [i_7] [i_1] [i_5] = 6675726478755483779;
                            var_26 = 21081;
                        }
                        var_27 = ((((44654 == (arr_18 [i_1]))) ? 81 : (arr_5 [i_6 - 1] [i_6 - 1])));
                    }
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        var_28 = (min(var_28, (~17770737815587977522)));
                        arr_31 [i_1] [i_5] [i_10] [i_1] [i_10] [i_10] = 1;
                    }
                }
            }
        }
    }
    var_29 = var_4;
    #pragma endscop
}
