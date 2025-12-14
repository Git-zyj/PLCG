/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, 8346695451517299654));
        arr_3 [i_0 + 1] = (min(((10100048622192251965 << (10100048622192251955 - 10100048622192251911))), (1 | 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (110306106 / 1274506601);
        var_21 ^= (1 < 18446744073709551615);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_22 = 16461563739636141553;
        var_23 = ((((((min(10100048622192251969, 1565306600)) - (min(-15, 0))))) ? (max((max(0, 10393032263657853664)), (min(-1814584563, 10393032263657853664)))) : ((max(8346695451517299650, 1)))));
        arr_8 [i_2] = (min((1 | 48), ((2069644293 ? 10393032263657853664 : 2))));
    }
    #pragma endscop
}
