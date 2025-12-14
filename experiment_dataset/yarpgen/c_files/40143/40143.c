/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (arr_4 [i_0 - 1] [i_0] [i_0])));
                arr_6 [i_0 - 1] = 12;
                var_11 = ((-37 ? ((-(-1086986811080777201 - -30021))) : -1478));
                arr_7 [i_0] [i_1] = (~var_7);
            }
        }
    }
    var_12 = (max(var_12, var_7));
    var_13 = (((((var_2 ? var_5 : var_5)))) ^ var_9);
    #pragma endscop
}
