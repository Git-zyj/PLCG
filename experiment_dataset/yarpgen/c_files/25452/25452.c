/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 116));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1 - 1] [6] = (arr_3 [i_0] [i_0] [i_0 - 1]);
                    var_18 *= (((-1 && (!-1351788265))) || ((max((arr_3 [i_0] [i_0 - 1] [i_1 - 1]), 48))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    var_19 = ((-46 ? (((arr_1 [i_3] [i_4 - 2]) ? (arr_1 [i_0 + 1] [i_3]) : -1351788265)) : (((-(((1713223197 != (arr_2 [i_0])))))))));
                    arr_12 [i_4] = 66;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 = ((arr_17 [i_4] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1]) ? (((arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1]) ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6]) : (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6]))) : ((~(arr_17 [i_4] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2]))));
                                var_21 = ((((((arr_15 [i_4 + 1] [i_5] [i_4 + 1]) ? var_11 : (arr_0 [i_0 + 1] [i_5])))) ? (((!(arr_1 [i_4 - 2] [i_6 + 1])))) : (arr_17 [i_4] [i_3] [i_3] [i_3] [6])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    var_23 |= 41;
    #pragma endscop
}
