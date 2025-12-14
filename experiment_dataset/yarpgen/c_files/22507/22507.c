/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!((min(248, -26607))))) ? var_1 : (var_1 & var_9)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 += (arr_0 [i_0 - 1] [11]);
        arr_2 [i_0 + 1] = 100;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_12 += var_6;
        var_13 = ((~(((var_2 ? -16960 : var_1)))));
        var_14 &= var_2;
        var_15 = ((!((((((8365 ? -9462 : 16964))) ? ((156 ? -6909 : 21863)) : ((var_5 ? 16964 : var_0)))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((((min((min(var_3, (arr_5 [i_2]))), ((min(var_0, (arr_5 [i_2]))))))) ? ((((min(var_8, var_0))) >> (var_9 + 2759143350985560017))) : ((~((((arr_5 [i_2]) || (arr_4 [i_2])))))))))));
        arr_9 [i_2] = ((-15726 * (max((max(-1526715587, -26538)), ((min((arr_7 [i_2]), (arr_7 [i_2]))))))));
    }
    #pragma endscop
}
