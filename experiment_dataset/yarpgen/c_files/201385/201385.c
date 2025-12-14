/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, 7730592434845993649));
                    var_21 = (min(var_21, var_3));
                    var_22 = (max(var_22, 7730592434845993649));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    var_23 = 1610612736;
                    arr_18 [i_3] [i_3] [i_3] [i_3] = var_6;
                }
                var_24 = ((max(8388607, 909867246)));
                var_25 += (min(2684354560, -7730592434845993649));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_26 ^= 2684354559;
                            arr_24 [i_3] = max(var_11, (arr_20 [i_4 - 1] [8] [8] [i_4 + 1]));
                            arr_25 [i_3] = -7730592434845993649;
                            arr_26 [i_3] [i_4] [11] = (7730592434845993649 <= 255);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
