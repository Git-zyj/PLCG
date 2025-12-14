/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) - (arr_0 [3])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [11] = (min(32512, 21160));
                    var_17 &= var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_4] = ((min(17256203874501473940, (arr_10 [i_3] [i_3]))) >= (((arr_12 [i_3]) ? 18179 : (arr_10 [i_3] [i_4]))));
                var_18 = min((((var_11 ? ((((arr_13 [i_3] [i_4] [i_4]) || var_15))) : var_4))), (max((max(-3523119084025001722, var_12)), ((min((arr_13 [i_3] [i_3] [i_3]), var_16))))));
            }
        }
    }
    var_19 = (max(var_19, var_9));
    var_20 = (max(var_20, ((min(((((var_6 || 15) & var_12))), (max((max(var_15, var_10)), var_16)))))));
    #pragma endscop
}
