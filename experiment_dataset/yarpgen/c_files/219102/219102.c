/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((!((min((arr_3 [i_1] [i_0] [i_1]), (arr_3 [i_0 - 3] [i_1] [i_1])))))))));
                var_12 = (arr_2 [i_0] [6] [i_1]);
                arr_4 [i_0] [4] [4] |= (((arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2]) ? (arr_1 [i_0] [i_0]) : (((!(arr_2 [i_0 - 2] [i_0 + 1] [i_0 - 3]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = arr_6 [i_2];
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_13 ^= (arr_13 [i_2] [i_2]);
                        var_14 = var_10;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (((arr_7 [i_2]) ? (arr_7 [i_5]) : (arr_7 [i_2])));
                            var_16 = (((arr_7 [i_2]) ? (~197016318) : (arr_18 [i_2])));
                            arr_19 [i_4] [i_5] [i_5] = (~(arr_18 [i_4]));
                        }
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                {
                    var_17 -= (arr_7 [i_9 + 2]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_18 = (arr_32 [i_7] [i_8] [10] [i_10] [7]);
                                var_19 = (min(var_19, var_9));
                                var_20 = ((-(arr_30 [i_7] [i_9] [i_7] [i_11])));
                                var_21 = ((-((((max((arr_24 [i_8] [i_9] [i_11]), (arr_10 [i_7] [i_10])))) ? (arr_7 [i_9 + 1]) : var_7))));
                                var_22 -= (max((((max(-4177058594013438534, (arr_24 [i_7] [i_7] [i_11]))))), (min((arr_7 [i_9 + 4]), 1741468723))));
                            }
                        }
                    }
                    var_23 = (min(((!((max((arr_1 [i_7] [i_9]), 1741468723))))), (arr_5 [i_8])));
                    var_24 = (min(var_24, ((min((max(10292140974090996243, -3)), (((!(arr_24 [i_9] [i_9 - 1] [i_8 + 2])))))))));
                }
            }
        }
    }
    var_25 = (max(((-var_0 ? ((max(var_4, var_2))) : (max(var_6, var_10)))), var_6));
    var_26 = ((~(((1741468731 ? 107172404 : 2553498572)))));
    #pragma endscop
}
