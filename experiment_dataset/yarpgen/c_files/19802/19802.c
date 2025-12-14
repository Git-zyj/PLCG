/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, 815655149));
        var_13 = ((!((((~10) ? ((var_5 ? var_6 : 65511)) : (754441078 != var_2))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = -14;
        var_14 = (max(var_14, (((((+(((arr_4 [i_1] [i_1]) + var_2)))) - (-1174932782 + var_5))))));
        arr_7 [i_1] = (!0);
        arr_8 [i_1] = (((min(var_4, ((var_8 ? var_1 : var_9)))) < var_0));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = (min(1174932775, ((((((arr_10 [i_2] [i_2]) ? var_11 : (arr_10 [i_2] [i_2])))) ? (var_7 >= 650304131) : -101506330))));
        arr_13 [i_2] = (arr_11 [i_2]);
        var_15 ^= (arr_11 [i_2]);
        var_16 = (max(var_16, (~1)));
        var_17 ^= (((!var_2) == ((((arr_11 [i_2 - 1]) >= (arr_11 [i_2 - 1]))))));
    }
    var_18 = var_2;
    var_19 = ((1214 ? 1144538037 : -101506325));
    #pragma endscop
}
