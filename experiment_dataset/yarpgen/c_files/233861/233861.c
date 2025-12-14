/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_11 >= var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_6;
                arr_7 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1 + 1]);
            }
        }
    }
    var_19 = var_1;
    var_20 = ((((min(1005633613, 676812960))) >= 2147221504));
    var_21 = var_2;
    #pragma endscop
}
