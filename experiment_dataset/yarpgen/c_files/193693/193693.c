/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -var_2;
        var_11 = (~var_5);
        var_12 = var_3;
    }
    var_13 = var_1;

    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 |= 62;
        var_15 = (max(var_5, (arr_3 [i_1])));
        var_16 = 1143691790;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [6] = ((2377386149 ? var_3 : ((((64 || (arr_7 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_20 [7] [i_3] [i_3] [i_2] = ((~((1917581172 ? 40 : 11950602065416525345))));
                        arr_21 [i_2 + 1] [i_2] [i_2] [i_2 + 1] = (arr_10 [0]);
                    }
                }
            }
        }
        var_17 = 0;
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (arr_23 [6] [i_6]);
        arr_25 [i_6 + 1] = ((+(((arr_22 [i_6]) ^ (min(2377386149, var_7))))));
    }
    #pragma endscop
}
