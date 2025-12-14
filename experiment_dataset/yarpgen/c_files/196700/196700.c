/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = ((~(((((~(arr_1 [i_0] [i_0]))) > (((var_7 > (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = (((((max(var_4, var_5) > var_4)))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                {
                    var_12 = arr_1 [i_2] [i_2];
                    arr_12 [i_1] [i_1] = (min(var_9, var_0));
                }
            }
        }
        arr_13 [i_1] = arr_7 [i_1 + 1] [i_1 - 2];
        arr_14 [i_1] [i_1] = (max((min(4294967295, (max(1, var_2)))), ((max(var_0, ((min(1, 1))))))));
        arr_15 [i_1] = (((max((arr_8 [i_1 - 2] [i_1] [i_1]), 1)) ? (((1 ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1]) : 1))) : (max(var_8, var_0))));
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        arr_20 [i_4] = (((((((min(var_10, 1))) ? ((var_7 ? (arr_10 [i_4] [i_4] [1]) : 0)) : var_7))) ? ((var_4 ? (((1023 ? (arr_17 [i_4]) : 1006039851))) : -17394040209271673826)) : 1));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_13 = min(var_1, (min((((var_6 ? var_5 : var_6))), (arr_23 [i_4] [i_4] [i_6]))));
                        arr_29 [i_4] [i_4] [i_4] [i_4] = ((((((362110161 - var_0) ? (min(var_2, var_4)) : (((1 ? 46 : var_5)))))) ? (max((min(var_4, var_10)), (((var_7 ? var_6 : var_5))))) : (((arr_0 [i_4 - 1]) / 6917191740498980018))));
                    }
                }
            }
        }
    }
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_44 [i_12] [i_9] [11] = (~1);
                                var_15 = (((((var_4 ? 39 : 1))) ? (!var_1) : var_5));
                            }
                        }
                    }
                }
                var_16 = ((var_7 << (((max((max(1, var_0)), ((~(arr_36 [i_8] [i_9] [0]))))) - 3459213014))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    arr_52 [i_13] = (arr_17 [i_14]);
                    arr_53 [i_13] [i_13] = (((var_9 ? ((((var_1 != (arr_25 [i_13] [i_14] [0] [i_13]))))) : (max(var_6, 15608012057596950712)))) >= -1928012576);
                }
            }
        }
    }
    #pragma endscop
}
