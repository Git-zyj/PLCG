/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = ((((((((var_11 ? 0 : 0))) ? var_13 : ((var_7 ? var_13 : 65529)))) + 2147483647)) << (((((((var_12 >> (65535 - 65516)))) ^ ((var_7 ? 4 : var_8)))) - 4)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (((74 ? var_4 : -26300)))));
        arr_2 [i_0 + 2] = (0 < var_12);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 += ((((((((1 ? (arr_3 [i_1]) : var_12))) ? (!-16) : 1))) ^ (0 & 1)));
        arr_7 [i_1] = ((20 + (min(0, var_5))));
        arr_8 [i_1] = (((((((arr_5 [i_1] [i_1]) != 31511)))) + (max(1441639745, (arr_3 [i_1])))));
        var_18 = ((((min(((13380706273179335346 ? var_0 : var_6)), (-26300 ^ -1294725172)))) ? ((((255 == (255 == var_10))))) : (((arr_3 [i_1]) ? (!var_0) : ((var_11 ? 23 : var_0))))));
    }
    #pragma endscop
}
