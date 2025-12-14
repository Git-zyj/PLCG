/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = 61;
                                arr_16 [0] [1] [i_2] [9] [i_2] = 61;
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = 1;
                                arr_18 [i_1] [i_2] [i_3] [i_4] = 9693;
                            }
                        }
                    }
                    arr_19 [i_0] [i_2] [1] = 60;
                    arr_20 [i_2] = 194;
                    var_23 = 61;
                }
            }
        }
        var_24 = 61;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_5] [11] [i_7] [5] = 416;
                                arr_32 [16] [i_5] [16] [i_5] [i_5] [6] = 170;
                            }
                        }
                    }
                    var_25 ^= 219;
                    arr_33 [i_0] [i_0] [i_0] = 195;
                }
            }
        }
    }
    #pragma endscop
}
