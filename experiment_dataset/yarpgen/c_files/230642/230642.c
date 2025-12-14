/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -120;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((-((18 | (arr_0 [i_0])))))) <= ((33393 / (max(var_3, 15860666685769397438))))));
        var_11 = ((-(((arr_0 [i_0]) + 120))));
        var_12 = ((~((((min(8063, (arr_0 [i_0])))) | ((var_0 & (arr_1 [i_0] [i_0 - 1])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (((arr_1 [i_1] [4]) > (arr_0 [8])));
        arr_5 [i_1] [i_1] = (((arr_3 [i_1] [i_1]) ^ ((9083 >> (((~-120) - 107))))));
        var_14 -= (~(arr_4 [i_1]));
        var_15 = (min(var_15, (((max(((max((arr_0 [10]), 27374))), (((arr_3 [i_1] [5]) * var_3))))))));
    }
    #pragma endscop
}
