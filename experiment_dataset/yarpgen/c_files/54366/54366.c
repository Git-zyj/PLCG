/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((var_6 + 9223372036854775807) << (468489137 - 37809))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 ^= (((arr_0 [i_0]) * (arr_0 [i_0])));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_18 = ((-(((arr_2 [0]) ? (arr_1 [i_1]) : 3826478157))));
            arr_5 [i_1] = -3826478159;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_0] = var_2;
            var_19 += ((468489126 || (arr_7 [i_2])));
        }
        var_20 ^= ((((arr_6 [i_0] [i_0] [i_0]) ? var_4 : 2079267670)) >= (7353868596752737085 >= var_4));
        arr_9 [i_0] = (~7353868596752737086);
        var_21 = (min(var_21, ((((!var_1) | (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (-(var_13 * 43540));
        arr_14 [i_3] = var_13;
        var_22 += var_12;
        var_23 = (min(var_23, (arr_3 [i_3] [i_3])));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_24 += var_8;
        arr_17 [i_4 + 2] = (((((min((arr_4 [1]), (arr_15 [i_4])))) ? (max((arr_0 [i_4]), var_10)) : var_4)) >= (((var_10 ? (arr_3 [i_4] [i_4]) : (arr_3 [i_4] [2])))));
        arr_18 [i_4] = ((~(~var_13)));
    }
    #pragma endscop
}
