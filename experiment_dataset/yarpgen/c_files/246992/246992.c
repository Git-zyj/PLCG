/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += max(((min(1, -5678))), var_2);
    var_12 = var_7;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 -= (((((~(arr_1 [i_0 - 1])))) | (~var_6)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((!((((arr_12 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2]) - (arr_10 [i_0] [i_0] [i_0])))))))));
                            arr_17 [i_0] [i_1] [i_1] [19] [i_0] [i_4 + 2] [i_3] = (~0);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_15 = (arr_22 [i_0 - 1] [10]);
                        arr_24 [i_6] [i_1] [14] [i_6] = (~1779316262083955982);
                        var_16 += ((-40 ? -1779316262083955981 : (arr_18 [i_1])));
                        var_17 = (min(var_17, (82 || -1803896407)));
                    }
                }
            }

            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                var_18 = (((((arr_12 [i_7] [1] [0] [i_0 + 1] [0] [i_0]) + 2147483647)) >> (((arr_18 [i_0 + 1]) - 3832215152))));
                arr_29 [i_1] [i_1] = ((!(((var_10 >> (((arr_12 [i_1] [i_1] [i_1] [i_1] [8] [i_7]) + 1706637969)))))));
            }
            var_19 += (((arr_14 [i_0 + 1] [i_0 + 2]) < (arr_14 [i_0 + 2] [i_0 + 1])));
        }
    }
    #pragma endscop
}
