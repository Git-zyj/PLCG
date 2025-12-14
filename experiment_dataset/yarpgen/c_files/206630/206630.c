/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 149206333891341252;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((min(var_9, (arr_4 [i_1] [i_0]))))) - (max((arr_3 [i_0 + 2]), (((var_0 + (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_1] [i_1] [i_1] = ((((max((arr_4 [i_0] [i_0 + 2]), 3715106089699642166))) * (arr_2 [i_0 + 2] [i_0 + 2])));
                arr_8 [i_0] [i_1] [i_1] = (max(((-(max(-6027519970861618812, (arr_5 [3] [21]))))), (arr_5 [i_0] [11])));
            }
        }
    }
    #pragma endscop
}
