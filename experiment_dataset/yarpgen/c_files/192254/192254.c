/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((-1972807726 ? -1972807709 : -1940477081))) ? (max(var_4, var_4)) : (((var_10 ? var_7 : -559184695)))))) ? ((~(63906 & -1972807704))) : (max(-1875193654, 374033147)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 = min(-1947797793, 5251556824792625072);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_22 = ((((((-1972807704 % var_2) ? (var_16 % 11338750148311364557) : -1229905611))) ? var_18 : ((3887358292723641061 ? 1972807688 : 7107993925398187059))));
            var_23 = (14559385780985910555 && -1972807681);
            arr_5 [16] [i_1] [i_1] = (((((11338750148311364557 ? var_13 : var_18))) ? ((54659 ? ((14559385780985910544 ? 403710636 : -1940477076)) : var_12)) : (1972807680 <= 26044)));
        }
        var_24 = (-(((((16368371652504280031 ? var_2 : var_15))) ? 3887358292723641065 : var_15)));
    }
    var_25 = ((!((((~-1633373555) / 1086167087)))));
    var_26 = var_0;
    #pragma endscop
}
