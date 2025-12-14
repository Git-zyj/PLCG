/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = var_5;
                    var_12 = var_0;
                    var_13 &= (!var_3);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        var_14 = (((var_5 / var_4) ? var_4 : (var_0 / -144115188075855872)));
                        var_15 = (((~2147418112) < var_6));
                        var_16 = var_1;
                    }
                }
            }
        }
        arr_15 [i_0] = var_7;
        var_17 ^= ((14 == (var_1 != 706714682)));
    }
    var_18 = ((~(!41)));
    var_19 ^= ((var_0 ? ((((!(((var_7 ? 14 : var_2))))))) : ((((max(var_7, 14))) ? (2305843009196916736 / var_10) : var_6))));
    #pragma endscop
}
