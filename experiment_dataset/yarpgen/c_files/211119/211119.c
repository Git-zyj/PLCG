/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~(~var_8)))) ? 50775 : ((var_1 ? var_0 : var_10))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((((58243 | -730657673) && -11687))) | 14770));
                arr_5 [i_0 + 1] [1] [9] = (((((arr_1 [i_0 - 2] [i_0 - 3]) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0 - 2] [i_0 - 3]))) ^ -11687));
            }
        }
    }
    #pragma endscop
}
