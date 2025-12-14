/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_16 -= ((-(var_7 / var_5)));
        var_17 = (max(var_17, ((min(26093, (((!var_2) >> ((((~(arr_0 [i_0]))) - 3259467386)))))))));
        var_18 = (-127 - 1);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 *= 39443;
        var_20 = (max(var_20, (((!((max(39443, (arr_1 [i_1 - 1])))))))));
        arr_6 [i_1] [i_1] = (((max(((var_13 ? (arr_2 [i_1] [i_1 - 1]) : 1381963490)), (!var_13)))) ? (min(var_11, (arr_1 [i_1 - 1]))) : (((((max(var_6, (arr_4 [i_1 + 1] [i_1])))) || ((min(1610612736, 32256)))))));
        var_21 = (((39432 / 3521155929959812715) ? 2913003806 : var_12));
        arr_7 [i_1 - 1] = ((((min(var_9, (arr_2 [i_1] [i_1])))) ? var_11 : (((var_8 > (var_14 != 3303713713))))));
    }
    var_22 = var_7;
    #pragma endscop
}
