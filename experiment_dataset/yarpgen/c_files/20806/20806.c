/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? (((((var_6 || var_3) || ((max(197, var_5))))))) : (-11473 / var_0)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_11 = (((var_6 + 2147483647) >> (((32766 >= (max(var_0, 1500530696)))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_12 *= (((max(2147483647, 1500530699)) + ((((arr_4 [i_1]) ? var_7 : (arr_5 [i_1] [i_1]))))));
        var_13 = ((((~-81) ? (arr_6 [i_1 + 3]) : (arr_7 [i_1 + 2]))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] = ((-(arr_10 [6])));
        arr_13 [i_2 - 1] [i_2 - 1] = ((!((min(((~(arr_1 [i_2]))), (!var_6))))));
        var_14 = (((((18446744073709551615 ? (arr_1 [i_2 - 1]) : ((1 ? 15 : 28238))))) || ((((((arr_11 [i_2 - 1]) && var_5)) ? ((((!(arr_11 [i_2 - 1]))))) : var_2)))));
        arr_14 [i_2] = (~((1 ? 1253858486851041741 : 11)));
    }
    #pragma endscop
}
