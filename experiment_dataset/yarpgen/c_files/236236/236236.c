/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = (((((-113 || var_12) < (((-1 + 9223372036854775807) << (((arr_0 [i_0] [i_0 - 1]) - 33297)))))) || 0));
        var_16 = ((~(~var_4)));
    }
    var_17 = ((-3871291123387364430 ? -1506614910 : 1556942370));
    var_18 = ((var_4 || (((-959666283903034888 ^ ((96 ? -3871291123387364423 : 0)))))));
    var_19 = ((var_13 == (min(((var_5 << (4163035169 - 4163035133))), (var_10 / 3871291123387364446)))));
    var_20 = ((var_14 ? (max(((-43 ? 1506614909 : 1)), -1107018228)) : var_12));
    #pragma endscop
}
