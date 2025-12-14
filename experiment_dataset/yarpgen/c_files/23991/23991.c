/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] = (~1);
                var_12 = (min((max(var_10, 2147483647)), (arr_4 [i_0] [i_1 - 3])));
                var_13 = ((max(((min(var_8, var_8))), (max(25, 13456)))));
                arr_8 [i_1] [i_0 + 1] [i_1] = var_2;
            }
        }
    }
    var_14 |= var_8;
    var_15 = (max(13456, ((var_9 ? (~12) : (max(var_11, var_0))))));
    #pragma endscop
}
