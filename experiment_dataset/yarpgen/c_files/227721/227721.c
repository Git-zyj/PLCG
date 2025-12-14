/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 ^= (min(((min(var_3, var_7))), (((!(((var_6 ? (arr_0 [i_1]) : var_4))))))));
                var_15 += ((+(((!var_12) ? var_5 : ((var_12 ? var_2 : var_7))))));
            }
        }
    }
    var_16 += ((var_4 + ((((((var_9 ? var_11 : var_11)) + 9223372036854775807)) << (((var_8 + 735294584) - 6))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 = ((((arr_5 [i_2]) ? var_1 : var_0)));
        var_18 = var_5;
        arr_8 [i_2] = (arr_6 [i_2]);
        arr_9 [19] [17] = (~var_13);
    }
    var_19 = (((var_10 & var_2) ? var_0 : (~var_9)));
    #pragma endscop
}
