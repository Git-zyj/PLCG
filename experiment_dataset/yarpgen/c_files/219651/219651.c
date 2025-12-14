/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 *= 104;
                var_13 = (min(var_13, (arr_0 [i_0])));
                arr_4 [i_0] [i_1] [i_0] = var_4;
            }
        }
    }
    var_14 = max(15025632049169945875, -30);
    #pragma endscop
}
