/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = ((((arr_8 [3] [6] [i_2 - 1]) & (arr_8 [i_2] [i_2] [i_2 - 2]))));
                    var_21 = (~(((((arr_1 [i_2 - 2]) + 2147483647)) >> (var_3 + 9089702843346466961))));
                    var_22 -= (max((max(var_7, (!var_1))), (~var_14)));
                }
            }
        }
    }
    var_23 += max((((var_7 < ((var_5 ? var_18 : var_10))))), var_5);
    var_24 += var_13;
    #pragma endscop
}
