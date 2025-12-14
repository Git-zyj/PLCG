/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((min(399731485, 7790897599336070146))) ? 399731504 : ((((!(arr_3 [i_0])))))));
        var_18 = (((((((arr_1 [i_0]) == 1854101011)))) / ((-(arr_2 [i_0])))));
        arr_4 [i_0] = (((((1 >> (313842587 - 313842568)))) & ((~((var_6 ^ (arr_2 [i_0])))))));
    }
    var_19 = (((23451 % var_7) ? -var_2 : 45919));
    var_20 = var_5;
    #pragma endscop
}
