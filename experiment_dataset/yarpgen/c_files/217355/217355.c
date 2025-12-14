/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_13;
    var_15 = (max(var_11, ((min((~var_10), ((var_9 ? 11 : var_8)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((var_2 ? (arr_0 [i_0]) : (11 / -var_10)));
        var_17 = (min(var_17, ((((arr_3 [i_0]) << (min(var_2, (58 / var_7))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (!var_2);
        var_19 += 25373;
        var_20 = (min(var_20, 49247));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_21 += (((!(((var_3 ? var_4 : (arr_5 [i_2])))))));
                        var_22 = (min(var_22, ((((-9223372036854775807 - 1) ? var_6 : (min(25360, -539770179)))))));
                    }
                }
            }
        }
    }
    var_23 = ((var_12 ? (min(var_2, var_9)) : var_6));
    #pragma endscop
}
