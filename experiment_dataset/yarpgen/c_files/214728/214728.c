/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_5 | (min(var_11, var_15))))) || var_3));
    var_18 -= ((((max(var_14, (!3311196654577893910)))) ? (((((max(311739933, var_8))) < ((var_13 ? var_13 : -25691))))) : ((max(var_16, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((!(((~(~-27043))))));
                var_20 = ((max(311739929, -311739930)));
                arr_5 [i_0] = 3224235710;
            }
        }
    }
    #pragma endscop
}
