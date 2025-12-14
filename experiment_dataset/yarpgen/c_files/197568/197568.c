/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_0 | (min(((min(78, 31))), (min(var_6, var_3)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= ((var_10 ? (((arr_1 [i_0]) ? (13 <= -92) : (min((arr_0 [i_0] [i_0]), var_2)))) : var_0));
        var_16 = (max((arr_0 [i_0] [i_0]), ((max((max(163, (arr_1 [i_0]))), (arr_1 [9]))))));
        var_17 = ((((max((arr_0 [i_0] [i_0]), var_10))) ? (min(((-29748 ? (arr_0 [i_0] [i_0]) : var_4)), ((((arr_0 [i_0] [i_0]) ? var_5 : (arr_1 [i_0])))))) : (((((max(var_0, (arr_0 [i_0] [i_0])))) ? (((var_5 && (arr_1 [11])))) : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_3 [i_1]) ? ((var_3 ? var_10 : 2858939492139980744)) : (arr_3 [i_1])));
        arr_5 [i_1] [i_1] = 2102489349;
        arr_6 [i_1] = (((arr_2 [i_1] [i_1]) || (arr_3 [i_1])));
        arr_7 [i_1] = (((arr_3 [i_1]) < (arr_3 [i_1])));
    }
    var_18 = 65535;
    #pragma endscop
}
