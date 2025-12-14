/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? (!-6) : ((var_3 ? ((var_9 ? var_8 : -1624061832)) : var_10))));
    var_21 = ((var_14 ? (((((14869091814074957546 ? 51 : var_1))) ? var_13 : ((-14 ? var_0 : var_17)))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_22 ^= (arr_1 [i_0 + 1] [6]);
                arr_6 [i_0] [i_1] [i_1 - 1] = (((var_6 ^ var_0) ? ((-(max(var_8, (arr_0 [i_0 - 1]))))) : (min((arr_0 [i_0 - 2]), var_6))));
                arr_7 [i_0] [5] = (72 - 211);
            }
        }
    }
    var_23 = ((var_16 > (min(((4244189988 ? 2877697988 : 5)), var_9))));
    #pragma endscop
}
