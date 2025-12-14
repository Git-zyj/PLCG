/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(((63 ? -580955448 : -27631)), (!9343083296685205188))), (((var_8 && 0) - 157))));
    var_14 ^= var_12;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = var_11;
        var_16 *= (~var_9);
        arr_2 [i_0] |= -580955470;
        var_17 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 -= ((var_12 && (arr_5 [i_2 + 1])));
                    var_19 = (((arr_5 [i_1]) + (arr_10 [i_1] [i_1] [i_2] [i_3])));
                    var_20 = 26;
                    arr_12 [i_1 - 1] [i_1 - 1] = 35747322042253312;
                }
            }
        }
        var_21 = ((-5 * (var_4 > var_5)));
    }
    #pragma endscop
}
