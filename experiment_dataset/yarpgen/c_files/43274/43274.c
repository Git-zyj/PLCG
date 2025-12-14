/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((84 / var_4), var_0))) ? (max(var_1, ((var_17 ? var_5 : var_7)))) : var_2));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, (((max((~33), (arr_1 [i_0])))))));
        var_21 = (((886488529 > var_18) ? ((var_17 ? var_8 : (arr_0 [i_0]))) : 3408478786));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 |= 98875999;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_12 [i_4] [i_4] = 98876024;
                        arr_13 [i_1] [i_4] [i_1] [i_1] = -7015413277600109351;
                        var_23 -= 44510;
                    }
                }
            }
        }
        arr_14 [i_1] [i_1 - 1] = (arr_6 [i_1] [i_1]);
    }
    #pragma endscop
}
