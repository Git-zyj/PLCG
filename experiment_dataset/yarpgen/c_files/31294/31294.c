/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = -2024583870;
                arr_4 [i_1] [i_1] = ((((~(arr_2 [i_1 - 2] [i_1 + 4]))) != ((4028198279640351684 ? -1213239220 : (1213239214 + var_5)))));
                var_16 |= var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_2] [i_3] = var_3;
                arr_10 [i_3] [i_2] = var_1;
                arr_11 [i_2] [i_3] = 3154928524;
            }
        }
    }
    var_17 = ((((((var_0 ? 5 : var_12)) ? (~496) : (~var_11)))));
    var_18 = ((0 ? var_6 : (var_14 == var_14)));
    var_19 = var_12;
    #pragma endscop
}
