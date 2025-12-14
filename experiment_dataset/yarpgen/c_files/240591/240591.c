/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0 - 3] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = max(var_4, (((!var_14) ? ((var_6 ? var_2 : var_4)) : var_0)));
        arr_8 [i_1] [i_1] = (max((((!var_11) ? ((((var_8 + 2147483647) >> (var_1 - 23)))) : (max(var_8, var_14)))), var_9));
        arr_9 [i_1] = (min(((var_9 ? var_8 : (var_12 >= var_9))), var_10));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_12 [i_2] = (((((max(15622697107016776090, 9223372036854775803)) / 419360364)) < var_5));
        arr_13 [5] [i_2 - 1] = ((var_6 * (var_9 / var_8)));
        arr_14 [i_2] [i_2] = ((192 ? 72 : 1926896172));
        arr_15 [i_2] [i_2] = ((162 >= (87 % 87)));
    }
    var_16 = (((((max(var_15, var_1))) + var_14)));
    #pragma endscop
}
