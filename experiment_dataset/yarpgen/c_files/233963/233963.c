/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [16] [15] = -402399564021399682;
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = ((-((-(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_11 -= var_7;
        arr_10 [i_1] = ((arr_0 [i_1 + 2]) / (arr_0 [i_1 + 3]));
    }

    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_13 [i_2] = min((((var_3 || 1248425272) / ((max(4968, 6))))), -4969);
        var_12 *= -18839;
        var_13 = (arr_2 [i_2]);
    }
    #pragma endscop
}
