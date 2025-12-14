/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 -= (((arr_2 [i_1]) / 65));
                arr_6 [i_0] = ((~((-7948950879202125357 ? (!2665194112689636490) : ((1 ? var_13 : 7948950879202125358))))));
            }
        }
    }
    var_15 = ((!(-29672 > 0)));
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_17 = 7948950879202125356;
                var_18 = ((var_9 | (arr_9 [i_3])));
                arr_11 [i_3] = ((((arr_7 [i_2]) ? -0 : var_0)));
            }
        }
    }
    var_19 = 16;
    #pragma endscop
}
