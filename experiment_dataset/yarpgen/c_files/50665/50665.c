/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((253272106 ? (max(var_6, var_0)) : (var_9 - var_15)))) ? -6358732805360778892 : (min(((-8066547999916051768 ? 7003299996255507065 : 17)), var_6))));
    var_17 = ((((var_15 % (var_10 || var_2))) >= (((min(112, 112))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~(((!(((-7121201073783141588 ? -434166889 : var_3))))))));
        arr_3 [i_0] [i_0] = var_5;
        arr_4 [i_0] = min(123, ((0 ? 7367157956830649527 : (-9223372036854775807 - 1))));
        var_19 ^= ((+((((var_5 * 8) == var_14)))));
        var_20 = (max(var_20, -8850940077046560017));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] |= (arr_7 [i_1] [i_1]);
        arr_9 [9] = ((((arr_6 [i_1]) || (arr_6 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 &= ((((min((arr_12 [i_2]), 9223372036854775783))) ? 9223372036854775784 : var_4));
        var_22 = -6;
    }
    var_23 = (~(((1 <= 1048575) - var_10)));
    #pragma endscop
}
