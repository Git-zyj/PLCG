/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_2 ? var_14 : 0)) != 2622873591)) ? var_4 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((-1 ? -4 : var_6))) % ((((var_1 ? (arr_1 [5] [3]) : var_12)) + var_10))));
                var_16 = 4;
            }
        }
    }
    #pragma endscop
}
