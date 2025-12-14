/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_19 = ((1 ? -122 : -122));
        arr_2 [i_0] = ((43425 ? 61812 : 1));

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = ((~((((arr_1 [i_0 + 1]) && 16654905696741475986)))));
            var_20 = (((2591690569 + -19) ? (min(1791838376968075630, (arr_3 [1] [1] [1]))) : (arr_1 [i_0 + 1])));
        }
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        arr_8 [18] = ((((arr_1 [i_2 + 1]) ? (arr_1 [i_2 + 1]) : var_1)));
        arr_9 [i_2] = ((-(51001 / 1)));
        var_21 *= ((+((((arr_6 [i_2 + 1] [i_2 + 1]) >= (arr_6 [i_2 + 1] [i_2 + 1]))))));
        var_22 = (~var_11);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_23 -= (((var_2 && var_2) ? (arr_6 [21] [i_3]) : (!3720)));
        var_24 = ((!(arr_1 [i_3])));
        arr_13 [8] [i_3] = ((var_6 ? (((((arr_6 [i_3] [i_3]) ? 22 : (arr_0 [i_3]))))) : (((((var_11 ? 821399106 : (arr_6 [i_3] [i_3])))) ? 0 : (~var_2)))));
    }
    var_25 = ((((1 ? var_0 : 1)) >> (-103 + 129)));
    #pragma endscop
}
