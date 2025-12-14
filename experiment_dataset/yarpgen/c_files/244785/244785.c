/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 *= 17504344969728581157;
        arr_2 [i_0] [i_0] |= ((((max(1, 175)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] = ((174 >> (32640 - 32615)));
            var_18 ^= ((var_0 ? (var_8 + 168) : 0));
        }
        var_19 = 62862;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_20 = ((~(!var_8)));
        var_21 = ((17504344969728581156 ? 167 : 175));
        var_22 = (((var_10 | var_1) / 3));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_23 = (max(var_23, (((var_8 ? ((min((-127 - 1), 6))) : (arr_13 [16]))))));
        var_24 = ((+((((arr_13 [i_3]) >= (arr_13 [i_3]))))));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_25 += (((var_13 ? -4826164931701380553 : (((max(146, 31868)))))));
        arr_16 [i_4 + 1] = ((0 ? -27596521 : 32639));
    }
    var_26 = (min(var_26, 210045304497674860));
    #pragma endscop
}
