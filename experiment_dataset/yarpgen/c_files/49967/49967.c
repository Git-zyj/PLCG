/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 6836344583286990685;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = (max(((((max(6836344583286990683, 10272))) ? (!var_8) : (max(44819, (-9223372036854775807 - 1))))), var_6));
                        arr_12 [18] [i_1] = var_1;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_17 [i_1] [4] [i_4] [i_5] [i_1] [i_4] = ((6836344583286990685 ? 809870778 : 0));
                        var_19 *= (!-6836344583286990685);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_20 = var_3;
            var_21 ^= -7427645377536256635;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 16;i_8 += 1)
            {
                {
                    var_22 = ((var_11 ? (((var_9 ? -85 : 68))) : 15837));
                    var_23 = (max(var_23, (((var_12 ? (((arr_9 [i_7] [i_0] [i_7] [i_0] [i_0]) ? ((127 ? 1 : 2692403323491257032)) : ((4190208 ? 0 : -6836344583286990685)))) : 846)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_24 = ((((((7427645377536256635 ? 482746971 : -6836344583286990693) != (((((arr_28 [i_0 - 1]) < var_11)))))))));
                                var_25 = (arr_29 [i_12] [11] [i_9] [i_0]);
                                arr_37 [i_9] [i_9 + 2] [i_9] = (((max(((-262938717 ? 18604 : -6836344583286990685)), var_12)) <= ((((var_11 ? var_9 : (arr_28 [12])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_26 = (arr_22 [i_0]);
                                var_27 += 30712;
                                arr_42 [i_14] [i_13 - 1] [i_9] [i_9 + 2] [i_9] [7] [1] = (max((max((max(1, 6836344583286990684)), 65532)), 24818));
                                arr_43 [i_9] = (arr_33 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, (4 - 0)));
    var_29 = ((min(0, (((var_9 ? -15431 : var_7))))));
    #pragma endscop
}
