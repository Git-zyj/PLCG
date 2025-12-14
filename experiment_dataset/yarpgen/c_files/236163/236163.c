/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -11;
    var_15 = ((var_10 ? var_0 : ((11 ? 9223372036854775807 : 0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = (33759 ? (arr_2 [i_0 - 1]) : 0);
        arr_4 [i_0] = 3017173848;
        var_17 = ((var_6 ? var_0 : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 65535;
        var_18 = 20219;
        var_19 = ((var_5 * (((min(var_2, 255))))));
        arr_8 [i_1] = var_10;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_20 = 45954;
        var_21 = (max(((min(var_0, var_0))), 4294967276));
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [1] [6] = (((max((~-8415725878425410972), (!var_13))) ^ (3017173848 && 47513)));
        arr_14 [8] = (max((min(8802, 14376)), ((var_9 ? (-1938564870 == 4294967295) : ((min(var_2, var_7)))))));
        var_22 = ((~(max(var_13, 65533))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_23 = (min(var_23, (arr_16 [i_4])));
        var_24 = ((((-1 | ((0 ? 1 : -1)))) ^ (min(var_5, var_0))));
    }
    #pragma endscop
}
