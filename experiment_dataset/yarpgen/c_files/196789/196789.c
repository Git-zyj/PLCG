/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 -= (((((var_8 ? var_7 : var_3))) ? var_3 : var_4));
                    var_15 += (((((~(arr_2 [i_1] [i_1 - 1])))) ? var_12 : (((arr_1 [2]) ? var_8 : var_8))));
                }
            }
        }
    }
    #pragma endscop
}
