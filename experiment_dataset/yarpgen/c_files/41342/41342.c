/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(var_15, var_0));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1] = (arr_6 [i_2 + 1] [i_3 + 2] [6] [i_3]);
                        var_19 = (max(var_19, (((-3341 ? var_13 : (arr_4 [i_2 - 1] [i_3 - 1]))))));
                        var_20 = ((~(arr_0 [i_3 - 1])));
                        var_21 = (min(var_21, var_17));
                    }
                    arr_13 [i_0] [i_2] [i_2] = var_12;
                    arr_14 [i_2] = var_6;
                    var_22 = 30622;
                    var_23 = (max(var_23, ((((arr_7 [i_2 - 1]) ? var_13 : (arr_7 [i_2 - 1]))))));
                }
            }
        }
    }
    var_24 = ((~(((!(var_17 / var_18))))));
    var_25 &= ((((min(var_5, (var_17 / var_3)))) ? ((((100 < 3341) ? (max(var_18, var_17)) : var_8))) : ((var_12 ? var_6 : (min(-3350, -2243726631865114080))))));
    #pragma endscop
}
