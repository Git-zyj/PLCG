/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (min(var_2, ((~(~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((6546428004815070523 ? ((((arr_5 [i_0] [i_0]) << (6546428004815070523 - 6546428004815070510)))) : 1513559061));
                    var_15 = (arr_0 [i_0]);

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 *= ((4044018081 ? (~var_9) : (max((arr_1 [i_1] [i_2]), (min(4294967269, -14406))))));
                        var_17 = (((((((22233 << (-6142827847346970650 + 6142827847346970666)))) || (~var_5))) ? ((~(min(1, 1589160723)))) : (((-(arr_2 [i_1 + 3] [i_1 + 3] [i_3 - 1]))))));
                        arr_9 [22] [i_2] [i_2] [i_1] [22] &= ((~(min(1513559061, 1513559063))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_1] = 1151250803;
                        arr_14 [i_1] [i_1] [i_1] [i_4 + 1] = 2781408234;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_18 = ((-(arr_10 [i_1 - 1] [i_1 - 1])));
                            var_19 -= (((arr_2 [i_0] [i_1 + 1] [i_1 + 1]) == (arr_2 [i_0] [i_1] [i_1 - 1])));
                            arr_17 [12] [i_1] [12] [i_4 + 1] [i_5] &= ((var_11 ? (arr_10 [i_1 + 3] [i_1 + 3]) : (arr_10 [i_1 + 3] [i_1 + 2])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_20 = ((~((((0 ? -32763 : 12362)) & (22233 + 39)))));
                                arr_22 [i_1] [9] [i_1] = ((~((var_10 ? (arr_16 [i_6] [i_7 + 1]) : -5127))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_21 = ((+((6546428004815070523 ? (arr_2 [i_8] [9] [15]) : var_5))));
        var_22 = ((var_3 ? ((((arr_5 [i_8] [i_8]) * (arr_5 [i_8] [1])))) : ((var_4 ? (6546428004815070523 + 1) : ((((arr_4 [i_8] [i_8]) ? var_6 : var_5)))))));
        var_23 = (max(var_23, ((((arr_2 [i_8] [i_8] [i_8]) > (((((arr_21 [i_8] [i_8] [14] [i_8] [10]) << (var_12 + 715602259))) / -10728)))))));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_24 = var_7;
        var_25 = (min(var_25, (arr_26 [i_9])));
    }
    var_26 = (((1 >= -25389) ? 6 : 1));
    #pragma endscop
}
