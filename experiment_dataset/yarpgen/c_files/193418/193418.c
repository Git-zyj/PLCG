/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((0 & 2) % (197 || -429968557457321722)))) | ((((var_3 ? 254 : 5857342612869469999)) + (1 * var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 -= ((1433306665741041581 >= ((((7193371780928578778 <= 5857342612869470002) / ((0 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))))))));
        var_22 *= ((-(0 == 127)));
        arr_4 [i_0] = (((((-((-25270 ? var_6 : (arr_0 [1] [1])))))) ? -88 : (arr_1 [i_0] [i_0])));
    }
    var_23 = (max(var_23, (((var_9 ? (((2147483647 || 16081062318875555748) % (1 | var_2))) : var_15)))));
    #pragma endscop
}
