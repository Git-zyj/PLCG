/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = 0;
                    var_15 = (min(-2156688700143011127, ((-1 ? (arr_2 [i_0]) : var_6))));
                    arr_6 [i_2] [i_1] [i_2] [i_2] = (min(((0 && (-1 < 1))), (((var_9 | var_10) < (min(9561568836377392818, 0))))));
                    var_16 ^= var_12;
                }
            }
        }
    }
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [17] [17] [i_3] [13] [i_3] [i_3] = ((!((((1 || var_2) ? 0 : var_1)))));
                                var_18 = var_2;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_32 [i_10] [i_9] [i_9] [i_8] [4] [i_3] [i_3] = (arr_9 [i_3] [i_3] [i_3]);
                                var_19 = (max(var_19, (arr_22 [i_3])));
                            }
                        }
                    }
                    var_20 ^= 536870911;
                }
                var_21 = 10456;
                var_22 = (min(var_22, (((-(arr_13 [i_4] [i_3] [i_3]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_23 = (!var_1);
        arr_35 [i_11] [i_11] = ((!(arr_26 [i_11] [i_11] [i_11] [i_11])));
        var_24 = (max(var_24, -36843));
        var_25 = ((-1 ? -var_3 : 0));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_26 = (!0);
        var_27 = (min(var_11, (min(-0, 48))));
        var_28 = -var_1;
    }
    #pragma endscop
}
