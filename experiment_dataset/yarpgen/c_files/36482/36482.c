/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_1] [i_0] = ((((((arr_8 [i_0] [i_3] [i_4 - 1] [i_4 + 1] [i_4]) ? (~-12712) : (arr_4 [i_4 + 1] [i_4 - 1])))) && (((~(arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                                var_11 = -18400;
                                var_12 = (!136);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_13 = ((~(((arr_19 [i_0] [i_1] [i_2] [i_2] [i_5]) ? (arr_19 [i_0] [i_2] [i_2] [i_1] [i_0]) : (arr_19 [i_0] [i_1] [i_2] [i_5] [i_5])))));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_14 *= (~1);
                            var_15 *= (min(65531, (((!(arr_22 [i_0] [i_0] [i_2] [i_5] [i_6] [i_6]))))));
                            var_16 = arr_12 [i_0] [i_2] [i_5];
                        }
                    }
                    arr_23 [i_0] [i_1] [i_1] [i_1] = (min((arr_9 [i_1]), 111));
                    var_17 = 87;
                }
            }
        }
    }
    #pragma endscop
}
