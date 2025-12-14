/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (203 >> 0);
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 1] = (((((3120003473 ? -98 : -1452108809714038910))) < (arr_4 [i_0] [i_0 + 3])));
                var_20 -= var_16;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 = (max(var_21, (!-1886239152)));
                    arr_10 [i_0] [i_1] = (((arr_7 [i_0]) / (arr_9 [23] [i_1] [i_1])));
                    arr_11 [i_0] [i_1] [i_2] = ((1 & (arr_4 [i_0] [i_2])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] = 4351187741673306569;
                        var_22 &= ((((((arr_13 [i_0] [i_1] [i_1] [22]) && var_11))) > ((~(arr_8 [i_0] [i_1] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_4] = (arr_15 [i_0] [i_0]);
                        arr_20 [i_0] = (((arr_4 [i_0] [i_0]) < 65535));
                        arr_21 [i_0 + 2] [i_0 + 2] [i_2] [i_0] = (((arr_15 [i_0] [i_0]) ? var_4 : 1125846170930198903));
                    }
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        var_23 &= 1989460111;
                        var_24 = ((1 - (arr_0 [i_0])));
                        var_25 = (!var_15);
                    }
                }
            }
        }
    }
    var_26 = 2147483647;
    #pragma endscop
}
