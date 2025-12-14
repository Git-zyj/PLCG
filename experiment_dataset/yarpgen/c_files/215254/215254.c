/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (-(255 & 4294967031));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 - 1]) ? -3422701518 : (((arr_1 [i_0]) ? var_6 : -110))));
        arr_4 [i_0] = ((-((1849994102 ? 2908827231 : 103))));
        var_20 *= (max((max(9, 1631556560)), (arr_1 [i_0 + 3])));
        arr_5 [i_0] &= -2444973188;
        arr_6 [i_0] [i_0] |= (min((((22 >> (4294967295 - 4294967285)))), ((var_1 ? 3309330887 : 4294967282))));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        var_21 = -var_3;
        var_22 = ((-134 ? (((min(255, -85)))) : 3586237237));
        var_23 = (150 ? -28 : 4085694626);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_24 = ((((((min(12, 255))) ? -3981004664 : 0))) ? (3645428333 & 16) : -3309330872);
        arr_11 [6] [6] &= ((109 << (((arr_10 [i_2]) - 1543334718))));
    }
    var_25 = var_7;
    #pragma endscop
}
