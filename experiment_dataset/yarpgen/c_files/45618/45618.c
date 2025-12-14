/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 *= (arr_2 [i_0]);
        var_14 = (min(58290, 34521));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_15 = var_11;
        var_16 += (34528 == (arr_0 [i_1 - 2]));
        arr_6 [i_1] = (((18101985682459696880 ? 34534 : (arr_3 [i_1]))));
        arr_7 [i_1] = var_5;
    }
    #pragma endscop
}
