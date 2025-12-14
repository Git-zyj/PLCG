/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, (((179 ? var_4 : var_9)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 -= (min(-22329, var_13));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_23 ^= ((-(!-22329)));
            var_24 = ((!(!var_15)));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_25 = (arr_3 [i_1 - 2]);
            var_26 -= var_2;
            var_27 ^= 240;
            var_28 = (min(((~(min(var_10, -18833)))), -6247590000881542048));
        }
        arr_10 [0] = (((((!(arr_6 [i_1] [i_1 + 1])))) & (!var_7)));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_29 ^= (min((arr_12 [i_4]), (arr_12 [i_4])));
        var_30 = (max(((((var_15 ? 5979 : var_7)))), (arr_2 [i_4])));
    }
    var_31 = -3981978463009331599;
    var_32 = -var_2;
    var_33 = (~127);
    #pragma endscop
}
