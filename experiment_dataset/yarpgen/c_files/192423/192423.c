/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((var_1 >= var_14), ((-36 ? (!var_6) : -var_7)));

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 = (min((((var_3 & (((arr_1 [i_0]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0])))))), ((var_17 ^ (arr_0 [i_0 + 1])))));
        var_22 = var_6;
        var_23 = (~var_0);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_24 &= ((-var_4 && (-1069860269 & -6)));
        var_25 = max((((!(arr_2 [i_1 - 1])))), ((85 ? ((var_18 ? var_18 : var_1)) : ((var_8 ? -29 : var_1)))));
        arr_5 [4] [i_1] |= (((~236) <= ((~((34084 ? -17384 : 18446744073709551613))))));
        var_26 ^= ((-((-(arr_2 [i_1])))));
        var_27 = var_15;
    }
    #pragma endscop
}
