/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((((((16383 ? 1351289908 : (arr_2 [11]))) == ((var_14 ? (arr_6 [i_1] [i_1]) : (arr_2 [i_1]))))))) - ((38476 ? (arr_5 [i_1] [i_1] [i_0]) : (var_13 && 1097165829)))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_12 [i_1] = 5908402883791714135;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_20 = arr_11 [i_0] [1] [i_3];
                        arr_15 [i_1] = (arr_4 [i_1] [13] [i_3 - 1]);
                        var_21 = 27067;
                        var_22 = 16410;
                    }
                    var_23 = (min(var_11, (min(((((arr_14 [i_0] [23] [1] [i_1] [i_2 - 1]) << (((arr_11 [i_2] [i_1] [i_2]) - 17584))))), 5908402883791714135))));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_18 [i_1] = (((var_11 ? (arr_2 [i_4]) : var_14)) != ((((max((arr_14 [i_0] [i_4] [i_1] [i_1 - 1] [i_0]), (arr_17 [i_0] [i_1 - 2] [i_4])))) ? var_7 : (arr_14 [i_1 - 2] [i_1] [14] [i_1] [14]))));
                    var_24 = (16410 * 49153);
                    var_25 = var_19;
                    var_26 = 262143;
                }
                var_27 = (arr_13 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_28 = ((min(382609141, -382609141)));
                            var_29 = (((1683253889 + -32764) ? (arr_23 [i_1]) : (((arr_10 [i_0] [i_0 - 1] [i_1]) - (arr_20 [i_0] [i_0 - 1] [8])))));
                        }
                    }
                }
                var_30 = ((((max((arr_17 [19] [i_0 - 1] [i_1 - 2]), var_19))) * (arr_17 [i_0 - 1] [i_0 - 1] [i_1 + 1])));
            }
        }
    }
    var_31 = var_15;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            {
                arr_31 [i_8] [1] = (min(49130, 1));
                var_32 = ((0 ? ((382609172 << (520285178 - 520285177))) : 739230287));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_33 = var_5;
                                arr_39 [i_7] [i_8] [i_9] [2] [i_10] [i_11 - 2] = (min(382609141, (arr_17 [1] [i_9] [i_10])));
                                arr_40 [i_7] [14] [10] [i_8] [i_11] = ((var_17 + ((min(((27060 >> (-89 + 96))), ((min(var_5, (arr_23 [i_8])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
