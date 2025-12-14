/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_3 && var_3) ? ((-1874717947 ? 24 : 3709429964181002980)) : (((2070206593 ? 8191 : 2635459163)))));
    var_12 = (((((var_5 ? 4586490292889876568 : 4398046511103))) ? (((((var_1 ? var_2 : var_1))) ? var_6 : (((-10610 ? 1 : 1423367141))))) : ((-var_8 ? var_7 : (((var_2 ? var_9 : var_2)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((var_0 ? var_8 : var_9))) ? ((var_1 ? var_0 : var_7)) : var_2))) ? ((var_10 ? ((254 ? 2147483648 : -18906)) : var_3)) : (((((var_3 ? var_1 : var_2))) ? (var_5 - var_2) : ((var_5 ? var_5 : var_7))))));
        arr_4 [i_0] [i_0] = ((-((var_9 ^ ((var_2 ? var_5 : var_2))))));
        var_13 = (((((-var_4 ? ((var_3 ? var_10 : var_4)) : var_0))) ? -var_7 : (((-12158 ? 550834498 : 2443376421)))));
    }
    #pragma endscop
}
