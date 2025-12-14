/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_7 / var_15) >= (min(var_10, -4959919918990859012)))) ? 42 : var_5));
    var_17 = (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((~-2049377847) <= (max((arr_5 [i_0] [i_1]), -481872327))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_19 = (arr_6 [i_0] [i_2 + 1] [i_2 - 2]);
                    arr_10 [14] &= (((arr_8 [6] [i_2 - 1] [6]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2]) : 817897088));
                    var_20 = arr_4 [i_0] [i_2 - 2] [i_0];
                }
            }
        }
    }
    var_21 = (max(var_21, -537602637));
    #pragma endscop
}
