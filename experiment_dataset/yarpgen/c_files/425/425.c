/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = ((((max((max(var_0, var_5)), ((min((arr_2 [i_0] [i_1 + 1]), (arr_2 [3] [i_1 + 1]))))))) | (((((var_5 ? (arr_2 [1] [1]) : (arr_2 [0] [i_1 - 1])))) - 18446744073709551615))));
                arr_7 [i_1] = 13;
            }
        }
    }
    var_16 &= var_0;
    #pragma endscop
}
