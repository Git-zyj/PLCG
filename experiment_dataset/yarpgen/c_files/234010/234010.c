/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, (((((((21408 | var_9) * ((2077213483 / (arr_1 [i_0] [5])))))) ? (((((1 << (18446744073709551615 - 18446744073709551593)))) ? (((arr_1 [i_0 - 4] [i_0]) ? var_1 : (arr_1 [i_0 - 3] [i_0]))) : -21422)) : (arr_0 [i_0]))))));
        var_14 = ((((max(941628026, ((((arr_0 [i_0]) > var_7)))))) ? (((((((arr_1 [0] [i_0]) ? -649112986 : 1424552904))) ? (arr_1 [i_0 - 4] [i_0 - 2]) : (((-(arr_0 [i_0 - 3]))))))) : (min((~var_8), ((1 ? -4082620849886013361 : var_4))))));
        var_15 -= ((~(((20373 != (arr_0 [i_0]))))));
        arr_2 [i_0] = var_2;
        var_16 += ((!(~var_4)));
    }
    #pragma endscop
}
