/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_13 ? var_5 : ((((var_11 || 19) & (0 ^ var_14))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 |= ((14 == (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [1] [1])))));
        var_21 = ((1098191399791249231 ^ (arr_1 [i_0] [i_0])));
        var_22 |= (((((arr_1 [i_0] [i_0]) && 5877195795034018196)) ? ((((arr_1 [i_0] [11]) && (arr_0 [7])))) : (((21880 || (arr_1 [i_0] [2]))))));
        var_23 = (0 < ((((arr_1 [i_0] [i_0]) > 15))));
    }
    var_24 = var_6;
    var_25 = ((var_1 && (!var_16)));
    var_26 = ((var_12 ? (((((241 >> (-2113620329 + 2113620346)))) ? (~var_4) : (-23 > 0))) : (min(-255, var_4))));
    #pragma endscop
}
