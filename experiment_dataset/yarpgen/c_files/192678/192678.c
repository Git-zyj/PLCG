/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] = -4024981974732331313;
                    var_13 = ((((!(!var_2))) ? ((max(5409695952367061858, (arr_4 [i_0 - 1] [i_0 + 3] [i_1 + 1])))) : (max((((17 ? var_2 : var_4))), (arr_2 [i_1 + 1])))));
                    var_14 = var_1;
                }
            }
        }
    }
    var_15 = (min(var_4, ((!((max(-5409695952367061859, var_8)))))));
    #pragma endscop
}
