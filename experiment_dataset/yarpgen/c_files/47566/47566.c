/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = ((((min(102, var_3))) != (((((max(var_12, var_12))) || var_2)))));
    var_18 = ((((((9053726494653342485 && 4294967295) >> (var_7 - 119)))) & (max(((min(42, 1))), (min(var_4, 1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((-44 != 536870910) & 3782635591468993502));
        arr_3 [i_0] = (((arr_1 [i_0 + 1] [i_0 + 2]) & var_15));
        var_19 = (((((arr_1 [i_0 - 2] [i_0 - 2]) + 4294967295)) < var_9));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (318828166 & 536870935);
                    arr_11 [i_0 - 1] [i_0 - 1] [i_2] = (44 & 1);
                }
            }
        }
    }
    #pragma endscop
}
