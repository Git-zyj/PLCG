/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_9) ? (min((max(-3869366558176611485, 33)), 26016)) : (((min(8388607, var_8))))));
    var_11 = (min(3869366558176611485, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(8388609, ((((min(8388609, var_9)) >= (arr_5 [i_0] [i_0] [i_1 - 1]))))));
                arr_6 [i_0] = max(var_0, var_3);
                arr_7 [i_0] = ((((max(86, (arr_0 [i_1 - 1])))) ? (max((arr_0 [i_1 + 2]), ((max(var_5, var_8))))) : (((min((arr_5 [i_0] [i_0] [i_0]), var_4))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = var_5;

                /* vectorizable */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_2] [i_2] [16] [i_2] = ((-(arr_8 [i_2 + 2])));
                    var_13 = 48;
                    arr_16 [i_2] [i_2 - 1] [i_2] = ((-57 | (~var_8)));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_14 = ((-(arr_18 [i_2 - 1] [i_2] [12] [i_5])));
                        arr_20 [i_2] [i_2] [i_2] [i_2] = var_1;
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_15 = (((arr_14 [i_2] [i_2] [i_2 - 1]) == (arr_11 [i_2])));
                        var_16 = ((-var_8 ? 3869366558176611503 : var_5));
                    }
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    arr_25 [i_2] [i_2] [i_2] [i_7] = ((+(max((arr_19 [i_2 - 1] [i_2] [i_2]), (arr_19 [i_2 + 2] [i_2 - 1] [i_2])))));
                    var_17 = (max(var_17, (((~(arr_23 [i_2] [i_7 - 1] [i_3] [i_2]))))));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_29 [i_2] [i_2] [i_8] = 6475572241939295958;
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = ((((arr_31 [i_2 + 2] [i_3] [i_9 + 1] [i_9 - 1] [i_10] [10]) ? (arr_31 [i_2 - 1] [i_3] [i_9 - 3] [i_2 - 1] [i_10] [i_10]) : (arr_31 [i_2] [i_3] [i_9 - 4] [i_9] [i_2] [i_3]))));
                            }
                        }
                    }
                }
                var_20 = (max(var_1, (min(3869366558176611485, (min(-30, var_1))))));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_21 |= (var_3 >= (arr_18 [i_2] [14] [i_2] [i_2]));
                    var_22 = var_6;
                }
                var_23 = ((33 ? 18446744073709551615 : 223746160));
            }
        }
    }
    #pragma endscop
}
