/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 -= -1198927294;
                    var_19 = ((438628437 ? 0 : -1));
                    arr_7 [i_2] = (-1 ^ var_9);
                }
            }
        }
        var_20 |= (((((~(max(var_16, var_8))))) ? var_5 : ((min((arr_3 [i_0]), (arr_4 [i_0]))))));
    }
    var_21 = ((((((max(var_7, var_12) + 2147483647)) >> (var_0 - 1901264720)))));
    var_22 = (~var_8);
    #pragma endscop
}
