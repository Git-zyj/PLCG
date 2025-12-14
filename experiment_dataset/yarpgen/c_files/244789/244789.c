/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_21 *= ((2156 ? 1 : 1));
        arr_4 [i_0] [i_0 - 3] = (((arr_0 [i_0 + 1]) % (((1 ? 9206544398913584369 : 15)))));
        var_22 = (((3458764513820540928 != 14636) ^ var_2));
        arr_5 [i_0] = (max((max((((arr_3 [1]) ? 2977887187 : (arr_0 [i_0]))), -275095058)), (min((min(var_8, (arr_0 [i_0 - 2]))), ((-(arr_0 [i_0])))))));
    }
    var_23 *= (min((min(var_3, -var_10)), ((max(1, (max(1, var_4)))))));
    var_24 = ((((min(var_7, var_12))) ? var_6 : (min(((-2028047031 ? var_14 : var_5)), var_9))));
    var_25 = var_16;
    #pragma endscop
}
