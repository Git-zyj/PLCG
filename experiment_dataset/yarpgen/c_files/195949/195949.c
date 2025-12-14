/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 *= 2635359543;
            var_15 = 6969674441566736659;
            var_16 = (max((((arr_3 [i_0 - 1] [i_0 + 2]) ? (arr_3 [i_0 + 2] [i_0 - 2]) : (arr_3 [i_0 + 1] [i_0 + 3]))), ((384642674 & (arr_3 [i_0 + 3] [i_0 + 1])))));
        }
        var_17 -= (min((min(-323430733, (arr_2 [i_0]))), ((min(((min(var_9, 95))), 323430731)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [7] = (((arr_1 [i_2]) ? ((204 | (arr_5 [i_2]))) : (((-2147483647 - 1) ? 323430731 : 1))));
        arr_8 [9] = (-(arr_4 [i_2]));
        var_18 += ((var_13 || (((var_1 ? 1 : var_12)))));
        var_19 = (min(var_19, ((((((arr_6 [i_2]) ? (arr_6 [0]) : var_13)) << (arr_1 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_20 = (max((arr_10 [i_3] [i_3]), ((~((~(arr_9 [i_3])))))));

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            arr_14 [4] [i_3] = (((max(var_1, (((var_2 ? 1 : var_2))))) >= var_7));
            arr_15 [i_4] = ((((max((arr_9 [i_4 + 2]), 14751438))) ? ((((min(-24089, var_4))) ? -18446744073709551615 : -var_11)) : 18446744073709551615));

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_21 = (((!255) != (arr_13 [i_4])));
                var_22 = 1;
            }
            arr_18 [i_3] [i_3] = ((~((((1832454552 ? 65535 : 43978571268126451))))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_23 = (arr_16 [19] [i_6]);
            var_24 -= (arr_9 [i_3]);
        }
        arr_22 [i_3] = (min((!var_11), 1));
        var_25 = ((!((max((!var_0), 62)))));
        arr_23 [i_3] = (var_13 ? ((max((var_11 % -43978571268126467), (~var_2)))) : (1 + var_3));
    }
    var_26 = (min(var_26, var_5));
    #pragma endscop
}
