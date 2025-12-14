/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = var_6;
                var_18 = 7713168525196316611;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = (arr_10 [i_3] [i_3]);
                var_20 = (min(((83 ? var_4 : (arr_10 [i_3] [i_3]))), (((arr_10 [i_3] [i_3]) ? var_15 : (arr_10 [i_3] [i_3])))));
                arr_13 [i_3] [i_3] = (((((((((arr_12 [i_2] [i_2]) - 163))) - (min(var_11, 163))))) ? var_10 : (var_6 - -21566)));
            }
        }
    }
    #pragma endscop
}
