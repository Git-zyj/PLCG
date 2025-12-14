/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((~((var_12 ^ (arr_3 [i_1] [i_0])))));
                var_14 = ((~(max(((176 ? 65535 : 7340032)), var_10))));
            }
        }
    }
    var_15 = ((((var_7 | (((max(var_6, var_6)))))) & ((((!((max(var_6, var_2)))))))));
    #pragma endscop
}
