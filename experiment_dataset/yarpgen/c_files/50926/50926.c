/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((-var_5 + ((((~(arr_2 [i_0] [i_1])))))));
                var_16 *= (((~((-1159282492 ? (arr_5 [i_0]) : (arr_3 [i_0]))))));
            }
        }
    }
    var_17 = (max(((((min(1, var_10))) ? 240 : ((var_8 ? 13018 : var_5)))), 9340));
    var_18 = var_13;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = -4294967271;
        var_20 = (~var_9);
    }
    #pragma endscop
}
