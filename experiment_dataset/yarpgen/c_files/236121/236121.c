/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((max((min(4294967295, 0)), (418974944 <= 7028513916417623821)))) % (min((arr_0 [i_0]), (arr_1 [i_0])))));
        var_15 = (min(418974944, 7));
        arr_2 [i_0] = ((3297064742 ? 418974944 : 13030));
        var_16 = (max(var_16, ((max(18446744073709551615, 16499562311860551057)))));
        arr_3 [i_0] |= (((((-(1700691021 >> 0)))) ? ((min(((((arr_0 [i_0]) < 2047))), (min(71, 207))))) : ((((!3) <= ((0 ? 224065990036966840 : -26240)))))));
    }
    var_17 = (max(var_17, (402653184 < 12984)));
    var_18 = (((109 <= (min(0, 4294967288)))) ? ((((((23094 ? 234 : var_7))) ? (338828084 != 291556627428688487) : ((1203276366 ? 0 : -20362))))) : ((((-3368 ? 7241492399114053046 : -15904)) >> (6356296821326865180 - 6356296821326865126))));
    #pragma endscop
}
