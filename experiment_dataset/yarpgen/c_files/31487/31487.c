/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((!(18446744073709551615 >= var_6)));
        var_21 = (var_15 == 15);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 = (arr_0 [i_0]);
            var_23 = (18446744073709551615 < (arr_4 [i_0] [i_0] [i_1]));
            var_24 ^= (arr_0 [i_1]);
            var_25 = (!1);
            var_26 = (!var_12);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_27 &= (1 >= -4);
            var_28 -= var_10;
            var_29 = (((arr_5 [i_0]) + (((!(arr_5 [i_2]))))));
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            var_30 = (-1989504933393276693 ? 1 : 251);
            var_31 = var_19;
        }
        var_32 = var_16;
        var_33 = (((arr_10 [i_0]) * (arr_10 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_34 = ((-32748 ? (((1 ? 1989504933393276692 : 1))) : 13));
        var_35 = (((arr_9 [i_4] [i_4]) == (arr_9 [i_4] [i_4])));
        var_36 = (((-1 >= 18446744073709551614) - ((-394445114 ? 887915989 : var_13))));
    }
    var_37 = (min((max(-var_7, var_13)), (var_17 & var_6)));
    var_38 = (var_3 != var_15);
    var_39 = var_4;
    #pragma endscop
}
