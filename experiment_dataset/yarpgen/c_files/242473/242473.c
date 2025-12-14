/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 2717819639;
    var_13 = var_6;
    var_14 = (~1577147656);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = ((~((~((var_0 ? 2717819628 : (arr_1 [i_2] [i_3])))))));
                        arr_11 [i_3] [i_1] [i_2] [i_3] [i_2] [i_2] = 28923;
                        arr_12 [i_3] = var_7;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_16 = 2717819625;
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = 2717819609;
                        var_17 = (((arr_4 [i_0 + 1] [i_0]) + (arr_10 [i_1] [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                        arr_17 [i_0] [i_4] = (((var_11 < var_9) * var_3));
                    }
                    arr_18 [i_0] = ((-((min((arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 1]), (arr_8 [i_0 - 2] [i_1] [i_0 - 2] [i_0 + 1]))))));
                    arr_19 [i_0] = (min(((8882039397331021174 ? 2717819614 : -4130599987872149429)), ((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]) * var_11)))));
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
