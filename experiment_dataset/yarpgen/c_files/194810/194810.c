/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = (-(((arr_2 [i_1]) ? var_10 : (arr_2 [i_0]))));
                var_18 *= ((!((min(-27215, 45240)))));
                arr_7 [i_1] [5] = var_4;
            }
        }
    }
    #pragma endscop
}
