/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = var_3;
                var_21 = ((((((arr_1 [i_1]) + (arr_4 [i_0] [i_1] [i_0])))) ? ((((max((arr_0 [i_1 + 1]), 7150))))) : (arr_0 [i_0])));
                var_22 -= max(((-(arr_4 [i_1] [i_1] [20]))), (((!(arr_5 [i_1 + 2] [i_1 + 1])))));
            }
        }
    }
    var_23 = ((var_7 ? var_3 : var_0));
    var_24 = var_2;
    #pragma endscop
}
