/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((57 ? (max((arr_0 [i_1 - 1]), (min(var_4, (arr_3 [i_0]))))) : (55477 && -8482973398911894)));
                var_16 = (max(-7292310378075371407, 0));
                arr_5 [16] [16] = (arr_0 [i_0]);
                var_17 &= ((~(max(-493779765, ((10058 ? (arr_1 [i_1 - 1] [i_1 - 1]) : 10059))))));
                arr_6 [20] = (arr_1 [11] [i_1 + 2]);
            }
        }
    }
    var_18 -= var_0;
    var_19 &= var_9;
    #pragma endscop
}
