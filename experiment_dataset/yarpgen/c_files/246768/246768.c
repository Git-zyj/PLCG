/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 56184;
    var_18 = (min((56185 || -881943371), var_10));
    var_19 += ((((((((-369259979 ? 17545 : 40))) ? (30360 >= 123) : ((9346 ? var_0 : 56178))))) ? var_11 : (((((-957259825 ? var_10 : 3036135955506284031))) ? 4257 : var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = ((((!(((56199 ? 109 : -8825025458000077383)))))));
        var_21 = (((~((max(63, (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 ^= 8825025458000077379;
        var_23 = (max(43, (min(var_10, -896604473))));
        arr_5 [i_1] = (((max(((var_6 ? 3036135955506284031 : (arr_1 [i_1] [i_1]))), (((49443 ? (arr_0 [i_1]) : (arr_0 [i_1]))))))) || ((!(arr_4 [i_1]))));
        arr_6 [i_1] &= ((+((((((arr_2 [i_1] [i_1]) | 58570))) | -2704626181723518997))));
    }
    #pragma endscop
}
