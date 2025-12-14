/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_10 = var_7;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = -10606;
        arr_7 [i_1] = (((((var_9 ? -2147483639 : var_2))) ? var_6 : ((max(4294967295, 10588)))));
        var_11 = ((min(var_9, ((1 ? var_4 : 1)))));
        arr_8 [i_1] [i_1] = (1805027282290214240 / 2147483648);
    }
    var_12 = (((((((min(var_6, var_4))) ? var_0 : (var_5 ^ var_3)))) ? (((2071379168897563055 ? var_2 : (var_1 <= var_0)))) : var_6));
    var_13 = var_0;
    #pragma endscop
}
