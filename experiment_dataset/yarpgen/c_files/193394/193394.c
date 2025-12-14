/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = 1244977066302397153;
                    var_16 -= 35125;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_17 = 31;
                    var_18 = 159;
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, (arr_11 [19] [19] [i_4] [i_5])));
                            arr_15 [i_0 + 1] [i_5] [i_4] [i_4] [i_5] = (min(-1151089839309160128, (((243 >> 7) | (arr_13 [i_0] [i_4] [1])))));
                        }
                    }
                }
                arr_16 [i_0 - 2] = (arr_12 [i_0 - 2] [i_0 - 2]);
            }
        }
    }
    var_20 = var_0;
    var_21 = 219;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            {
                var_22 ^= ((arr_22 [i_6] [i_7] [i_7]) - (1 / 4095));
                var_23 = (arr_6 [i_6] [i_6] [i_7] [i_7]);
            }
        }
    }
    #pragma endscop
}
