/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(var_6, ((161 ? var_3 : var_2)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] [i_0] = (-var_0 ? ((max(var_10, var_2))) : (arr_7 [i_0] [i_1] [i_2] [i_2]));
                    var_14 += (+(max(((6690098986240668970 ? (arr_1 [i_0]) : 1)), ((1 ? 1 : (arr_1 [i_1]))))));
                    arr_10 [i_0] = var_3;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_2 - 1] [i_1]);
                }
            }
        }
        arr_12 [i_0] [i_0] = (arr_7 [18] [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        arr_15 [i_3] = (arr_5 [i_3] [1]);
        var_15 = (((min(var_4, (((6690098986240668970 ? (arr_4 [i_3 + 1] [i_3 - 2]) : var_1))))) * var_4));
    }
    var_16 = ((((var_8 || 11756645087468882645) && ((max(var_6, var_7))))) ? var_11 : (max(var_0, ((-89 ? var_2 : var_8)))));
    var_17 = (((((var_11 ? 154723037 : var_3)) > (var_9 || 1))) ? ((max(var_2, 10968))) : (((~(var_11 ^ var_2)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_18 = (max((((var_2 - var_6) ? -957270653 : 0)), 16973));
                                arr_31 [i_6] [i_8] [i_7] [i_4] [i_5] [i_6] = ((-(arr_16 [i_4])));
                                arr_32 [i_6] = (arr_29 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 3]);
                                arr_33 [i_6] [i_6] [i_6] = (((((1 | (((arr_25 [i_4] [i_4]) ? var_7 : var_10))))) ? (min((~4140244255), (arr_28 [i_5] [i_5] [i_6 - 2] [i_7] [i_8]))) : (var_10 & var_3)));
                                var_19 = (-2147483647 - 1);
                            }
                        }
                    }
                }
                arr_34 [i_5] [i_5] [i_4] = var_5;
                var_20 = (max(var_20, (((((arr_30 [i_4] [i_5] [i_4]) * (arr_28 [13] [i_5] [i_5] [i_5] [16])))))));
            }
        }
    }
    #pragma endscop
}
