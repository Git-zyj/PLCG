/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_13 |= ((~(~22830)));
                            var_14 |= (((1 || 9083) ? (min((((~(arr_8 [i_0] [i_0] [i_2] [i_2])))), (max(var_5, var_9)))) : var_3));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = (((((var_10 ? 0 : 0))) ? var_3 : -var_4));
                            arr_15 [i_0] [i_1] = var_10;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [10] [i_0] [3] [i_7] = -13175;
                            arr_24 [i_0] [i_1] [i_5] [i_0] [i_7] = (~var_9);
                            var_15 |= ((253 ? (~var_9) : (!-var_11)));
                            arr_25 [i_0] [i_1] [i_5] [8] [i_0] = 0;
                        }
                    }
                }
            }
            arr_26 [i_0] [i_1] [i_0] = max(-var_3, 13178);
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            var_16 = var_4;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_17 += ((!var_11) ? var_0 : (~253));
                        var_18 = (max(var_18, 0));
                        arr_37 [i_0] [i_8 - 2] [i_0] = 255;
                    }
                }
            }
            var_19 = (!var_4);
        }
        var_20 = ((-(arr_13 [i_0] [i_0] [i_0] [12] [14] [i_0])));
    }
    #pragma endscop
}
