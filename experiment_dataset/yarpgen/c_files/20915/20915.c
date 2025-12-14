/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_8 ? var_5 : var_18))) ? (1 & 1) : (min(var_1, (min(var_13, var_2))))));
    var_21 += (((var_16 ? ((var_14 ? var_11 : var_2)) : var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = (arr_0 [i_0] [i_0]);
        var_23 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = (~-19476);
        var_24 *= var_2;
        arr_9 [i_1] = (~var_12);
        var_25 = -21448;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_14 [i_2] [i_2] |= (((((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2]))) ^ var_12));
        var_26 ^= (((((arr_10 [i_2]) ? var_17 : (arr_12 [i_2]))) << (((min((((arr_10 [i_2]) ? var_1 : (arr_13 [i_2] [i_2]))), (((((arr_11 [i_2] [12]) + 2147483647)) << (41050 - 41050))))) + 43))));
    }
    var_27 = ((var_15 >= (min(var_6, (var_15 / var_19)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_28 = (((max((arr_18 [i_4]), 12429233927967891093)) ^ (arr_18 [i_4])));
                arr_22 [i_3] [i_3] [i_3] = (arr_10 [i_4]);
            }
        }
    }
    #pragma endscop
}
