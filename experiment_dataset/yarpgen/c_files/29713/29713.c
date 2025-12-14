/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((80682179 ? var_9 : ((var_7 ? var_6 : -80682167))))), (max((min(var_10, var_0)), 1706083390))));
    var_16 |= (max((((((var_6 ? var_13 : 18446744073709551615))) ? ((var_10 ? var_9 : var_10)) : (!var_2))), ((var_0 ? ((min(var_14, -35))) : var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_6;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = (arr_1 [i_0] [i_0]);

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = ((25 ? (arr_6 [i_2] [i_1] [i_0]) : (((arr_0 [8]) ? (arr_6 [i_0] [i_1] [i_2]) : 738691579))));
                var_18 = (((arr_3 [12] [i_2 + 1] [i_2 + 2]) ? -75 : 58220));
            }
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_19 = (min(var_19, (arr_11 [17])));
                var_20 = ((-58220 ? 4503565267632128 : (arr_4 [i_3 - 1])));
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_21 = (((((arr_1 [i_0] [i_4]) ? 3055899766 : -25)) < (~64)));
            arr_15 [i_4] [i_0] = (arr_1 [1] [0]);
        }
    }
    var_22 &= (max(var_2, var_12));
    #pragma endscop
}
