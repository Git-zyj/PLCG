/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((4095 << ((((((((arr_3 [i_0] [i_0]) ? var_4 : (arr_1 [i_0])))) ? 8192 : ((var_16 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0]))))) - 1243618092))));
        arr_4 [i_0] = (+-4095);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
        var_18 -= ((-((((((var_8 == (arr_2 [i_1]))))) | ((1 ? 57343 : var_11))))));
        var_19 = ((-((((arr_6 [i_1] [i_1]) >= var_11)))));
        arr_8 [i_1] = max(((((arr_2 [i_1]) && (var_8 ^ var_7)))), ((-(var_0 / var_5))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 -= ((!((min(4095, 4294963200)))));
        var_21 = (((((arr_9 [i_2] [i_2]) + 1))) ? ((((arr_11 [1] [1]) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2])))) : ((((((arr_10 [i_2] [i_2]) ? 43701 : (arr_10 [12] [i_2])))) - 6465857380971752517)));
    }
    var_22 = (0 >= 21428);
    var_23 = ((~(max((var_6 || var_4), (max(var_12, 1623350141))))));
    var_24 = (((((-7763170006331466959 ? -var_11 : var_11))) ? 8207321281889841244 : var_10));
    #pragma endscop
}
