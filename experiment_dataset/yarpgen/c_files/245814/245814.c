/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_10 *= (~var_2);
        var_11 = (arr_2 [i_0 - 2] [i_0 - 3]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (((!((((arr_0 [8] [i_1]) | (arr_4 [i_0] [i_0])))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [9] = (((((arr_8 [i_0]) & var_3)) & (((var_4 + (arr_5 [i_0] [i_1] [i_0]))))));
                        var_13 = (min(var_13, ((((arr_0 [i_2] [i_3 - 1]) + (arr_0 [i_1 - 1] [i_2]))))));
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_8));
    var_15 = ((~(min((var_4 || var_1), ((var_2 ? var_2 : var_3))))));
    #pragma endscop
}
