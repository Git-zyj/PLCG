/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 *= (arr_0 [i_0] [i_0]);
        var_14 -= (arr_0 [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_15 = ((+((((min((arr_4 [i_1] [i_2]), (arr_4 [i_2] [i_2])))) * (((arr_4 [i_1] [i_2]) ? (arr_3 [i_3]) : (arr_2 [i_3])))))));
                    var_16 = (max(var_16, (arr_5 [i_1] [i_2] [i_3])));
                    var_17 *= (arr_4 [i_3] [i_2]);
                }
            }
        }
    }
    var_18 = ((((((var_8 ? var_9 : var_1)))) ? ((-var_0 ? (!var_6) : ((var_8 ? var_12 : var_0)))) : (((var_9 ? ((var_12 ? var_10 : var_4)) : ((var_8 ? var_11 : var_4)))))));
    #pragma endscop
}
