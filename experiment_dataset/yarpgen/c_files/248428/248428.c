/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = var_4;
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? ((3082043976 ? 0 : var_5)) : (min(695089575, var_10))));
        arr_5 [i_0] = 6;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_18 = (min(((((min(2147483640, var_16))) ? ((min((arr_7 [i_1]), -113))) : (min(-32049, var_7)))), -2147483640));
        arr_8 [i_1] [i_1] |= (min(2305843009196916736, (max(32048, ((2013265920 ? var_3 : var_10))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [1] [i_2] |= var_6;
        var_19 = (arr_9 [i_2]);
        arr_12 [i_2] |= (min(((min((arr_10 [i_2]), (arr_9 [i_2])))), (min((min(var_13, -2147483641)), ((min(193, var_13)))))));
        arr_13 [i_2] [i_2] = (var_1 >> (-var_15 || var_4));
        var_20 = (!(((((((var_1 ? -10266 : var_8)) + 2147483647)) << (((((arr_9 [i_2]) ? var_16 : var_17)) - 7961572815456562759))))));
    }
    var_21 = var_14;
    var_22 = var_2;
    #pragma endscop
}
