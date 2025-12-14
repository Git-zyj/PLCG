/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 13808723714225906951;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2 - 1] = (((((!(((var_13 ? var_5 : var_7)))))) > (arr_5 [i_1] [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((((var_19 - (arr_3 [i_0] [i_0] [i_2]))) % (var_14 * var_0)));
                        var_22 -= ((var_8 ? (arr_3 [i_2 + 3] [i_2 + 3] [i_2 + 3]) : var_9));
                        var_23 &= var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
