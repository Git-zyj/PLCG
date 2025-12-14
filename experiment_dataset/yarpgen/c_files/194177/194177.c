/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = var_14;

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_20 = ((var_11 ? 0 : (arr_5 [i_2 + 1])));

                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    var_21 = var_16;

                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = 63;
                        arr_17 [i_2] [i_2] = (((arr_15 [i_3] [6] [i_3 + 2] [i_3] [i_3] [i_3] [i_2]) ^ 0));
                    }
                }
                var_22 += var_16;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_20 [i_0] = (((arr_15 [i_0] [i_0] [i_5] [i_0] [8] [i_5] [i_5]) ? (arr_10 [i_0] [i_0] [i_5] [i_5]) : var_10));
            var_23 = (min(var_23, (((0 >> (((arr_15 [i_0] [i_0] [6] [6] [i_0] [i_0] [i_5]) - 194)))))));
            arr_21 [i_0] [i_5] = (((arr_7 [i_5] [i_5] [i_5] [i_5]) ^ 1));
        }
        arr_22 [6] = 0;
        var_24 |= (arr_19 [i_0] [i_0]);
        arr_23 [i_0] [i_0] = var_2;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_25 = (((((-(arr_5 [i_6])))) ? ((-(arr_10 [i_6] [i_6] [i_6] [1]))) : (~var_6)));
        var_26 = ((~(1 + var_13)));
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_27 -= ((2121073505 ? (arr_9 [i_7] [1] [14] [i_7]) : var_0));
        arr_30 [i_7] [i_7] = arr_26 [i_7] [i_7];
        var_28 = ((~(((((var_1 ? 193 : 7654))) ^ var_5))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_29 = (min(var_29, ((((--9479735) ? ((((max((arr_8 [i_8] [i_8] [i_9]), 697942683)) <= ((67 ? var_11 : var_4))))) : (var_9 <= var_11))))));
            arr_39 [i_9] [i_9] = ((-15 ? (6 != var_18) : ((var_14 ? (min(var_1, (arr_4 [i_8] [i_9]))) : 15))));
            arr_40 [i_9] [i_9] = (min(43896, (arr_11 [i_8] [i_9] [i_8] [i_9] [i_8])));
            var_30 -= var_17;
        }
        arr_41 [i_8] = var_4;
        var_31 = (min(var_31, ((min(1, (min(18446744073709551604, (!var_10))))))));
    }
    #pragma endscop
}
