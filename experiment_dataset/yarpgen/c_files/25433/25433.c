/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((min((~55), ((min(59, -47)))))) & (((((min(50, -7677649853001097344)) + 9223372036854775807)) >> (var_7 - 796241822)))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = (-97 == -98);
        var_22 = (((((((60 ? -3316 : 4452))) ? -51 : (160 != 112))) & (-139875911 | 47277)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((min(3316, (min(209, 1716))))) < (!44127)));
        var_23 = ((66 == (28 & -3455)));
        var_24 = (((((((17153410566927433619 << (21063 - 21055))) <= 86))) % (64 & -29867)));
        var_25 = (((-6809524395536395117 || 1227904043) > (12 | -76)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_7 [1] [i_2] = min(((max(9880, 215))), ((min(112, -76))));
        arr_8 [i_2] &= ((((((min(91, 112))))) > (max(-3941853130198484752, (228 <= 63)))));
    }
    var_26 = ((var_1 != ((max((13412010468609425543 != 44472), 8601)))));
    #pragma endscop
}
