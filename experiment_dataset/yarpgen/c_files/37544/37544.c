/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0 + 2]) ? (arr_0 [i_0] [i_0]) : ((-25 ? 35961 : 229))))) ? (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) : (-7176 * 229)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 -= ((~((~(((arr_3 [i_1]) ? 1577039620051673613 : 32))))));
        var_15 = (min(var_15, (((!(((-(arr_4 [i_1])))))))));
        arr_5 [i_1] [i_1] = ((-29575 ? ((~((-1 ? -33 : 17)))) : (!-121)));
        var_16 = ((!(!-2147483647)));
        var_17 += ((1 & (--0)));
    }
    var_18 = ((44814 ? 1 : ((((~188) != -13203)))));
    var_19 = (max(var_19, (((var_8 ? var_2 : ((218 ? 21319 : 32)))))));
    var_20 -= var_12;
    #pragma endscop
}
