/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((31232 && var_8) ? (116 == -987446882160321641) : (max(-710061298, -987446882160321641)))))));
                var_13 -= (arr_1 [i_1]);
                arr_6 [i_1] = ((-(((arr_5 [i_1 - 1] [i_1]) ? (arr_1 [i_1 - 1]) : var_9))));
                var_14 = -1;
            }
        }
    }
    #pragma endscop
}
