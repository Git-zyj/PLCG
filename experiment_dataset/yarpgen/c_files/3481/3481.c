/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] &= ((((max(((((arr_3 [i_0] [i_0]) > (arr_4 [i_0] [i_1] [i_0])))), (arr_3 [i_0] [i_0])))) ? (arr_4 [i_0] [i_1] [i_2 - 4]) : var_14));
                    var_20 = (arr_7 [i_2 - 4] [i_2 - 3] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = var_5;
                                var_21 = (~(arr_5 [i_0] [i_2]));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] = 18233022694254858663;
                        var_22 = (min(var_22, (((((((arr_6 [i_0] [i_1] [i_2 - 2]) ? (((arr_3 [i_2 - 2] [i_2 - 2]) ? 1 : 1)) : 1))) ? (0 / 1) : var_7)))));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_23 += ((~(max(var_6, var_10))));
                        arr_21 [i_0] [i_0] [i_2] [i_0] = -110;
                        var_24 = (min(var_24, (((var_13 ? (var_13 < 1) : ((((arr_7 [i_6] [i_2] [i_1]) == (min((arr_2 [i_0] [i_0]), var_14))))))))));
                        var_25 = (max(var_25, (((+((var_16 ? (arr_1 [i_0] [i_6 + 1]) : var_9)))))));
                    }
                }
            }
        }
    }
    var_26 = ((((((var_16 ? var_18 : var_4))) ? (var_1 * var_12) : var_4)));

    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        arr_26 [6] = (((~((-(arr_23 [i_7]))))));
        var_27 ^= ((!((((arr_22 [i_7 - 2] [i_7 - 2]) ? var_1 : (arr_22 [i_7 + 1] [i_7 + 1]))))));
    }
    #pragma endscop
}
