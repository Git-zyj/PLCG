/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_1;
    var_16 = (min(var_16, (((var_6 / ((~(((-9223372036854775807 - 1) / var_14)))))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (!4294967283);
        var_17 = (max(var_17, (((4294967295 ? -1 : 254)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 -= -7625;
        var_19 = (max(var_19, ((((arr_5 [i_1] [i_1]) > var_2)))));
        var_20 = ((((4294967295 ? 1168207893 : 4294967291)) * -24543));
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (arr_4 [i_2]);
        var_21 = (min((((max((arr_6 [i_2] [i_2]), var_2)) / (((var_9 ? var_1 : 1))))), ((max(6872, 7644)))));
        var_22 ^= ((-4294967278 || ((!(arr_5 [i_2 + 1] [i_2 + 1])))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 += (min(-var_4, (max(var_9, (arr_9 [i_3])))));
        var_24 *= (16 != 4294967289);
    }
    #pragma endscop
}
