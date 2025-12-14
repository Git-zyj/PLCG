/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (0 * var_10);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 |= arr_0 [0] [i_0];
        var_16 = (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 32748)))) ? -49 : (((arr_0 [0] [i_0]) ? var_4 : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = -4096;
        var_17 = 142;

        /* vectorizable */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [20] [i_3] [i_4] = (arr_6 [i_1]);
                        var_18 = -49;
                    }
                }
            }
            var_19 = (25 ? (!-30) : 120);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_20 = (min(var_20, (arr_7 [i_5] [i_5] [10])));
            var_21 = (min(var_21, 12288));
            var_22 = 127;
        }
        var_23 = (max(((min((arr_15 [i_1 + 1]), var_1))), (arr_6 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    arr_21 [i_1] [i_6] = 0;
                    var_24 = 4115;
                }
            }
        }
    }
    #pragma endscop
}
