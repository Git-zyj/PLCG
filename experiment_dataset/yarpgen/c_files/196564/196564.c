/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = ((((((~59365) ? (var_16 & -1) : var_10))) ? 12 : var_7));
    var_19 = (min(var_3, var_5));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [16] = (((max(54394027672773706, (arr_1 [i_0]))) > ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 = (arr_14 [i_1] [i_2] [i_1] [i_3] [i_4] [i_4] [i_5]);
                                var_22 &= (~(((8 > (arr_12 [i_1] [i_1] [12] [1])))));
                            }
                        }
                    }
                    var_23 = ((~(arr_10 [i_2])));
                }
            }
        }
        arr_16 [i_1] = var_14;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_24 = (var_15 || (!var_10));
                    var_25 |= ((((var_16 > ((33481 ? (arr_6 [i_1] [i_1]) : -957069476291223949)))) ? (arr_12 [i_1] [0] [i_1] [i_1]) : 6));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_26 = (-9223372036854775807 - 1);
                                var_27 = (~9223372036854775807);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
