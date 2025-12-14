/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    var_15 = var_2;
    var_16 -= (max((((-9223372036854775807 - 1) ? -11 : var_7)), var_12));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (((var_2 << (1886 - 1880))));
                    arr_10 [i_0] [i_1] [i_2] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
