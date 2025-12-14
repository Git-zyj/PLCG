/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((((3097 ? 3100 : 288230376151711743))) ? (var_7 && var_13) : 18158513697557839890)))));
    var_21 = ((((max(var_19, -var_6))) ? var_15 : ((((max(var_0, var_5)) >= (var_14 == var_17))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((213 ? 0 : (!10174958511649518854)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [23] [i_0] [i_2] = (max((max(((((arr_0 [i_0]) / -1))), (arr_6 [i_0] [i_1]))), 191));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((((max(1023, 8274358547053586476) * (((max(var_15, 82))))))));
                    var_22 = arr_0 [i_0];
                    var_23 = (min(var_23, var_10));
                }
            }
        }
        arr_11 [4] &= var_1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (arr_0 [i_3]);
        arr_16 [i_3] [i_3] = var_14;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_22 [i_4] [i_5] [i_5] = ((!(28917 || 12135)));
            arr_23 [i_4] = ((16 ? ((((arr_7 [i_4] [12] [i_5] [i_5]) ? 22779 : -1358733329))) : ((var_2 ? (arr_19 [i_4] [i_4]) : (arr_17 [i_5])))));
        }
        arr_24 [i_4] = (arr_21 [i_4]);
        arr_25 [i_4] = var_12;
    }
    var_24 = var_11;
    #pragma endscop
}
