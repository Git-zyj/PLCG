/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_2] [i_0] = (!2264666270);
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] = (arr_2 [i_0] [i_0]);
                            arr_11 [i_0] &= ((!(arr_1 [i_0] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = (max(var_18, -254));
                            arr_19 [i_4] = -115;
                            var_19 = ((!(arr_14 [i_4] [i_5 - 1] [i_4])));
                            var_20 = (((-(arr_4 [i_5 - 3] [5] [i_4 - 1] [i_5]))));
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_0] = (arr_7 [12] [i_0] [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            {
                var_21 = (!15);
                var_22 = -var_2;
                arr_26 [i_7] = (!-47982);
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_33 [3] [i_7] [3] = (!32256);
                            var_23 = 8614360025958648610;
                            arr_34 [13] [i_7] [i_7] [i_6] = var_9;

                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                var_24 = ((!(~1265899134)));
                                arr_37 [i_6] [i_7] [i_6] = 58;
                                arr_38 [i_7] [11] [i_9] [i_10] [i_9 - 3] [3] = 3777828999;
                            }
                            for (int i_11 = 0; i_11 < 24;i_11 += 1)
                            {
                                arr_42 [i_6] [i_7] [i_8 + 1] [i_7] [18] = (!1265899134);
                                var_25 = (min(var_25, -2030301025));
                                var_26 = (max(var_26, (~var_8)));
                                var_27 *= -115;
                            }
                            for (int i_12 = 0; i_12 < 24;i_12 += 1)
                            {
                                arr_45 [i_7] [i_7] = (~29686);
                                arr_46 [i_12] [i_12] [i_7] [i_7] [i_7 - 1] [i_6] = ((!(arr_29 [i_7 + 1] [i_7 + 1] [i_8 + 1] [i_8 + 2])));
                                var_28 = -3777828981;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_5;
    #pragma endscop
}
