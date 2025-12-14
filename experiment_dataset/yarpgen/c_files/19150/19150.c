/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((-118 + 2147483647) >> ((((var_4 == (arr_1 [i_0] [i_0]))) ? var_10 : (25093 & 91)))));
        var_20 = -107;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = -48;
        arr_5 [i_1] [i_1] = 10111;
        var_21 = ((-(arr_0 [i_1])));
        arr_6 [i_1] [i_1] = var_4;
        arr_7 [i_1] = (min((((((arr_1 [i_1] [i_1]) + 9223372036854775807)) >> (-1607652363 + 1607652373))), (min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = (max(var_22, (((~((1208817217617851435 | (((-7325932361721356601 ? var_13 : 4000365596897536503))))))))));
        var_23 = (max(var_23, -29438));
        var_24 = (min(var_24, ((((4607 - (arr_8 [i_2] [i_2])))))));
        var_25 = (-var_4 != 1607652366);
    }
    var_26 = -4191963331509690260;
    #pragma endscop
}
