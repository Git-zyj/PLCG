/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 562949953421311;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (min(var_15, 13108569692854319729));
            arr_5 [i_0] [i_0] [i_0] = (~var_11);
        }
        var_16 = var_0;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (arr_7 [i_2]);
        var_18 = (((arr_8 [i_2]) ? -19 : (((arr_6 [i_2]) + 126))));
        arr_9 [i_2] [i_2] |= (((((-61 ? var_9 : (arr_7 [i_2]))))));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((((((var_9 ? var_7 : 562949953421302))) ? ((-69 ? 126 : 16288)) : (arr_8 [i_3 - 1]))));
        var_19 = 12;
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_20 = (max(((var_12 ? (arr_1 [i_4 - 2]) : var_1)), var_9));
        var_21 = arr_8 [i_4];
    }
    var_22 = (var_5 > var_8);
    var_23 -= (!var_5);
    var_24 += ((30764 ? (18446181123756130305 + -6876) : (((65 ? var_8 : 61171)))));
    #pragma endscop
}
