/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 / var_7);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, (((var_1 * ((var_2 + (65535 / var_8))))))));
        var_15 = ((!(var_11 >> var_11)));
        var_16 += var_7;
        arr_2 [22] &= (((49086 + 73) > (983040 > 45007)));
        arr_3 [i_0] [20] &= ((var_3 >> ((var_10 & ((min(16470, var_3)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, var_11));
        var_18 = -var_10;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, var_0));
        arr_8 [i_2] [i_2 - 1] = var_5;
        var_20 *= var_11;
        var_21 += var_8;
    }
    var_22 = ((((~(!var_12))) / (((var_0 <= (max(var_3, var_2)))))));
    var_23 = (min(var_11, 1));
    #pragma endscop
}
