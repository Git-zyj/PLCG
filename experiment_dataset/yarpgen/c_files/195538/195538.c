/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = ((0 ? (((max(0, 12831164953672103625)) - -105)) : ((((!var_7) << (((arr_1 [i_0] [i_0]) - 9194909405083207010)))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_2 [i_1]) ? 240 : (-32767 - 1)));
            var_21 += ((10 + (arr_2 [i_1 - 1])));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 -= (max(-26, var_6));
        var_23 = (min(var_23, (((!(!3))))));
        var_24 = 31;
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] = (((((var_14 ? 237 : 1))) ? 16 : (((59521 ? 227 : 20334)))));
        arr_14 [i_3] &= ((var_18 ? 1 : ((max((-20331 ^ 1), (!21))))));
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] [10] |= 33;
        arr_20 [6] |= ((var_15 ^ (((!(arr_9 [i_4 + 3]))))));
    }
    var_25 = (~0);
    var_26 = (min(var_26, -103));
    #pragma endscop
}
