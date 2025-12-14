/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = var_12;
    var_15 += (min((15006073228338109054 != 1), (max((var_3 * var_5), var_0))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, -var_4));
                        arr_11 [i_1] [i_2] = (max(((((var_12 ? -9223372036854775804 : 65515)) & var_5)), -1));
                        arr_12 [i_0] [i_0] [i_1] [i_1] = (min((var_12 ^ 39643), (min(var_2, (arr_3 [i_1] [10] [i_2])))));
                        arr_13 [i_0] [10] [10] [i_0] [i_0] [i_0] |= ((~((~((19285 ? (arr_10 [i_0] [i_0] [i_0] [i_2] [i_3]) : (arr_10 [i_0] [i_1 + 1] [i_1] [i_0] [i_3])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] = var_10;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_27 [i_6] = var_10;
                            arr_28 [i_0] [i_4] [i_5] [i_4] [i_5] [i_0] = (arr_21 [i_0] [7]);
                        }
                        arr_29 [i_0] [i_4] [i_5] [i_5 - 3] [i_4] [i_6] = -var_0;
                    }
                }
            }
        }
        arr_30 [i_0] = ((-((var_2 & ((var_1 ? var_0 : var_12))))));
        arr_31 [i_0] |= (((arr_5 [i_0] [i_0] [i_0]) ? ((var_11 ? ((min(-7022309608760508236, (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_9 [i_0] [7] [i_0] [i_0] [i_0]) ? var_0 : var_8)))) : (18446744073709551615 - 1)));
        arr_32 [i_0] = ((~(arr_5 [2] [i_0] [2])));
    }
    #pragma endscop
}
