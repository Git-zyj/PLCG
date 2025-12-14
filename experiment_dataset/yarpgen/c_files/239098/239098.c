/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-1961990073684167195 ? var_10 : (((!(!1))))));
    var_13 &= ((((((var_9 ? 828059438 : 255)) ? (~1) : var_0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (!(arr_1 [i_0] [i_0]));
        var_14 = (max((!-1), ((-78 ? (arr_1 [i_0] [i_0]) : ((9223372036854775807 ? 3 : (arr_0 [i_0])))))));
        arr_3 [i_0] [11] &= 1;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = 0;
        arr_7 [1] = (arr_1 [i_1] [1]);
        var_15 = (min(var_15, 1));
        arr_8 [i_1] = (arr_1 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_10 [i_2]);
        arr_13 [i_2] [3] = -1;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_16 = ((1 ? 1 : 1));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_19 [i_3] = 8896793477438282402;
            var_17 = 144;
            var_18 = (min(var_18, (arr_1 [i_3] [i_4])));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_19 = (max(1, ((max(1, (arr_20 [i_3] [i_5 + 2] [i_3]))))));
            arr_22 [i_5] [i_5 - 1] = (arr_16 [i_5 + 1]);

            /* vectorizable */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_20 = (min(var_20, ((((arr_23 [i_3] [i_5 - 1] [i_6] [i_6]) ? 268435455 : 1)))));
                var_21 = (((arr_11 [i_5 + 2] [i_5 + 1]) ? (arr_18 [i_3] [i_5 + 2] [13]) : (((4095 ? 1 : (arr_5 [5]))))));
            }
            var_22 = ((!(arr_21 [i_5 - 1])));
            var_23 = ((1 ? (min((arr_1 [i_3] [i_5]), (max((arr_4 [i_3]), -3)))) : (arr_5 [i_3])));
        }
        var_24 = ((1 ? 239 : 20));
        var_25 ^= ((~(arr_18 [i_3] [i_3] [i_3])));
    }
    var_26 = var_0;
    var_27 = (!var_0);
    #pragma endscop
}
