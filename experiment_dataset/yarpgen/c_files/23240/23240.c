/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-var_8 ? (((~var_3) / ((var_8 ? var_7 : var_9)))) : (((!((max(-69, 3960820974517368046)))))))))));
    var_15 = var_3;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 ^= (((((10139594747014600228 ^ var_0) | 1430557647)) | var_6));
        var_18 = (min(var_18, ((((arr_2 [i_0]) | var_4)))));
        var_19 = (min(var_19, ((var_7 * (((((var_1 ^ (arr_0 [i_0])))) ? var_5 : var_7))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (!(((arr_4 [i_1]) || 2147483644)));
        var_20 = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 = (min(var_21, (((var_13 == 202) ? (118 == var_5) : (arr_4 [i_2])))));
        arr_10 [i_2] = (var_3 ^ ((var_11 ? -32767 : var_13)));
    }
    #pragma endscop
}
