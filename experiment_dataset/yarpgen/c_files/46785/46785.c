/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max(18446744073709551615, (-9223372036854775795 ^ 4588404134716623897)));
        arr_4 [i_0] = ((((max((arr_0 [i_0 + 1]), (47733 >= var_0)))) ? (((((((arr_1 [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_2 [12] [12])))) >= (((arr_2 [12] [i_0 - 1]) % var_3))))) : (arr_0 [i_0])));
        arr_5 [i_0] [i_0] = ((var_5 ? (((max((arr_2 [7] [i_0]), 240)))) : (((((-52 ? var_2 : var_6))) ? var_4 : (13858339938992927719 ^ 28273)))));
        arr_6 [10] |= ((((max(0, 571039106))) ? ((18446744073709551615 ? (arr_0 [i_0]) : var_10)) : (((var_2 ? 17692 : 3397914838)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] = (min(14, -15));
        arr_11 [i_1] [19] = (max(-32758, 28273));
        var_14 = (min(((((max(0, var_9))) ? (arr_7 [i_1] [i_1]) : ((min(37690, -68))))), ((((((arr_7 [i_1] [i_1]) ? var_5 : var_12))) ? ((max(1, var_4))) : -14))));
        var_15 = (max(var_9, (((((12 ? 31338 : 62))) ? (max(-17634, 4588404134716623895)) : (arr_7 [4] [i_1])))));
    }
    var_16 = ((var_4 ? -var_7 : (((!var_6) ? (~1) : ((41629 ? -104 : 17613))))));
    var_17 = (((min(-181, (max(var_3, var_9)))) & (((((((var_11 ? 0 : var_9))) || (((10 ? var_9 : var_8)))))))));
    var_18 += (var_7 || ((max(-5, 12915535174169581719))));
    #pragma endscop
}
