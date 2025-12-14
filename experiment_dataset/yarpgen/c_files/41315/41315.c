/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (((arr_2 [1] [17]) ? (arr_3 [i_0] [1]) : (min(((14851179446461576937 - (arr_1 [i_0] [i_0]))), (((arr_0 [i_0] [11]) ? (arr_1 [i_0] [i_0]) : 3595564627247974702))))));
        var_21 += ((!((max((min(0, (arr_3 [6] [i_0]))), (arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [16] = ((!(arr_6 [11])));
        var_22 = 0;
    }
    var_23 = ((max((((11 ? 61 : 4095)), (max(-12013, 15639332013164983299))))));
    var_24 *= (min((max(((max(var_19, 0))), 3595564627247974703)), (var_7 - -12013)));
    #pragma endscop
}
