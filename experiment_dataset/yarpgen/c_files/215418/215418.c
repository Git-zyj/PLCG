/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((4294967272 ? var_11 : var_4))) | ((255 ? var_3 : var_5)))), ((((var_3 < 3) != (var_2 == 0))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (14 + 5632758370980424197);
            arr_7 [i_0] [i_0] [i_0] = ((-((6 ? 94 : 0))));
        }
        var_16 = ((var_12 ? var_9 : 1580744384));
        var_17 *= (1 != 3945375482);
        arr_8 [i_0] = ((6 ? var_3 : 65535));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_18 = (min(var_18, (((-(28 > var_7))))));
        arr_13 [i_2 - 2] [i_2] = (((((((15 ? -13076 : -32000)) + (!2)))) ? ((min(var_7, 8))) : 229));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_19 = (max(var_19, ((((~3945375471) / 3)))));
        var_20 = ((((min((242 / 5), ((-518426270 ? -127 : 0))))) ? (((var_10 ? (19 / var_13) : (var_4 | var_4)))) : 1));
        arr_16 [i_3] [i_3] = ((((((((125 ? var_6 : -1)) + 9223372036854775807)) >> (((~var_13) + 16502)))) & ((min((2016425557 >= 255), 1550093536)))));
        var_21 += (min((((0 || (~3881460732)))), (~742385375)));
    }
    #pragma endscop
}
