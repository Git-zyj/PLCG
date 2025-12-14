/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~var_0) ? 0 : ((6229126096681981025 ? var_8 : 1))))) ? (~var_10) : (~var_4)));
    var_18 = var_2;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [12] |= ((-(min((~var_8), (arr_1 [10])))));
        var_19 = (min(var_19, ((((((((arr_0 [i_0] [i_0]) ? 1 : (arr_0 [i_0] [i_0]))) <= ((~(arr_0 [i_0] [i_0]))))) ? 0 : (((1 & 1) ? (max(var_6, 1)) : ((var_14 ? var_2 : 1)))))))));
        var_20 = ((1 * (((min(var_11, (arr_0 [i_0] [i_0 - 1]))) ^ var_6))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (max((((var_11 ^ var_4) ^ (-127 - 1))), (~var_11)));
        arr_5 [i_1] = (-127 - 1);
    }
    var_22 = (var_7 == var_14);
    #pragma endscop
}
