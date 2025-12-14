/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_2, (((min(1, var_12)) >> (((var_12 / 54) - 20473740)))));
    var_16 |= (max(var_9, (((-64 + 2147483647) << (((var_3 + 1881287743) - 3))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_1] [i_2] = 9519551667254672657;
                    var_17 = (((!var_0) ? (((var_13 >> (var_0 + 31848)))) : 7327585177327288826));
                    var_18 &= (((arr_3 [i_0 - 2]) ^ var_0));
                }
            }
        }
    }
    #pragma endscop
}
