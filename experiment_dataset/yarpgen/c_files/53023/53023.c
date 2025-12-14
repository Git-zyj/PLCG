/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1930424957;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = (arr_0 [i_1]);
                    var_14 = (min(var_14, var_1));
                    arr_8 [i_0] [i_0] [i_0] = (min((((arr_2 [4] [i_0]) ? 0 : (!1))), ((-(1944399548 - var_2)))));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        var_15 = (((((((1944399556 < (arr_1 [i_2] [i_2]))))) & ((var_1 ? var_0 : (arr_0 [i_0]))))));
                        var_16 = 1544558564;
                    }
                }
            }
        }
    }
    #pragma endscop
}
