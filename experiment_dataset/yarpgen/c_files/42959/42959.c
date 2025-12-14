/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (((((var_10 ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 - 1]))) != (((!((max(21217, 32124)))))))))));
                        var_14 += (4294967277 - -320467505);
                        arr_13 [i_3] [i_1] [i_3] [18] = ((~((var_1 ? (arr_6 [i_3] [i_3] [i_1 + 3]) : var_11))));
                        arr_14 [i_0] [i_1 + 2] [i_3] [i_3] [i_3] = (var_7 * 26);
                        var_15 = var_11;
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = max((max(21213, -23818)), 24);
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_16 = (min(var_16, ((min(-21218, (((max(1, (arr_8 [i_4] [i_4] [i_4] [9]))) ? 7 : 8176)))))));
        var_17 = (min(var_17, 24));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((arr_4 [i_5] [i_5] [i_5 + 2]) ? (arr_30 [i_9] [i_5 - 1] [i_8] [0] [i_5]) : -8176))) ? (((((var_12 ? var_1 : var_3))) ? (arr_29 [i_5] [i_6] [i_6] [i_7] [i_8] [i_7]) : var_0)) : ((max((arr_24 [i_5 + 3] [i_7]), (arr_24 [i_5 - 1] [i_8])))))))));
                            arr_31 [i_7] [i_7] [i_7] = (1 | 1);
                            arr_32 [i_5] [i_6] [i_9] [i_8] [i_7] = var_12;
                        }
                    }
                }
            }
            var_19 = var_5;
            var_20 -= -8171;
        }
        arr_33 [i_5] [i_5] = -var_5;
        arr_34 [i_5] = arr_5 [i_5] [i_5] [i_5];
        var_21 = (max((((((16164 ? 1 : 0))) || (arr_23 [i_5 + 1] [i_5 + 2]))), var_0));
        arr_35 [i_5] [i_5] = ((((max(1744444801, -8176))) ? -4294967295 : 23817));
    }
    var_22 = -1706346452;
    #pragma endscop
}
