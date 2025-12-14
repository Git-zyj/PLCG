/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= ((((((arr_2 [i_0]) ? 250 : (max((arr_2 [i_0]), 1))))) ? ((0 ? 50604 : ((3 ? var_10 : var_10)))) : 1));
        arr_4 [i_0] [i_0] = ((+((1 ? ((var_5 ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])))));
    }
    var_13 += ((((min((((1 ? 1 : -60))), ((var_8 ? var_6 : var_12))))) ? (((~111) ? (~-82) : 9)) : ((40331960683034258 ? (min(-1919633384, var_10)) : (1 / 1)))));
    var_14 = (((((-16618 ? 3557540710949572852 : 1))) ? ((((-2936736543749948116 <= -9) != var_0))) : var_4));
    var_15 = min((max(((var_6 ? var_2 : 1)), 1)), ((max(var_6, ((var_4 ? var_0 : 100))))));
    #pragma endscop
}
