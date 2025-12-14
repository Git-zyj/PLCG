/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((var_15 ? var_3 : var_17))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = ((var_10 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                var_21 = ((arr_2 [i_0] [i_0] [i_2 + 4]) ? (arr_2 [i_0] [i_0] [i_2 + 1]) : 1);
                var_22 = (arr_2 [i_0] [i_2 + 1] [i_2 + 1]);

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_23 = var_0;
                    var_24 = (((arr_3 [i_0]) ? var_14 : (arr_0 [i_0] [i_3 + 1])));
                    var_25 = (!1);

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_26 = (min(var_26, (arr_5 [i_0] [i_1])));
                        var_27 = (min(var_27, (~-var_12)));
                        var_28 = -8171538281862577543;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_29 = ((-(arr_12 [i_0] [i_1] [i_0] [i_3 + 1] [i_5] [i_3 + 1])));
                        arr_16 [i_0] [8] [i_0] [i_0] [i_5] = (~var_4);
                    }
                }
                var_30 = (arr_7 [i_2] [i_0] [i_2 - 1] [i_1] [i_0]);
                var_31 = (min(var_31, (((arr_4 [i_0] [i_1] [i_2 + 2]) ? (~-7445676579139442116) : (arr_3 [i_1])))));
            }
            var_32 = var_2;
            arr_17 [i_0] = (((arr_4 [i_0] [i_1] [i_0]) ? (((3054799605 ? var_6 : 53))) : (~0)));
            var_33 = var_5;
        }
        var_34 ^= 27162;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_35 = 2544192401;
        var_36 = 91;
        var_37 = ((5807790605173890665 ? (((!var_5) ? (min((arr_13 [i_6]), 0)) : (((-(arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])))))) : 18446744073709551615));
        arr_20 [i_6] [8] &= var_9;
    }
    #pragma endscop
}
