/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_13 *= ((-63 ? (63832 != 183) : 102));
        arr_4 [i_0] [i_0] = var_4;
        var_14 *= ((-43 < (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 |= (arr_6 [i_1]);
        var_16 *= ((!((!(arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 = (((((arr_2 [i_2]) | (arr_8 [i_2]))) >= (arr_8 [i_2])));
        arr_10 [i_2] = (max((((!(arr_7 [i_2])))), (arr_0 [i_2])));
        arr_11 [i_2] = ((((((arr_1 [i_2]) / ((4294967282 - (arr_1 [i_2])))))) ? (max(-110, ((max(var_1, 194))))) : (arr_8 [i_2])));
    }
    var_18 = 65535;
    #pragma endscop
}
