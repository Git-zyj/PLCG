/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (min(var_21, (((var_12 <= (min(((var_1 ? var_8 : 4043901155928372106)), (!2198126385452132136))))))));
    var_22 = var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((var_15 * ((((((arr_1 [i_0]) ^ (arr_3 [i_0])))) ? (((arr_1 [i_0]) & 223)) : (~var_5)))));
        arr_5 [18] &= ((~(~592343669)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_13 [i_0] = (((((arr_11 [i_1] [i_0] [i_2] [i_2]) <= var_17)) ? ((min((arr_10 [i_0] [i_1] [i_1]), (arr_10 [i_2] [i_1] [i_0])))) : (((((max(var_1, var_5)))) & (max(var_6, 18446744073709551614))))));
                    arr_14 [i_0] [i_1] [i_0] = ((~(max((arr_10 [i_0] [i_1] [i_2]), var_5))));
                }
            }
        }
    }
    var_23 = ((var_16 * (min(var_10, var_16))));
    #pragma endscop
}
