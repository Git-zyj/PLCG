/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_0;
                var_16 &= ((((((var_4 - var_8) ? var_11 : var_11))) ? (min((arr_1 [6] [i_1 - 2]), (arr_3 [i_0 + 2] [i_1 + 1]))) : var_14));
                var_17 += ((((var_4 || var_8) << ((((arr_2 [i_1] [i_0]) < var_9))))));
            }
        }
    }
    var_18 = ((~(max(var_2, (min(524288, var_11))))));
    #pragma endscop
}
