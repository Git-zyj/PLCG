/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_9 ? var_13 : var_8)) < ((0 ? 2147483648 : var_10)))))));
    var_17 = (max((((((max(var_2, var_1))) ? -var_5 : var_8))), (max(-var_12, ((min(22012, 1)))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_10 [i_0] [i_4] = ((1 ? 32604 : 2147483648));
                            arr_11 [i_0] [5] [i_2] [i_3] [i_4] [i_0] = (i_0 % 2 == 0) ? ((((arr_8 [i_0 - 2] [i_0 - 1] [i_0]) ^ ((3191894449 << (((arr_8 [4] [i_0 - 1] [i_0]) - 4015320128))))))) : ((((arr_8 [i_0 - 2] [i_0 - 1] [i_0]) ^ ((3191894449 << (((((arr_8 [4] [i_0 - 1] [i_0]) - 4015320128)) - 3884041245)))))));
                        }
                        var_18 = ((~((var_0 | ((max((arr_1 [i_3]), 62)))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (max(0, -25));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_19 = var_7;
        var_20 = (max(var_20, -0));
    }
    #pragma endscop
}
