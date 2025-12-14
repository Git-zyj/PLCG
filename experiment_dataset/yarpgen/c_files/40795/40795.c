/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = ((((((((-41 + 2147483647) >> (9701990345840731207 - 9701990345840731201))) >> ((((max(32755, 225))) - 32731))))) - (((arr_1 [i_0]) * (arr_1 [12])))));
        var_15 = ((~(max(var_12, (var_6 || 18446744073709551615)))));
        var_16 = (((((((((arr_1 [12]) < (arr_1 [9])))) / ((4330802514660866958 ? 383 : 383))))) ? ((((((225 & (arr_1 [i_0])))) ? (((arr_0 [0] [i_0]) ? var_8 : var_1)) : (((var_2 < (arr_1 [16]))))))) : (max(((-(arr_1 [5]))), var_13))));
        var_17 &= 20;
        var_18 = (min(var_18, var_1));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_3 [i_1] [i_1]);
        arr_4 [i_1] [i_1] = (-4330802514660866968 / -7519242419572472792);
    }
    var_20 = (~-48);
    #pragma endscop
}
