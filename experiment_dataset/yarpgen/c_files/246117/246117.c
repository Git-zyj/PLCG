/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (~(arr_2 [i_0 + 1]));
                arr_5 [9] [i_0] [13] = ((-(8507596356712987922 / 2)));
                arr_6 [i_0] = arr_4 [15] [15] [15];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = var_0;
                var_19 = (min(var_19, 5985732528270092337));
                arr_12 [i_2 + 2] = (max(-2058331828, (arr_8 [i_3])));
            }
        }
    }
    #pragma endscop
}
