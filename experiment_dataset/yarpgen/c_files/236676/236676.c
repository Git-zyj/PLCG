/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0 - 1] [i_0]) << (((min(-8, 8)) + 12))));
        arr_4 [i_0] [i_0] = ((((((max(-25, 18146734707656212021))) ? ((0 << (((arr_1 [i_0] [1]) - 2298516116)))) : 1)) <= (((max((-127 - 1), (arr_2 [i_0 + 1])))))));
        arr_5 [i_0 - 1] [21] = (max(((((arr_0 [i_0 - 1]) || (arr_0 [i_0 - 1])))), ((13 - (arr_2 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (arr_8 [i_1]);
        var_19 += (arr_7 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] [19] = 300009366053339587;
        var_20 += (((((arr_9 [i_2]) * var_11)) * (arr_2 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 = (((arr_17 [i_2] [i_3] [i_4]) ? 56887 : (arr_9 [i_2])));
                    var_22 = (((arr_6 [i_4]) - (arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = ((1 ? 2147483647 : 1));
                                var_24 = ((arr_8 [i_5 + 1]) - (arr_8 [i_5 + 2]));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_27 [i_7] = ((((max((min((arr_6 [i_7]), (arr_9 [i_7]))), -126))) ? -352091078 : (arr_9 [i_7])));
        arr_28 [i_7] [i_7] = (((max(45891, 5667475833271638684)) - (((arr_7 [i_7]) ? -2 : 5324327563557372421))));
    }
    #pragma endscop
}
