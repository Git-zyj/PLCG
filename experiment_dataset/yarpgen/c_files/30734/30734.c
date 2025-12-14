/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((-((var_14 ? var_5 : var_10)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, -var_9));
        var_19 = (max(var_19, ((((((((-133286681 ? var_12 : var_14))) ? ((-1 ? -4946 : 1479)) : -1))) ? 5896444350642420393 : (min((min((arr_1 [i_0]), 4294967271)), (min((arr_1 [i_0]), 7043824596493512877))))))));
        var_20 ^= (((4945 - var_6) ? var_9 : (-15910 <= var_8)));
        var_21 -= (min(7043824596493512874, 29569));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = ((((max(var_14, var_8))) && ((min((((var_12 ? 1600875555 : (arr_4 [i_1] [i_1])))), (var_1 - var_13))))));
        arr_5 [i_1] [i_1] = ((-22 ? 22790 : 3136074295));
        arr_6 [i_1] [i_1] = (5896444350642420393 <= 0);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = ((99 - ((max(0, -1488)))));
        var_24 = (max(var_24, (((1 - var_2) ? (arr_2 [0] [0]) : 12550299723067131223))));
        var_25 += ((((var_2 && 43060) >> (1175049734599016196 - 1175049734599016168))));
        var_26 = (min(((-((5896444350642420393 ? -104707420 : 7043824596493512865)))), -1213083832));
    }
    #pragma endscop
}
