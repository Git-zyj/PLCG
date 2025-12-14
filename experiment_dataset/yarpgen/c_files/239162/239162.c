/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 ^= (max((min(1, 11163567440611488856)), (max((arr_4 [i_2] [i_2 + 1] [i_2]), (arr_4 [i_2] [i_2 + 1] [i_2])))));
                    arr_8 [i_0] [i_0] [i_1] = (~-18066185326454192194);
                }
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
