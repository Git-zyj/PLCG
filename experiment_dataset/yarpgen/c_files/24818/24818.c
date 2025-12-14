/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(719185011, -30968);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (((var_5 ^ (arr_6 [i_2]))));
                    var_17 = -1;
                    var_18 = ((max((arr_8 [i_0] [i_2] [i_2]), 141)));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_19 *= ((!(arr_11 [i_0] [i_1] [i_3 - 2] [i_3] [i_3] [i_3])));
                        arr_12 [i_0] [i_0] [i_0] [22] = ((~(((arr_2 [i_2]) ? 92 : 0))));
                    }
                }
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((-1576887774 <= (min(-73, 2360002880136014217))));
                        arr_17 [i_1] |= arr_10 [i_4 + 1];
                        var_21 = var_6;
                        var_22 = -31;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_4] [i_4] [i_6] = 1576887774;
                        var_23 = 128;
                        arr_21 [i_4] = (((arr_6 [i_4 - 1]) - (~1946055411)));
                        arr_22 [i_0] [i_4] [i_4 + 1] = var_2;
                    }
                    var_24 = var_11;
                    var_25 = ((var_2 / (min(1157249184, -1576887774))));
                }
                var_26 = 1470034315;
            }
        }
    }
    #pragma endscop
}
