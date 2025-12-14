/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 |= ((var_13 + 2147483647) << (var_12 - 1293047980));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 *= ((+(max((max((arr_1 [i_0]), 2749812942)), (((-(arr_1 [i_0]))))))));
        arr_2 [i_0] [7] = ((((((((arr_1 [i_0]) && var_10))) < ((max((arr_0 [i_0]), var_17))))) ? (arr_0 [i_0 - 1]) : var_2));
        var_21 |= (~2749812942);
        arr_3 [i_0] = ((((((((2749812932 ? -5234678723444876865 : (arr_1 [i_0])))) ? 17 : (arr_1 [i_0 - 1])))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) : (((~var_7) ? ((-(arr_1 [i_0]))) : (((arr_1 [i_0]) ? var_5 : var_4))))));
        var_22 = (max((max(2749812942, var_0)), var_17));
    }
    #pragma endscop
}
