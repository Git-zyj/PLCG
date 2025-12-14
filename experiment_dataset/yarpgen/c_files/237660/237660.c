/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_5 ? 192 : 8492)));
    var_11 = (~2044);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 |= ((max((arr_0 [i_0]), var_9)));
        arr_2 [i_0 - 3] &= (((arr_0 [i_0]) ? (((221 ? (arr_0 [i_0]) : (((57 ? 1 : 168126802)))))) : (max(0, (max(7868563259519690687, 20004))))));
        arr_3 [i_0] [i_0] = 2932211258103461847;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1 + 1]);
        var_13 = (((!(arr_4 [i_1 + 1]))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_14 = (((((10578180814189860935 ? -8471 : (((arr_4 [i_2]) ? 971477981 : (arr_1 [i_2 - 1])))))) || (((~((max(255, 14336))))))));
        var_15 = (arr_1 [i_2 + 1]);
        var_16 ^= (((arr_9 [11]) ? (!-2045) : ((max((arr_8 [i_2] [i_2]), (arr_8 [i_2 - 2] [i_2 - 2]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 *= (max((arr_10 [i_3] [i_3]), -1495385019));
        arr_12 [i_3] = (arr_11 [i_3]);
    }
    var_18 = var_3;
    #pragma endscop
}
