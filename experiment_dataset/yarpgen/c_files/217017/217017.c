/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 491343562233571912;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = 1658;
        arr_3 [i_0] = 67;
        var_19 = (max(var_19, 1));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_2] [i_2] [i_1] [i_2] = -1246570223;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 = var_3;
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((var_13 - (arr_9 [i_0] [i_2] [i_0 + 1] [i_0]))) - (((arr_6 [i_0]) ? -24 : (arr_9 [i_0] [i_2] [i_0 + 1] [i_0])))));
                            var_21 = (0 * 67);
                            arr_20 [i_2] = -var_0;
                            var_22 = (max(var_22, (arr_9 [i_0 - 2] [i_0] [i_0] [i_0 - 2])));
                        }
                        var_23 += (arr_17 [i_0] [i_1 + 1] [i_1 + 3] [i_3] [i_0 - 1]);
                        arr_21 [i_1] [i_1] [i_0] [i_3] |= ((((var_8 ? (arr_1 [i_0 + 1]) : -36)) != (arr_1 [i_1 - 1])));
                        arr_22 [i_2] = (((((15505 ^ 0) & ((0 & (arr_4 [i_0 - 1]))))) & ((((arr_17 [i_0] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0]) ? 1 : 32453)))));
                    }
                }
            }
        }
    }
    var_24 = ((var_2 ? var_11 : (41734 | var_0)));
    var_25 = (min(var_25, 18446744073709551615));
    #pragma endscop
}
