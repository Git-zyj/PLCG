/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = -116;
                    var_14 = (min((~var_3), (((arr_5 [i_2] [6] [6] [7]) >> (var_4 - 1686138339)))));
                    var_15 -= (((((arr_3 [i_0 + 1]) ? 9223372036854775807 : (arr_3 [i_0 - 2]))) >> (((arr_3 [i_0 - 1]) & 0))));
                    var_16 -= ((min(268435455, var_4)));
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
