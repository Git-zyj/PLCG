/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((~var_15), var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 15;i_4 += 1)
                            {
                                var_18 = (arr_4 [7] [i_0] [i_0]);
                                var_19 = (arr_0 [i_0] [i_4 - 1]);
                            }
                            arr_13 [i_0] = (((arr_12 [i_2]) & ((-(arr_10 [i_0])))));
                            var_20 = (arr_3 [i_2] [i_0]);
                            var_21 = (arr_1 [i_0]);
                            var_22 *= (arr_3 [i_1] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [1] [i_0]);
                            var_23 = arr_9 [i_0];
                            arr_21 [i_0] [i_0] [i_5] [i_6 - 1] [i_0] [1] = (0 ? 8792204895347195241 : 8792204895347195247);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_24 = (arr_1 [i_0]);
                            var_25 = (arr_11 [i_0] [i_0] [i_0] [i_7] [i_0]);
                        }
                    }
                }
                arr_28 [i_0] [i_0] = var_10;
            }
        }
    }
    var_26 = (min(var_26, -49));
    #pragma endscop
}
