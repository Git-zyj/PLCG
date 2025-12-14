/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = (~var_4);
    var_17 = ((!(((((min(var_4, var_12))) ? ((1 ? 152825141 : var_10)) : var_5)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((~-4334), 42254)))));
        var_19 = var_4;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] |= var_4;
                        var_20 |= (max(23288, (arr_0 [i_2])));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = ((var_10 - (arr_3 [i_1 + 1])));
    }
    var_21 = ((((max(var_4, -var_13))) ? var_13 : var_13));
    #pragma endscop
}
