/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 += ((!(arr_8 [10] [i_2] [i_1] [i_0 - 1])));
                        var_14 |= ((8191 << (3877081511861671420 - 3877081511861671412)));
                    }
                }
            }
            var_15 &= 8192;
        }
        var_16 = ((~((-(!34363)))));
    }
    var_17 = ((~(max((min(var_2, var_7)), var_12))));
    var_18 -= var_8;
    #pragma endscop
}
