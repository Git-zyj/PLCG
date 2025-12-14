/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 & (max(3763919996809355612, 34027))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((7 ? 3 : 0));
        var_21 = -70;
        var_22 = ((var_1 ? ((var_10 ? (arr_1 [i_0]) : var_3)) : var_6));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((arr_3 [i_1]) >> 0));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [7] [i_1] [11] [i_4] = (arr_4 [i_2] [i_3]);
                        arr_16 [i_1] [i_1] [i_4] = (((var_12 ? (arr_4 [i_1] [i_1]) : (arr_11 [i_1]))));
                    }
                }
            }
        }
        arr_17 [i_1] = (((arr_4 [i_1] [i_1 + 1]) * (arr_4 [i_1] [i_1 - 2])));
        var_23 -= ((arr_8 [i_1 + 1] [i_1] [i_1]) ? (arr_6 [4]) : (arr_6 [12]));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_24 |= -12514;
        var_25 = (max(var_25, (min((~1), (((min(var_9, var_8))))))));
    }
    #pragma endscop
}
