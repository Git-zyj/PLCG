/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [13] [i_0] |= (((((-(arr_1 [15] [10])))) ? 22067 : (43492 == 22088)));
        arr_3 [i_0] [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_11 = ((!(((arr_5 [i_1]) == 142))));
        var_12 = 22072;
        arr_8 [3] [3] = ((((var_4 ? 4095 : (arr_5 [i_1]))) + (!18446744073709551615)));
        var_13 = ((((((!(((arr_5 [i_1]) < var_4)))))) & ((-((var_9 >> (((arr_5 [i_1]) - 135))))))));
    }
    var_14 = ((var_1 + 2147483647) >> ((((22031 && 1149936104) > var_4))));
    var_15 = min((min((((var_2 ? 49707 : var_9))), (min(var_4, 22090)))), var_0);
    var_16 = ((var_3 ? var_2 : var_1));
    #pragma endscop
}
