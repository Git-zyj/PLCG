/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = ((var_11 ? (arr_0 [i_2 - 1]) : (((min(((max((arr_2 [i_1]), var_0))), (arr_4 [i_0] [i_2] [i_3])))))));
                        arr_11 [i_0] [i_0] [i_1] = (max(11094484852197237095, (((1 ? (arr_2 [i_2]) : (arr_6 [i_2]))))));
                        var_19 = (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 2]);
                        arr_12 [i_1] = (arr_3 [i_3]);
                    }
                }
            }
        }
        var_20 = (max(var_20, (((((max((max(7352259221512314521, (arr_2 [i_0]))), var_11))) ? (((var_1 | 7352259221512314521) ? 1 : (~var_6))) : (((((max(var_8, (arr_7 [i_0] [i_0])))) ? ((min((arr_6 [i_0]), (arr_6 [i_0])))) : ((var_8 ? var_2 : (arr_5 [i_0] [i_0] [13] [i_0])))))))))));
        var_21 -= (((!var_17) && ((min((max((arr_2 [i_0]), (arr_1 [i_0] [i_0]))), (var_13 || var_3))))));
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_15 [i_4] = 1;
        arr_16 [i_4] [i_4] = var_10;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = ((var_11 ? var_15 : (!1)));
        arr_19 [i_5] = var_14;
    }
    #pragma endscop
}
