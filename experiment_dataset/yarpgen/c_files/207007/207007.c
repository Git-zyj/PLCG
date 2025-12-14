/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-var_9 ? ((var_11 ? var_9 : var_9)) : (((10 ? var_0 : var_10))))) + (var_4 >= var_8));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = -11;
        var_16 = ((((min(-10, 16))) ? ((((arr_1 [i_0]) >= var_9))) : (arr_1 [i_0])));
        var_17 = ((((((min(13, var_3)) / -27639))) ? var_9 : (((arr_1 [11]) ? ((27 ? (arr_1 [i_0]) : var_3)) : ((((arr_1 [3]) ? -31837 : var_10)))))));
        var_18 = (max(var_18, -var_3));
        var_19 = (+((-(((arr_1 [i_0]) ? var_8 : (arr_1 [12]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((!(((-(arr_1 [i_1])))))))));
        var_21 = ((~((-19 ? (arr_0 [12] [i_1]) : (arr_0 [9] [i_1])))));
        var_22 -= 0;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 &= (var_11 | (arr_0 [7] [i_2]));
        var_24 = (((((7874800641872202727 ? ((var_4 ? -28 : -14)) : ((min(-22, 13)))))) ? (min((min((arr_5 [i_2]), var_6)), ((min(-1, var_7))))) : var_13));
        var_25 ^= ((((min(14469231452365646285, (arr_3 [i_2]))) << (((((arr_1 [i_2]) % var_9)) - 14173)))));
        var_26 = ((((!(arr_2 [4]))) ? ((((!(arr_0 [i_2] [i_2]))))) : 4293918720));
        var_27 = ((11120153900451421151 + (max((arr_5 [i_2]), 181))));
    }
    var_28 = ((((max(var_6, var_12))) == ((((min(196, 0)))))));
    var_29 = (~var_10);
    #pragma endscop
}
