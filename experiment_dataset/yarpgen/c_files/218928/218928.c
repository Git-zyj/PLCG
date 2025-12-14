/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((((arr_9 [i_0 - 1] [i_0 - 1]) * 0)))));
                        var_14 = ((-16 % (arr_5 [i_0] [i_0 - 2] [i_0] [i_0])));
                        arr_11 [i_0] [i_1] [i_1] [i_1] |= ((!(arr_8 [i_2] [i_2 - 1])));
                    }
                }
            }
        }
        var_15 = (min(var_15, (0 < 1917495276)));
        arr_12 [i_0] = ((57660 ? 1 : 1));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_16 = (-2147483647 - 1);
        var_17 = (arr_5 [i_4 + 1] [i_4 + 2] [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_18 = (((((1 ? 30464 : 30464))) ? 54043 : -1734926258));
        var_19 = 63;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_20 = (min(var_20, ((max((((!((max((arr_9 [i_5] [i_5]), 41652)))))), (max(((min(22188, -35))), 35086)))))));
                            var_21 = (max((max(37572, (arr_3 [i_5] [i_6]))), var_8));
                            var_22 = (var_7 + ((max(((-37 ? (arr_3 [i_7] [i_6 + 2]) : 35072)), ((min(var_8, var_3)))))));
                            var_23 |= (+((min((arr_22 [i_9 + 1]), (arr_22 [i_9 - 1])))));
                            var_24 = ((-((((((arr_25 [9] [5]) ? -37 : 35))) ? (var_4 != var_10) : ((max(83, var_3)))))));
                        }
                        var_25 = (min(var_25, (((+(((arr_22 [i_5]) / (((arr_13 [i_5]) / 1)))))))));

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = 64424509440;
                            var_26 = var_11;
                            var_27 = (((arr_22 [1]) ? var_7 : (arr_22 [i_5])));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_28 = var_10;
                            arr_33 [i_11] [i_11] [i_11] [i_8] [i_11] [i_5] = ((3 ? var_10 : ((min(((-(arr_21 [i_5] [i_6 + 2] [i_5] [i_11]))), ((54043 << (37086 - 37084))))))));
                        }
                    }
                }
            }
        }
        var_29 ^= (min((max((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [3]), 64424509440)), (min(var_4, (arr_27 [i_5] [i_5] [4] [i_5] [i_5] [i_5])))));
    }
    var_30 = var_0;
    var_31 = (max(var_31, ((54043 ? -4684992851735971015 : (((min(119, -47))))))));
    var_32 = (((var_4 ? ((min(65531, var_6))) : var_9)));
    #pragma endscop
}
