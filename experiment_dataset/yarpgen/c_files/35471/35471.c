/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((-27063 ^ var_8), (((9774 << (2901355649804555633 - 2901355649804555630))))));
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = 15545388423904996013;
                var_20 |= (min(((~(arr_4 [i_0] [i_0]))), ((~(~-3983847800253019187)))));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
