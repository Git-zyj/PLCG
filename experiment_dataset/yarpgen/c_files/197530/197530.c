/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1999366519;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!62779);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_1 [i_1])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [1] [i_4] = (((arr_12 [i_0] [i_0] [i_0] [1] [i_0]) / (arr_12 [i_0] [18] [i_0] [4] [i_4])));
                            var_14 = 9361;
                            arr_16 [i_2] [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] = ((0 ? 0 : 46629));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_15 = (arr_0 [i_0]);
                            var_16 &= (0 | 46642);
                            var_17 = ((!(arr_19 [i_0] [i_0])));
                            var_18 = ((arr_12 [i_0] [i_6] [i_0] [i_5] [i_6]) / var_0);
                        }
                    }
                }
            }
        }
        var_19 = (arr_14 [i_0] [14] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
