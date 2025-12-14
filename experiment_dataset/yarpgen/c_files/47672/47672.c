/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 == var_18);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((-(min(10567214612479498530, (((var_11 ? (arr_10 [13] [13] [12]) : var_8))))))))));
                    arr_12 [i_1] [i_2] = (-24719 < -70);
                    arr_13 [9] [9] [i_0] [i_0] = (((min(var_8, -24725))));
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = ((var_7 ? ((min(var_8, -60242945479438245))) : var_3));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_23 = (min(var_23, ((((!var_6) || var_17)))));
        arr_16 [i_3 + 4] [i_3] = ((var_12 ? (arr_7 [i_3] [i_3] [i_3]) : var_5));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_24 = (min(var_24, (arr_3 [15] [i_4])));
        arr_21 [i_4] = (!0);
        arr_22 [i_4] [6] = (((arr_11 [i_4]) * var_0));
    }
    #pragma endscop
}
