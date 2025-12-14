/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-var_15, (min(((max(32767, var_6))), var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((max(var_12, 7841850345673695076)));
                arr_9 [i_0] [i_1] = (max((((~(min((arr_4 [i_0] [i_1] [i_0]), var_7))))), ((min(var_16, (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 = (min((((-(arr_7 [i_1])))), (max(((min(49, var_3))), ((~(arr_5 [i_0] [i_0] [i_2])))))));
                    arr_12 [i_0] = var_8;
                    var_22 = ((+(((min((arr_7 [i_0]), var_7))))));
                    arr_13 [i_0] [4] [i_2] |= var_8;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_23 -= (min((((-((-(arr_4 [i_0] [6] [i_4])))))), var_1));
                                var_24 = (!26724);
                                arr_24 [i_0] [i_0] [i_3] [i_4] [i_5] = (min(-var_6, ((min(var_12, 38811)))));
                            }
                        }
                    }

                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        arr_28 [i_6] [i_0] [i_0] [i_0] = (+-1);

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_25 = (min(var_19, ((min(var_9, (arr_11 [i_0] [i_7]))))));
                            arr_33 [i_7] [i_0] [i_3] [i_0] [i_0] = ((min(28428, ((-(arr_23 [i_0] [i_1] [i_7] [4] [i_7]))))));
                            var_26 = -60;
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((-(min(26708, -2010799586))))), (min((max(7642272681259212077, (arr_0 [i_6]))), ((max(var_12, (-127 - 1))))))));
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        arr_37 [i_0] [i_1] [i_1] [i_8] = ((-((+(max((arr_36 [i_8 + 3] [i_8 + 3] [i_3] [i_0]), 2675082484))))));
                        var_27 = (max(var_27, -0));
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        var_28 = (arr_16 [i_0] [i_9]);
                        arr_41 [i_0] [i_1] [i_3] [i_9] [i_1] [i_0] = (arr_5 [i_0] [i_0] [i_3]);
                        arr_42 [6] [i_1] [i_3] [i_9] &= (((-(arr_15 [1]))));
                    }
                }
            }
        }
    }
    var_29 = 38828;
    #pragma endscop
}
