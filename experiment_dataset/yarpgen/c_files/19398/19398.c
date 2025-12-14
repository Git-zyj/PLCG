/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = min(((((((arr_5 [i_0]) ? (arr_2 [i_1]) : var_12))) ? 17024959142831186522 : var_14)), (~0));
                    var_19 = (max(var_19, (min(18446744073709551610, 18446744073709551603))));
                }
            }
        }
    }
    #pragma endscop
}
