/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-17 ? var_7 : ((var_9 ? var_3 : 8))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((((((var_10 << (-9 + 12)))) || (0 >= var_6))))));
        arr_3 [i_0] = ((-17557 ^ (((0 | -20) ? ((max(54616, var_1))) : (0 | var_4)))));
        var_14 -= (min((0 + var_1), (((((max(var_10, var_0))) - (0 + var_2))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = (((((var_9 ? 8 : var_3))) != ((-20 ? -2099811652212388721 : var_8))));
        var_16 = ((((var_9 / (17552 * var_1)))) * (((var_5 / 35) / -17557)));
        arr_6 [i_1] &= ((((1943762350 != (var_0 != -17)))));
        arr_7 [i_1] [i_1] = (((((-16720 & 1) >> (var_7 - 72))) - (((((var_1 * 159) + 2147483647)) >> (((var_6 * -6133383198543712647) - 17493592820825854610))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 += (var_8 + -20);
        var_18 = ((var_6 ? 1715928098 : var_0));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_19 = (((1 | -1715928100) ? -1715928119 : 1));
        var_20 = 18446744073709551614;
    }
    var_21 = var_7;
    #pragma endscop
}
