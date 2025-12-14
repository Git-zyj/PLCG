/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? var_2 : -18265))) ? (arr_0 [i_0] [i_0]) : ((255 ? 11493353076732522792 : 1))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = var_9;
            arr_7 [i_1] = 2026166894;
        }
        var_19 = ((((1 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_5 [i_0 - 1] [8]))) * var_16));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (min(((max(var_8, var_4))), (var_12 / 61980)));
                        var_21 -= 1487344589;
                        arr_22 [i_2] = min(((+(min((arr_15 [i_5] [i_2] [i_2]), var_1)))), (((((-23480 ? 1 : (arr_16 [i_2] [i_3 + 1] [i_4] [i_2])))) ? 61980 : ((var_2 ? (arr_3 [1] [i_3 + 1] [i_4]) : 0)))));
                        arr_23 [1] [i_2] [2] [10] [i_2] [7] = (max((min((arr_19 [2] [i_3] [i_4] [2] [i_2]), 7985343423567636831)), (arr_8 [i_2])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = (((max((((arr_5 [i_2] [i_3 + 2]) ? var_2 : (arr_4 [1] [i_2]))), (arr_0 [i_6 + 2] [i_3 - 1]))) / (+-23510)));
                                var_23 += (((((-23480 ? 66 : -66))) ? 5618408540438573089 : var_13));
                                var_24 = (max(var_24, (arr_19 [6] [i_6 - 2] [i_4] [i_3 + 1] [i_2])));
                            }
                        }
                    }
                }
            }
        }
        var_25 += -102;
    }
    var_26 |= 400;
    #pragma endscop
}
