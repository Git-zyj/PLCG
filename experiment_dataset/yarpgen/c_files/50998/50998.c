/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (750005874 ? ((((-1616240650 / 750005858) & -1616240650))) : 750005847);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((~(1616240649 + var_5)));
        var_13 -= (!(arr_0 [i_0] [i_0]));
        arr_4 [i_0] = var_9;
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (((((18446744073709551615 ? 12741511999703836874 : 0))) | (0 >= 1)));
        arr_8 [i_1] [i_1] = -1616240656;
        var_15 ^= ((((min((arr_7 [i_1] [i_1]), -2147483642))) ? -1296008427 : (((arr_7 [i_1] [i_1]) ? var_10 : (arr_7 [i_1] [i_1])))));
        var_16 = (min(var_16, (!135788141)));
    }
    var_17 |= ((((max(-1616240655, (!var_5)))) ? 18158796904829435005 : -1));
    #pragma endscop
}
