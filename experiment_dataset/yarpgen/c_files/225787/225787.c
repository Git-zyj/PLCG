/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [7] [i_1 - 1] [18] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] [i_0] = ((~(arr_9 [i_0] [i_1 - 2] [i_3] [i_3 + 4])));
                            arr_14 [i_0] [i_1 + 2] [i_1 + 2] [5] [i_3] [i_3] = 1;
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_2]);
                            arr_16 [5] [i_2] [i_1] [12] [i_0] [i_0] = ((~((-21533 ? (arr_5 [i_1 + 2] [i_1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1] [i_1 - 2])))));
                        }
                    }
                }
                arr_17 [i_1 + 2] [i_0] [i_0] = (((((7 ? (arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 2] [i_1]) : 9223372036854775807))) & ((21048 ? (((1 ? (arr_10 [i_1]) : 44488))) : ((24576 ? 2035396665011087952 : 21036))))));
            }
        }
    }
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            {
                arr_23 [i_4] [i_4] [i_5 + 3] = (var_5 >= var_8);
                arr_24 [i_4] [i_4] = (~(!-32748));
                arr_25 [i_5 + 3] [i_4] [i_4] = (arr_11 [i_4] [i_4] [i_4] [0] [20]);
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 6;i_8 += 1)
                        {
                            {
                                arr_33 [i_6] [6] [i_6] [i_5] [i_4] = 1;
                                arr_34 [i_4] [i_4] [i_7 - 1] [i_8] = ((6192877225465943856 & (((~((var_3 ? var_2 : (arr_10 [i_4]))))))));
                                arr_35 [i_8 - 3] [i_7] [i_6] [i_4] = (-(((arr_9 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 - 1]) ? (arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (arr_9 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
