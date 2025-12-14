/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 ^= max((((30 ? 4254001539044690663 : (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (max(2, 11634577884356791186)) : (arr_0 [i_0] [i_0]))));
        var_20 = (~2);
        var_21 -= 15918431937171064081;
        var_22 |= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_23 -= (~46761);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] &= 25165824;
                    var_24 = var_3;
                    var_25 += 21;
                    var_26 = (max(var_26, var_16));
                }
            }
        }
        arr_12 [i_1 - 1] &= 23;
    }
    var_27 = var_11;
    var_28 = var_3;
    #pragma endscop
}
