/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, 9777));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_4] = (max((min((arr_1 [i_4]), 55759)), ((~(arr_1 [i_0])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_5] [i_0] = var_12;
                            arr_22 [i_0] [i_0] [i_1] [i_5] [14] = var_15;
                        }
                    }
                }
                var_19 = (((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1]) ^ (arr_10 [i_1 - 3] [i_1] [i_1 - 1]))) < (arr_7 [i_0] [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 21;i_9 += 1)
                            {
                                var_20 = (max(var_20, 55759));
                                var_21 -= 0;
                                var_22 = (arr_26 [i_1] [i_1] [i_1 - 2] [i_8] [i_8] [i_7]);
                            }
                            /* vectorizable */
                            for (int i_10 = 3; i_10 < 19;i_10 += 1)
                            {
                                var_23 -= 5922004370896674740;
                                arr_32 [14] [i_1 - 3] [i_1] [i_1] [i_8] [i_10] [i_10] = (arr_12 [i_7 + 3] [i_10] [i_10] [i_10] [i_10 + 1]);
                                arr_33 [i_1] = ((28854 & (arr_10 [i_0] [i_0] [i_10])));
                            }
                            arr_34 [0] [i_8] [i_7] [i_1] [i_0] = (((-((~(arr_2 [i_8]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_40 [i_1] [i_1] = (!-28854);
                            var_24 = ((arr_2 [i_0]) ? 0 : ((9730041335532802642 ? (arr_2 [i_0]) : 0)));
                            var_25 ^= -var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
