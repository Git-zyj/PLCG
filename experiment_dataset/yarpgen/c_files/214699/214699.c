/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = ((~(arr_5 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_0] [i_0] = (((~1826651105) ? (((arr_2 [7] [i_1 + 3]) ? (arr_2 [8] [i_1 + 3]) : (arr_2 [i_0] [i_1 - 2]))) : (((arr_2 [i_0] [i_1 + 2]) ? 3867709464831558561 : (arr_2 [i_1] [i_1 + 3])))));
                }
            }
        }
    }
    var_12 = (min(var_12, (((~((((((var_10 ? var_0 : var_0)) + 9223372036854775807)) << (360417210 - 360417210))))))));
    #pragma endscop
}
