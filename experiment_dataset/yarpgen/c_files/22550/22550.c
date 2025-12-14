/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-62 ? (min((min(var_2, var_13)), var_6)) : var_9));
    var_15 = ((~(max((((var_3 ? var_6 : var_10))), (var_3 - var_11)))));
    var_16 *= (((((1 <= var_0) / (min(62, 159455958))))) ? ((min(((-45 ? var_6 : -45)), (var_2 == 1)))) : ((((max(var_10, var_13))) ? var_7 : (var_9 % -49))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (var_11 ? (arr_1 [i_0] [i_0]) : 14181424314101937704);
        arr_4 [i_0] = ((var_3 ? -4 : 0));
        var_18 = (((arr_1 [i_0 + 1] [i_0]) ? (arr_3 [i_0 + 1]) : (arr_2 [i_0] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] &= ((!(arr_7 [i_1] [14])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2 - 2] [i_2] [i_4] = (~-6756300661700658703);
                        var_19 = ((~((((var_5 | var_10) <= (arr_6 [i_1 + 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
