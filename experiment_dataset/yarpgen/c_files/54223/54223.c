/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_17 = ((-13996 ? (arr_0 [i_0]) : var_13));
                var_18 = ((2147483647 ? var_3 : var_13));
                var_19 = (min(var_19, (~var_15)));
            }
            arr_9 [i_0] [i_0] = (arr_5 [i_1]);
            arr_10 [i_0] [i_1] [i_1] |= (((arr_7 [i_1]) ? 120751556 : (-2147483647 - 1)));
        }
        arr_11 [i_0] [i_0] = (0 & 8881157132673172079);
        var_20 = var_6;
        arr_12 [i_0] = (~(((arr_6 [i_0]) ^ (arr_3 [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_22 [i_3] [i_4 + 1] [2] &= min((!var_2), ((min(((-23184 ? 0 : (arr_2 [i_3] [i_3]))), (min(2147483647, 2147483647))))));
                    arr_23 [i_3] = max(((min(18, (arr_4 [i_4 - 1] [i_5])))), ((~(arr_13 [i_4 - 1] [i_4 - 1]))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_21 = ((-(((((var_5 ? 1080641159 : 0))) ? 2147483647 : (var_10 | 27372)))));
                                var_22 = (((9005043592163196635 ? ((1 ? var_6 : (arr_5 [18])) : (((max(124, var_5))))))));
                                arr_29 [i_3] [i_4] [i_5] [i_3] [i_5] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
