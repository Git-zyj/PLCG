/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_9, ((((min(var_8, var_14))) ? var_2 : -1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_4] = var_10;
                                var_21 |= (max((min((arr_4 [i_0 - 1] [i_0 + 1]), ((((arr_4 [i_1] [i_3]) != (arr_4 [i_0] [i_0])))))), (arr_10 [i_4] [i_1] [i_1])));
                                var_22 = (min(199, -48));
                            }
                        }
                    }
                    var_23 = var_13;
                }
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    arr_17 [i_5] [i_1] = (min((~-1049903042937181449), (-69 && -1760073307)));
                    arr_18 [i_5] [i_1] [4] [i_5] = ((((min(-48, (arr_12 [i_0] [i_1] [i_5] [i_1] [i_0 + 1] [i_1] [i_5])))) ? var_13 : ((min((arr_2 [i_0] [i_1]), var_16)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] = (~4953);
                                arr_24 [i_0] [i_5] [i_0] [i_6] [i_7] [i_6] [i_7] = 79;
                                var_24 *= (((arr_6 [i_0] [i_1] [i_5 + 2]) ? (arr_22 [i_7 - 3] [i_6] [6] [i_1] [i_0 - 1] [i_0 + 1]) : (arr_6 [i_7] [i_5 + 1] [i_1])));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = (max(var_25, (~834263138870146630)));
                        var_26 = (min(var_26, (((((min(90, var_4))) - (arr_22 [i_0 + 1] [i_1] [10] [i_5 + 2] [i_5 - 3] [i_8]))))));
                        arr_29 [15] [9] [i_5] [9] = (min(3346270219, 3346270215));

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_27 |= var_1;
                            var_28 = (min(var_28, (arr_8 [i_9] [i_8] [i_5] [i_1] [i_9])));
                            var_29 = (min((arr_22 [i_5] [2] [2] [i_5 - 2] [i_5 - 2] [i_0]), ((-(arr_22 [i_5] [i_5] [i_8] [i_5] [i_5 + 2] [i_5])))));
                            arr_32 [i_5] [i_8] [2] [i_9] [i_5] [i_5] = (arr_22 [i_9] [i_8] [i_5] [i_1] [15] [i_0]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = -1;
                        var_31 = (2370371426256721948 / 16076372647452829678);
                        arr_35 [i_5] = (arr_8 [i_5 + 1] [i_5 + 1] [10] [i_10] [i_5]);
                    }
                }
                var_32 = var_13;
            }
        }
    }
    #pragma endscop
}
