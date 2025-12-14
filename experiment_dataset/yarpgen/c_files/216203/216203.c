/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((var_1 ? ((var_16 ? var_9 : 18446744073709551613)) : var_12)), var_1);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = 5974746021662696795;
        var_21 = ((5082841181249160360 ? (((142 ? (arr_1 [i_0]) : (max(10, 243101982))))) : (max((((1394583265 >= (arr_1 [14])))), 8345849068345864468))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [3] [3] = (~1);
        var_22 *= 1;
        var_23 = (min(var_23, ((((-((var_15 ? 2121567833 : 0))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_24 = (min(var_24, ((max((~var_14), ((max(((23 ? 119 : 0)), var_6))))))));
        arr_10 [14] = (((19 || 63) ? (arr_4 [6] [16]) : (max(1, 623928287))));
        arr_11 [8] [i_2] = 257110973789256646;
    }
    var_25 = var_5;
    #pragma endscop
}
