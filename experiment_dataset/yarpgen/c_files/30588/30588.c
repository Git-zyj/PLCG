/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_4;
    var_13 = (~6144);
    var_14 = (((~(min(-645207724, 255)))));
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((-256 + 2147483647) << ((((((min(-64, 264))) + 82)) - 18))));
                    arr_9 [i_0] = (((var_11 == 1356918264) ? var_3 : 126));
                }
            }
        }
    }
    #pragma endscop
}
