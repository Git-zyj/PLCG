/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 4294967295;
        arr_4 [i_0] [i_0] = 4994620805438737313;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = 65534;
        arr_10 [i_1] = 3;
        arr_11 [i_1] [i_1] = ((var_17 ^ (arr_7 [i_1])));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = -4994620805438737322;

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_18 [i_3] [i_3] = arr_12 [i_3];
            arr_19 [i_3] [i_3] = (~49320);
            var_18 ^= (arr_15 [i_2] [i_3 + 1] [i_3 + 1]);
            arr_20 [i_2] [i_3] [i_3] = arr_13 [i_3];
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_19 = ((var_11 ? (arr_16 [i_4]) : (arr_16 [i_4])));
            var_20 = var_10;

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_26 [i_4] [i_4] = (((var_8 >> (4096426070 - 4096426027))));
                arr_27 [i_2] [i_4] [i_5] = var_5;
                arr_28 [i_4] = (arr_23 [i_4 + 1] [i_4 + 1]);
                var_21 = (max(var_21, (arr_24 [i_5])));
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_31 [i_6] [i_6] [i_2] = var_12;
            var_22 = (min(var_22, var_16));
            arr_32 [i_2] [i_2] [i_2] = ((~(arr_22 [i_2] [i_6] [i_6])));
        }
        var_23 = (((arr_17 [i_2] [i_2] [i_2]) < ((~(arr_24 [i_2])))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_24 = (min(var_24, ((((((8192 ? var_5 : (arr_34 [i_7]))))) ? (((arr_33 [i_7 - 1]) ? (var_12 ^ var_11) : var_0)) : (((arr_34 [i_7 - 1]) % var_6))))));
        var_25 = (min(var_25, (max((var_2 - var_17), ((((arr_34 [i_7 - 1]) % (arr_34 [i_7 - 1]))))))));
    }
    #pragma endscop
}
