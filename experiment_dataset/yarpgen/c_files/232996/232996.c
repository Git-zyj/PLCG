/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = (arr_0 [i_0 + 2]);
            arr_5 [i_1] = (arr_3 [i_0] [i_0] [i_0]);
            arr_6 [i_1] = -23957;
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_20 = (min(var_20, var_5));
            var_21 = var_11;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_22 -= (((arr_3 [i_3] [i_3] [i_0 - 1]) ^ (((arr_8 [i_0]) ? -23957 : var_11))));
            var_23 = 53;
            var_24 *= ((1 != (arr_11 [i_0 - 1] [i_0 + 1])));
            var_25 = (((arr_0 [i_0 - 1]) ? var_9 : (-98 / -23936)));
        }
        arr_12 [i_0] [i_0] = (arr_2 [i_0]);
        arr_13 [i_0] [i_0 + 1] = ((-63 ? (((58 ? var_4 : ((max((arr_9 [i_0] [0] [i_0]), -32)))))) : (arr_2 [i_0 + 2])));
        var_26 = 52;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_27 += -303609620;
        var_28 = -1417383711882600274;
        var_29 ^= (!65523);
    }
    var_30 = (max(var_30, var_15));
    #pragma endscop
}
