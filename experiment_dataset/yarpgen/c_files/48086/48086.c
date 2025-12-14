/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(max((max(7597, 2483752000758173374)), var_5))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = -1818141749;
        var_22 -= (max((max(var_18, 9)), (((var_6 || ((max((arr_1 [1]), 1))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_23 *= ((0 | (~240)));
                            var_24 = (min(var_24, (!-5160835549347276219)));
                        }
                        var_25 = ((~(((48484619 == var_11) >> ((((7700470037912725763 ? var_10 : var_19)) + 7823604243453799378))))));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_14 [i_0] [i_1] [i_0] = var_3;
                arr_15 [i_0] [i_0] [13] [i_1] = (var_17 ? 9223372036854775807 : var_11);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_26 |= var_0;
                arr_18 [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
        var_27 = var_15;
    }
    var_28 = ((var_2 >= ((61428 ? 219 : var_14))));
    #pragma endscop
}
