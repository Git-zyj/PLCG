/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = ((var_10 ? ((((arr_0 [i_0 - 3]) ? var_0 : var_18))) : (arr_0 [i_0])));
        var_21 = (min(var_21, (var_13 == var_0)));
        var_22 = ((79 ? (-1618344798 <= var_8) : var_10));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_23 = -18446744073709551615;
            var_24 = -18676;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_25 = (min(var_25, (arr_4 [11] [i_2] [i_0 - 1])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_26 = var_14;
                var_27 = (((((var_5 ? var_6 : (arr_5 [i_3])))) ^ (3585306023 >> 1)));
                var_28 = ((1 ? 1 : 1));
            }
            var_29 = arr_6 [i_0];
        }
    }
    var_30 = (min(var_30, var_8));
    #pragma endscop
}
