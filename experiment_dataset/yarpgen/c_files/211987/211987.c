/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_12);
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((((arr_5 [i_0]) < 2676315674))), 127));
                arr_7 [i_0] = arr_5 [i_1];
            }
        }
    }
    #pragma endscop
}
