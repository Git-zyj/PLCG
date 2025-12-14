/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (max(var_2, 5217743406499365332));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [8] [i_4] [i_2] [1] [i_4] [2] = ((~(((arr_2 [i_4 + 1]) ? (arr_2 [i_4 - 1]) : var_10))));
                                arr_12 [i_0] [i_1 + 3] [i_0] [i_2] [i_3] [i_4] = (((arr_1 [i_2]) * (arr_8 [i_1 + 2] [8] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 3])));
                            }
                        }
                    }
                }
                var_19 = ((-((((max(27569, 3879535609))) ? 49920 : ((15615 ? var_15 : var_6))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_20 -= 15615;
                            arr_18 [i_0] [i_0] [1] [i_6] = (arr_13 [i_1]);
                            arr_19 [10] [7] [i_6] &= (min(15633, (!105)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_21 = (min(((var_10 ? 579398264239025766 : (arr_8 [i_8 - 1] [i_8] [i_9] [i_9] [1] [i_9 - 1] [i_9 - 1]))), (((((3391947509 <= (arr_4 [i_9] [i_7] [0] [i_0]))))))));
                                var_22 ^= 5;
                                arr_28 [0] [i_1 + 4] [i_7] [i_7] [i_8] [i_8 - 3] [i_8 - 3] = (~11);
                                var_23 = (min(var_23, 15635));
                                arr_29 [i_0] [i_1 - 2] [i_8] [i_8] [0] &= (~43);
                            }
                        }
                    }
                }
                arr_30 [i_0] [i_0] = (!(((((max(11, -20079)))) > 22099)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_11] [i_11] [i_12] = ((!(arr_33 [7])));
                    var_24 = ((15337569467875609116 >> (((arr_37 [i_10]) + 1763460162))));
                }
            }
        }
    }
    #pragma endscop
}
