/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((37 < (!var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = ((!(((var_3 ? var_7 : (arr_11 [i_0] [i_0] [i_0] [10]))))));
                            var_15 = (max(((var_0 & (arr_1 [i_2 + 2] [i_1 - 2]))), (arr_1 [i_2 + 1] [i_1 - 2])));
                            var_16 = (arr_10 [7] [i_1] [i_3 + 1]);
                        }
                    }
                }
                var_17 = (!((!(arr_13 [i_0]))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_18 = (max(var_18, 9030729104592694983));
        var_19 = ((~(arr_16 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_4] [i_4] = 1;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = ((-((var_1 ? var_1 : -569177475001727131))));
                        arr_27 [i_4] [i_5 - 1] [i_6] [i_7] = (249 > -130017344);
                    }
                    arr_28 [i_4] [i_5] [i_6 - 1] = (arr_22 [i_4] [i_4]);
                    var_21 = (max(var_21, ((((arr_20 [i_4] [i_4] [i_6]) ? (var_11 || var_5) : var_12)))));
                    arr_29 [i_6] [i_5] [i_6] [i_4] = (arr_19 [i_4]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_41 [i_10] [i_8] [i_9] = 110;
                        arr_42 [i_4] [i_8] [i_9] [i_8] = var_2;

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_22 = (99 && var_11);
                            arr_46 [i_4] [9] [i_4] [i_4] [i_4] = var_7;
                        }
                        var_23 = ((!(((32767 ? var_4 : (arr_36 [i_10] [i_8] [i_4]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    var_24 = (((32767 / -30658157) + -8081099840475427420));
                    arr_53 [i_12] [i_13 - 2] [i_12] [10] = (((var_2 || 3790675978) >> 0));
                    arr_54 [i_12] [3] [i_14] = 271130231;
                    arr_55 [i_12] [i_13] [i_14] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
