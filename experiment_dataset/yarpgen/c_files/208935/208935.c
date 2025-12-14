/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(var_3, (9953490298290035286 % var_2))), var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((!65533) < var_16));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_19 *= (var_1 || var_7);
                        arr_11 [i_3] [i_2] [i_1 - 2] [i_0] = var_14;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_20 ^= (8493253775419516346 < 0);
                        arr_16 [i_0] [12] [i_0] [4] = (!var_3);
                        var_21 = (max(var_21, ((((var_8 + 2147483647) << (8513 - 8513))))));
                        arr_17 [i_0] [i_2] [i_2] [3] = (!var_0);
                    }
                    arr_18 [i_0] [i_2] |= ((var_16 || var_13) + var_4);
                }
            }
        }
        arr_19 [i_0] = (~var_4);
    }
    var_22 = var_5;
    var_23 = (max((((((var_1 ? var_6 : var_5))) & var_1)), ((max(((var_8 ? 1 : var_11)), var_6)))));
    #pragma endscop
}
