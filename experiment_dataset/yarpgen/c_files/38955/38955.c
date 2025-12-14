/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = var_8;
                    arr_9 [i_2] [i_0] = ((((max((((arr_3 [i_2]) ? var_14 : 1)), var_6))) ? ((var_11 ? 511 : (!var_11))) : var_3));
                    var_16 = ((var_9 ? ((((var_4 ? var_5 : 50)))) : ((-(min(18446744073709551615, var_11))))));
                }
            }
        }
        var_17 = ((((var_12 ^ (arr_0 [i_0 - 2])))) && (((arr_0 [i_0 + 1]) && var_14)));
        var_18 = ((var_4 ? (max((~0), var_1)) : (~1)));
    }
    #pragma endscop
}
