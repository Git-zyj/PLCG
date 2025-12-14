/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_4, (((~var_7) - (((arr_2 [i_1]) * var_1))))));
                var_15 -= (~var_0);
                var_16 = (~-120);
                var_17 = (min(32331, 1759814176));
                var_18 = ((((max(((((arr_2 [i_1]) && (-9223372036854775807 - 1)))), (arr_6 [i_0])))) + 32331));
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
