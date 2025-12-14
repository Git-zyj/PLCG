/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (arr_1 [i_0 + 1]);
        var_12 = (min(var_12, ((((arr_0 [i_0 + 1] [i_0 - 1]) ? var_10 : (arr_0 [i_0 + 1] [i_0 - 1]))))));
        arr_2 [i_0] = var_0;
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        var_13 += ((1667811508 ? 0 : (arr_1 [i_1 + 2])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((min(var_4, (arr_11 [i_2])))))) || ((!(arr_3 [1]))))))));
                    var_15 = var_6;
                }
            }
        }
        var_16 = (max(var_16, (((((((((var_1 ? var_7 : -1667811496))) || var_7))) * (((arr_8 [i_1 + 2]) * var_1)))))));
        arr_12 [i_1] = ((var_8 ? (((((arr_8 [i_1 + 2]) + 2147483647)) << 0)) : ((min((arr_8 [i_1 + 2]), (arr_1 [i_1 - 1]))))));
    }
    var_17 = var_6;
    #pragma endscop
}
