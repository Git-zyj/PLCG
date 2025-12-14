/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_0] [i_1] [7] = (((arr_8 [i_0] [i_1] [i_1] [i_2]) ? (max(0, var_15)) : ((((var_11 || (arr_5 [i_2 + 1] [i_1 - 1])))))));
                    arr_11 [i_1 + 3] [i_1] [8] [i_0] = (arr_2 [i_1 + 3] [i_2]);
                }
            }
        }
    }
    var_17 = var_11;
    var_18 = (max(var_18, -23));
    #pragma endscop
}
