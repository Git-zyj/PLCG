/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((max(1, 1))));
                                arr_14 [i_2] [i_0] [i_4] = (max((((((var_3 ? -65 : 1))) ? var_4 : (1 - var_1))), (var_8 + 1)));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (max(var_14, ((max(((((max(-30, var_12))) ? (0 || var_4) : ((max(-39, var_6))))), (((~var_8) * 120)))))));
                        arr_17 [i_0] [i_1] [i_2] [i_5] = (min(((min(1, (min(var_11, 1))))), (min((var_7 || -16), (min((-127 - 1), 80))))));
                        var_15 = ((((var_9 << ((1 ? 1 : -64)))) >> ((((min(var_1, 1))) + 115))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 = -var_4;
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = ((-1 ? var_12 : ((var_7 ? 1 : (~1)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_17 = (min(var_17, ((max(127, (var_6 * -125))))));
        var_18 = ((~(0 + 124)));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        var_19 = (min(var_19, ((((0 | 1) + var_11)))));
        var_20 = (min(var_20, -79));
    }
    #pragma endscop
}
