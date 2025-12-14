/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_7;
    var_12 = (min(var_12, (((var_6 ? (((var_8 + var_0) + (((0 ? 12106 : var_9))))) : 1)))));
    var_13 = (((((min(var_2, var_2))) ? var_5 : var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 1;
        var_15 = (min(var_15, ((((((arr_1 [i_0]) ? 62765 : 48323)) / (((var_5 + 2147483647) >> (((arr_0 [i_0] [i_0]) - 1359546843438909305)))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (arr_1 [i_1]);
        arr_5 [i_1] = ((((var_1 != ((min(20514, -1705563687))))) ? (var_5 > var_0) : (1 % -662019940008986305)));
    }
    var_16 = ((4173544690314156881 ? ((max(((var_7 ? var_7 : 1)), (((var_4 ? 1 : var_5)))))) : var_10));
    #pragma endscop
}
