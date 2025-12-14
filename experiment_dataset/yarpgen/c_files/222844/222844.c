/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(var_15, (!-1)));
        var_16 = ((18446744073709551615 ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 + 2])));
        var_17 = ((~((((arr_1 [2]) <= (arr_1 [9]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_18 = 1;
        var_19 *= ((~(((!var_7) ? (arr_2 [6]) : (min(var_11, var_13))))));
        var_20 = (max(var_20, var_1));
        arr_4 [1] &= (arr_0 [i_1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 += (arr_1 [19]);
            var_22 = (max(1, var_13));
            arr_7 [i_1] [i_1] = 0;
            arr_8 [i_2] [8] [i_2] &= (arr_2 [i_2]);
            var_23 ^= ((0 ? (max((max(-1995325354, 1)), (min(-1995325354, 0)))) : ((min(49645, var_6)))));
        }
    }
    var_24 = (max(var_24, ((((var_13 == 4294967295) ? var_3 : var_9)))));
    var_25 = ((((((805306368 >= var_4) / ((min(1, var_5)))))) ? var_12 : var_1));
    var_26 -= ((((((((1 ? var_2 : var_6))) || (var_8 <= var_0)))) & ((min(79, var_10)))));
    #pragma endscop
}
