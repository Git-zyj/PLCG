/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (min(var_20, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_1 [2])));
        var_22 = (min(var_22, ((((var_2 | var_9) ? var_8 : (((6 ? 2 : (arr_0 [i_0])))))))));
        arr_3 [i_0] = (var_10 < var_5);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1 - 3] = (var_17 << (232 - 230));

        for (int i_2 = 4; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_23 = (min(var_23, (var_17 <= var_14)));
                            arr_20 [i_1] [i_1] [i_2] [i_1] [i_5] [i_4] &= ((var_10 ? ((var_14 ? 250 : 254)) : var_3));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (((!((((arr_13 [i_2 + 1] [i_2] [i_2] [i_2]) % (arr_12 [i_1 + 1] [i_2] [i_2])))))))));
        }
        arr_21 [i_1] = ((249 ^ (arr_17 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 3])));
        var_25 = (arr_2 [i_1 - 1]);
        var_26 = (min(var_26, (arr_8 [i_1 - 2] [i_1 + 1])));
    }
    #pragma endscop
}
