/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = 4398046511103;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = 2187450724;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [6] [i_1] [i_2] &= 255;
                        var_18 = -5742003939157819948;
                        arr_12 [i_0] [i_0] [i_0] [6] = -4943612227712456810;
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_19 = 3;
            arr_15 [i_0] = 7;
            var_20 = (max(var_20, 65535));
            arr_16 [7] [i_0] |= 14199;
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_25 [8] = 4943612227712456810;
                        var_21 = 65535;

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_22 = 1023;
                            arr_29 [i_0] = -16;
                        }
                    }
                }
            }
        }
        var_23 += 89;
    }
    #pragma endscop
}
