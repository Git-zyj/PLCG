/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [12] |= max(((25 ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_11)), ((max((!var_11), ((var_4 ? (arr_1 [i_0]) : var_2))))));
                var_12 = var_0;
            }
        }
    }
    var_13 = var_7;
    var_14 = ((29824 & (min((max(var_4, var_5)), var_0))));
    #pragma endscop
}
