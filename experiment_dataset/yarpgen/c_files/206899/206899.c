/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(-91, ((-15934 ? 1 : 91))));
        var_20 *= (!167);
        arr_4 [i_0] = (!1);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (((((~((var_17 ? (arr_8 [i_1] [4]) : (arr_6 [i_1])))))) ? ((((((-(arr_8 [i_1] [i_1])))) ? (!15946) : (~105)))) : (((((68 ? 1 : 2))) ? (max(15952, (arr_5 [i_1]))) : (5 - -120)))));
        var_22 = ((max(1232330735, -2728241428566937385)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = var_0;
        arr_11 [i_2] = ((3963064934057821534 ? (-127 - 1) : 1695192729));
    }
    var_24 = (((((-((var_13 ? 0 : 0))))) ? var_10 : var_0));
    var_25 = (var_11 + (((14270669155597382793 + -1658936753) + ((max(2, 32704))))));
    #pragma endscop
}
