/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = var_11;
                        var_19 = ((((((-1240327797056255466 + 9223372036854775807) >> (((arr_3 [i_1]) + 8407118403415058822))))) && ((((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_3]))))));
                        var_20 = (min(var_20, ((((((arr_3 [i_0]) & -974043203)) >= (arr_8 [i_0] [i_2 - 1] [i_0 - 2] [i_3]))))));
                        var_21 *= ((arr_3 [i_0]) != (arr_3 [i_0]));
                    }
                }
            }
        }
        var_22 = ((var_8 ? (arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : var_5));
        var_23 = (((arr_0 [i_0]) / var_8));
    }
    var_24 = var_6;
    var_25 = (((((57571 < var_2) ? var_18 : ((var_11 ? var_17 : 0)))) + var_8));
    #pragma endscop
}
