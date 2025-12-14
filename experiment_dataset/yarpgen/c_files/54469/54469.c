/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-23527 ? (max(((0 ? var_11 : var_3)), 23527)) : -var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((~(arr_1 [i_1 - 2] [i_1 + 2])));
                    var_19 = ((arr_8 [1] [i_1 + 3] [i_1 + 3]) >= 42);
                    var_20 -= 255;
                }
            }
        }
        var_21 *= 62;
        arr_9 [i_0] [i_0] = (((arr_2 [i_0]) ? (((1 ? 38 : 0))) : (arr_7 [4] [4])));
    }
    #pragma endscop
}
