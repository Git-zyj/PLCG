/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = min((4591901907444275461 * var_6), (var_8 ^ var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [1] [13] [8] = ((4591901907444275461 ? -10 : 13854842166265276144));
                    var_14 = (arr_3 [10]);
                    var_15 &= max((((arr_5 [i_0 + 3] [i_0 + 2]) ? (~13854842166265276157) : (arr_3 [i_0 + 1]))), var_6);
                }
            }
        }
    }
    #pragma endscop
}
