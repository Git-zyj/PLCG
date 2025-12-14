/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 18446744073709551615;
    var_21 = (min(var_21, var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 = ((arr_1 [i_0] [i_0]) + ((0 ? (arr_1 [i_0] [i_0 + 2]) : 3137715367)));
        arr_2 [2] = (arr_1 [i_0 - 1] [i_0]);
        arr_3 [i_0] [i_0] = 31764;
        var_23 ^= 31764;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_24 = 31764;
        arr_6 [i_1] = 231;
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_25 &= (min((((((62 ? 1157251940 : 31740)) < 13749))), (arr_4 [1])));
        var_26 = (min(var_26, ((((max(178, 18446744073709551600)) + (18446744073709551604 && var_9))))));
    }
    var_27 = ((!(((max(24, var_18))))));
    var_28 = (max(var_28, var_7));
    #pragma endscop
}
