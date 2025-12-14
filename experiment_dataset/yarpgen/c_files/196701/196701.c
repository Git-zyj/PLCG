/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((1 > (((var_3 < -109) ? var_0 : var_6))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (max((1 >= 915327208), ((((arr_0 [i_0]) | (arr_0 [i_0]))))));
        var_18 += (max((60 - 13835058055282163712), ((min((arr_1 [i_0]), (arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = var_3;
        arr_5 [3] = max(((1 & (((var_8 <= (arr_2 [i_0])))))), 0);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_19 = (min(((~(arr_7 [i_1 - 3]))), ((22023 ? -5733 : -25567))));
        var_20 += ((~(min(18531, (-2147483647 - 1)))));
        var_21 = (min(124, (arr_0 [i_1])));
        var_22 = (min(((max(31954, (arr_7 [i_1 - 2])))), (((arr_7 [i_1 - 2]) ? var_3 : (arr_7 [i_1 - 2])))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = 1;
        arr_11 [i_2 - 2] [i_2] = (((((((max(-27550, var_0))) ? ((max(1, 181))) : (max((arr_0 [i_2]), 1))))) || ((!(arr_8 [i_2 - 1])))));
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (min(-32750, 32750));
        var_23 = (max(-20884, (min(var_7, ((8388600 ? var_6 : var_2))))));
        var_24 = (131 | var_16);
    }
    #pragma endscop
}
