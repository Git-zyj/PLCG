/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_1 [i_0] [i_1]) ? 56385464 : (min((arr_0 [i_0]), 13710551407459167250))))) ? ((((arr_3 [i_0] [i_1 - 1] [i_1]) * (arr_3 [i_0] [i_1 - 1] [i_1 + 1])))) : (((arr_3 [i_0] [i_1 - 1] [i_1 + 1]) ? (arr_3 [i_0] [i_1 + 1] [i_1 + 1]) : var_2))));
                arr_6 [i_0] = (arr_2 [i_1 - 1]);
                arr_7 [8] [8] |= (arr_2 [i_0]);
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
