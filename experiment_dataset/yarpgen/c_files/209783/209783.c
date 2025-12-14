/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 -= ((((max(235, (max((arr_3 [i_0]), 2059761390963061074))))) ? -27 : ((((((arr_0 [i_0]) + (arr_3 [i_0])))) ? (arr_0 [i_0]) : ((var_1 * (arr_1 [i_0])))))));
        var_11 = max((min((arr_3 [i_0]), (arr_3 [i_0]))), (((-(arr_1 [i_0])))));
        var_12 ^= ((!((max(((max(0, (arr_0 [i_0])))), ((var_9 / (arr_3 [i_0]))))))));
        var_13 += ((1 ? (arr_1 [i_0]) : ((var_5 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] |= (max((~-5957872613215766725), ((((arr_2 [i_0] [i_0]) >= (arr_3 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_14 = (arr_1 [i_1 - 2]);
        var_15 *= (537314322 == -18);
    }
    var_16 = ((-((max((var_1 || 1793695368), var_6)))));
    #pragma endscop
}
