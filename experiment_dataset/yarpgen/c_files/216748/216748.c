/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (!244);
                    var_21 = ((~((1 ? 2408869676 : -1))));
                    var_22 = (((arr_4 [i_1 + 1] [i_1 + 1] [i_2 - 2]) | var_17));
                    var_23 = ((-(((arr_4 [i_0] [i_1] [i_2]) + -1))));
                }
            }
        }
        var_24 = (((((63396 ? 1 : 1))) ? -3589179119166954988 : 33111));
    }
    var_25 = (((var_0 ? var_4 : var_17)));
    #pragma endscop
}
