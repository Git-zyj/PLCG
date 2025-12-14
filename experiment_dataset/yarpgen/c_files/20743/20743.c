/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((((var_1 ? var_15 : var_9))) ? (0 && 106) : ((min(var_6, var_7)))))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, ((min(19, var_4)))));
        arr_4 [i_0] = var_12;
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_21 |= ((arr_6 [i_3] [i_2]) && 672);
                        arr_16 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2 + 2] = (arr_10 [i_4] [i_3 + 3] [i_2]);
                        var_22 = (max(var_4, ((var_2 ? (arr_6 [i_1 + 1] [i_1 - 1]) : (arr_5 [i_1 - 3] [i_1 - 2])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    var_23 += var_1;
                    var_24 += ((((min(18261, 19))) ? ((var_11 & (arr_11 [i_1] [i_1] [4] [i_1]))) : ((((((var_9 ? (arr_15 [i_1 - 2] [i_5] [i_1 - 2] [i_6]) : var_6))) < (max(0, var_16)))))));
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        var_25 = (((((max(3303376675, 0)))) && (106 >> var_13)));
        var_26 |= (min((~1), (min(((min(30970, var_2))), (arr_9 [i_7 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                arr_30 [i_9] = (max((var_16 && var_7), ((min(((1 ? var_10 : (arr_20 [i_8] [i_9] [i_9]))), (48 <= var_15))))));
                arr_31 [i_9] = (((((var_16 ? (arr_9 [i_8]) : var_17))) ? 0 : (arr_29 [i_9])));
            }
        }
    }
    #pragma endscop
}
