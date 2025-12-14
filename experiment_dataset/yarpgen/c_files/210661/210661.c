/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = (((!var_0) ? var_2 : (min(((var_7 << (var_18 - 3887181483))), var_13))));
        arr_2 [i_0] = (min((((-9223372036854775807 - 1) ? (min(-1931308273, 4)) : var_17)), var_15));
        arr_3 [i_0] = (((-923804978739008612 % var_11) * (127 <= -923804978739008612)));
        arr_4 [i_0] = ((max(((4294967277 ? -923804978739008612 : var_5)), var_10)) & (-9223372036854775807 - 1));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 &= max(((max(-29, 1783894919))), (min(var_9, var_15)));
        var_21 = (((((((2147483647 ? var_0 : var_1)) & (0 ^ 923804978739008612)))) || var_14));
        var_22 *= (max(var_0, var_17));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_23 = var_11;
            var_24 ^= ((min(var_15, var_6)));
        }
        arr_12 [i_2] [i_2] = ((38 != (((-923804978739008609 != ((120 ? var_1 : var_5)))))));
        arr_13 [i_2] [i_2] = (min(1256019109, 15551343657991151107));
    }
    var_25 = (min(var_2, var_5));
    #pragma endscop
}
