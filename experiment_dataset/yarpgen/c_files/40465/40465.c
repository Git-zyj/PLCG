/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((~var_5), 2491606486572104353)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (arr_6 [i_0] [i_1] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [12] &= ((((((arr_1 [i_0]) >> (-3034 + 3042)))) ? (min(-var_0, (arr_4 [i_0] [i_0]))) : (min((max(var_6, (arr_0 [10]))), var_2))));
                }
            }
        }
    }
    #pragma endscop
}
