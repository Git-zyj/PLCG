/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = (!var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (((~((var_6 ? 1 : -64)))));
                                var_16 = ((~(((min(1, var_5))))));
                                var_17 = var_8;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_18 = (((max((arr_2 [i_1 + 1] [i_1 + 1]), -5494)) + -var_5));
                    var_19 = 0;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_6] [i_6] [2] = (arr_6 [6] [2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_20 = (var_1 + 248);
                                var_21 = (min(var_21, -1));
                            }
                        }
                    }
                    var_22 = 796979910;
                    var_23 = ((var_10 != (~-1)));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_27 [i_0] [i_0] [i_0] = var_13;
                    arr_28 [i_0] [i_0] [i_1] [i_0] = (((max((~0), 21226)) | 128));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_9] [i_11] [i_0] = (~9991);
                                arr_37 [i_0] [5] [i_11] [5] [i_10] [i_11] [i_11] = 1;
                                var_24 = (min(var_12, (max(var_12, -32750))));
                            }
                        }
                    }
                }
                var_25 = var_12;
                var_26 = (((!(arr_3 [10] [i_1] [i_1]))));
                arr_38 [i_0] [i_1] [i_0] = ((min(16960620669478125269, -1)));
            }
        }
    }
    var_27 = (min(((~((min(var_2, -32))))), 1));
    var_28 = var_8;
    var_29 &= (~1);
    #pragma endscop
}
