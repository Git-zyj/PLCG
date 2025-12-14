/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_10 = (((~(arr_7 [i_3] [i_0] [i_0]))));
                            var_11 -= 51525;
                            arr_9 [i_0] [i_1] [17] [i_3] [4] [i_0] = ((~(-127 - 1)));
                            var_12 = 51525;
                            arr_10 [19] [19] = ((((min((arr_0 [i_3]), var_3))) ? (1397517423 >= var_9) : var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_13 ^= ((+(((arr_17 [19] [2] [i_5 - 2] [24]) & (arr_17 [12] [8] [i_5 + 1] [16])))));
                            arr_18 [1] [i_1] [i_1] [i_4] [i_4] [i_4] = (((((arr_13 [i_0] [3] [3] [i_5 + 2]) ? (((arr_0 [i_4]) / var_0)) : ((((63 == (arr_4 [1] [i_0]))))))) >= ((113 ? -2246616754629205304 : 16793941565839617666))));
                            var_14 = (((((~(arr_15 [i_0] [i_0] [20] [i_5 - 2] [20])))) ? (var_8 || var_3) : 30));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((0 ? var_3 : var_7));
    var_16 = var_0;
    var_17 *= (((~var_2) & var_4));
    #pragma endscop
}
