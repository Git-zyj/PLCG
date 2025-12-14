/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (min(-32760, 255))));
                    arr_7 [i_0] [i_1] = ((-(((arr_3 [i_1 + 1] [i_1 + 1] [i_0]) ^ var_3))));
                    arr_8 [i_0] [i_0] [i_2] = (!var_7);
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_13 = (max(1819235383, 49152));
        var_14 = var_7;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 = (max(-248, 24847));
        arr_13 [i_4] [12] = arr_10 [i_4];
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_16 = -119;
        var_17 *= var_0;
    }
    #pragma endscop
}
