/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [0] &= var_4;
        var_16 = (max(var_16, 50));
        arr_3 [i_0] = (max((~0), (((var_3 | -28495) | (~21527)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_0 [i_1]);
        var_17 ^= ((((max(35983, (arr_5 [0])))) ? (arr_1 [i_1]) : var_2));
        arr_7 [i_1] = (max(((max(-836689800, 28494))), (((23793 ? 836689776 : -21517)))));
        arr_8 [i_1] [i_1] = (arr_1 [i_1]);
    }
    var_18 = ((var_6 ? -21517 : (175 && 2970)));
    #pragma endscop
}
