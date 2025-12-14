/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 -= ((var_19 ? var_2 : (((((var_4 + (arr_0 [i_0])))) ? ((((arr_2 [i_0]) && (arr_0 [i_0])))) : (arr_2 [i_0])))));
        arr_3 [i_0] = var_15;
        arr_4 [i_0] = (((arr_1 [i_0]) * (((max((arr_1 [i_0]), var_1)) << (((var_2 ^ var_12) - 12008486931748967477))))));
    }
    var_21 = (((max(((var_6 ? var_13 : var_5)), var_5))) ? ((((var_12 || var_3) % var_4))) : (((min(var_13, var_18)) - (var_3 == var_11))));
    var_22 = (var_3 << (((var_3 == ((((var_17 + 2147483647) << (((var_17 + 7147) - 4)))))))));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = var_12;
        arr_8 [i_1] = ((((((max(var_5, var_6)) + (((var_6 ? var_16 : var_13)))))) ? (arr_6 [i_1]) : (arr_5 [23])));
    }
    #pragma endscop
}
