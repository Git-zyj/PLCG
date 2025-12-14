/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(var_4, (min(var_1, 14))));
    var_13 = (~var_9);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(arr_1 [i_0 - 4]));
        var_14 += (((arr_0 [i_0 + 1] [i_0 - 2]) ? (arr_0 [i_0] [i_0]) : 2));
        var_15 = ((-7 % (((arr_1 [i_0]) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0])))));
        var_16 = (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (18446744073709551608 % 18446744073709551605);
        var_18 += (arr_1 [20]);
        var_19 = ((~(((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_20 = (max(var_20, ((((arr_7 [i_2]) ? ((max(var_7, (arr_7 [i_2 - 1])))) : ((((-(arr_0 [15] [i_2]))) - ((-(arr_0 [i_2] [i_2]))))))))));
        var_21 = (min((arr_7 [i_2]), (min((min(11, var_0)), ((min(-7, -28560)))))));
    }
    var_22 = (min(var_22, (((var_9 ? 14 : var_3)))));
    #pragma endscop
}
