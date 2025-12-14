/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((min(1868132049, ((var_13 ? (arr_5 [i_0] [i_1]) : (arr_5 [3] [i_1]))))) % (min((-9223372036854775807 - 1), -1270633287))));
                arr_8 [i_0] [i_0] [i_1] = ((224 << ((((~(arr_6 [5] [i_1]))) + 6))));
                arr_9 [i_0] = (24764 ? (-2147483647 - 1) : 33);
            }
        }
    }
    var_17 = (min((((~((var_13 ? 61346 : var_8))))), var_9));
    var_18 = (var_9 ? 13 : (~0));
    var_19 = var_6;
    #pragma endscop
}
