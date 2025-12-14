/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((arr_5 [i_0] [i_1 - 1] [i_1 - 1]) ^ -27054)))));
                arr_6 [i_0] [i_0] [8] = ((~(~-27054)));
            }
        }
    }
    var_14 = (min(var_14, var_6));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 |= ((-((207 ? 239 : ((max((arr_2 [4]), (arr_5 [i_2] [i_2] [i_2]))))))));
        var_16 = (min(var_16, var_3));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_4] [i_4] [i_5] = var_5;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, ((((((!(arr_10 [i_2] [i_3])))))))));
                            var_18 += ((((min(var_0, var_3) * (!var_0)))));
                            arr_21 [1] [i_3] [i_3] [i_5 + 1] [i_6] [i_6] = ((((((arr_18 [i_3] [i_5] [i_5 + 1] [i_5] [i_5 - 2] [i_5]) - (arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5 + 1])))) ? var_0 : ((((arr_18 [i_2] [i_4] [i_5] [i_5] [i_5 - 2] [i_5]) + (arr_18 [i_4] [0] [i_5] [i_5 - 4] [i_5 - 2] [i_5 - 2]))))));
                            arr_22 [i_3] [i_3] = ((((max(var_0, ((min(28942, 131)))))) ? (arr_7 [i_2]) : -3600149548543129060));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_19 = ((-((-(arr_18 [i_2] [i_3] [i_4] [i_5] [i_7] [i_3])))));
                            var_20 = (min(var_20, ((((arr_7 [i_2]) ? ((var_0 ? (arr_23 [i_2] [i_5] [i_2] [i_5 - 4] [i_7] [i_7] [i_3]) : 13157291507096334210)) : (arr_18 [i_5 - 1] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5] [i_5 - 1]))))));
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_2] |= (((arr_0 [i_5 - 2]) ? var_6 : (((((arr_1 [i_2]) != 225))))));
                            arr_26 [i_2] [i_3] [i_3] = ((((-(arr_0 [i_7]))) != var_3));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_2] [i_3] [i_4] [i_4] [i_5 + 1] [i_8] = ((0 ? var_5 : var_9));
                            arr_31 [i_2] [i_2] [i_5] [i_3] = ((((240 % (arr_18 [i_8] [6] [i_4] [i_4] [i_8] [i_8]))) == (arr_28 [i_5 - 4] [i_5 - 4] [i_4] [i_3] [1] [i_8] [i_2])));
                        }
                        var_21 = (((var_11 - var_7) || (arr_23 [i_5 - 2] [i_3] [2] [i_5 - 1] [i_5] [i_5 + 1] [i_5])));
                    }
                }
            }
        }
    }
    var_22 = var_6;
    var_23 -= (min(var_0, var_7));
    #pragma endscop
}
