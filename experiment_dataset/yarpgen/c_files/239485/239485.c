/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        var_19 = 1;
        var_20 = ((1 ^ ((-(~var_18)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 = var_10;
                        arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] = (~1);
                        var_22 = 18446744073709551592;
                        arr_13 [12] [2] [i_0] [i_1] = (min(var_9, (-4201050521373248120 <= 8512854932465646039)));
                        var_23 += ((+((((~0) <= 8512854932465646050)))));
                    }
                }
            }
        }
    }
    var_24 = -var_3;
    var_25 = (min(var_25, var_5));
    #pragma endscop
}
