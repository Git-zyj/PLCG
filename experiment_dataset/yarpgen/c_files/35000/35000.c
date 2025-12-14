/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_11 = ((((((((-12018 - 1) + 2147483647)) << (1 - 1)))) - (12018 ^ 2199006478336)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = ((-5842635290591688010 ? (var_10 - 63) : ((1 ? 0 : 1))));
            arr_6 [i_0] [i_1] = 1;
            var_13 = 1;
        }
        arr_7 [16] = ((var_7 ^ (((18446741874703073280 <= 1) ? (((-11199 ? var_6 : var_1))) : var_4))));
        arr_8 [i_0] = var_2;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_13 [6] [2] = (((((32746 ? ((-4 ? -7406168704333862552 : var_7)) : 65470))) ? (((var_1 ? (1 || 3644363395) : var_1))) : var_1));
        var_14 = (((((50 ? (7406168704333862570 % var_7) : ((var_2 ? 1809396133507790559 : 1724162152))))) ? (((var_3 << (65 && 5568384902499654498)))) : ((74 ? 16803526142754272690 : -32736))));
        arr_14 [i_2] = ((var_2 - (4397 / -7406168704333862570)));
    }
    var_15 *= (((var_1 < 18446741874703073285) ? 2147483647 : var_0));
    var_16 = ((32719 >= (((var_7 != var_9) & var_3))));
    #pragma endscop
}
