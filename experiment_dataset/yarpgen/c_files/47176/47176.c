/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= (arr_0 [i_0]);
        arr_2 [3] [i_0] = var_3;

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_5 [i_0] [i_0] [9]) - var_5));
            arr_7 [i_1] [i_1] = ((var_13 || (arr_4 [i_1 - 2] [i_1])));
            var_17 = (min(var_17, (1852727749996696523 / 28302)));
            arr_8 [10] [i_0] [i_0] = 0;
            arr_9 [i_0] [i_0] = (1 == 65280);
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_18 = (min(var_18, (!var_10)));
                var_19 *= (var_11 != var_8);

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_20 = 1;
                    var_21 = ((-(arr_15 [i_3 - 1] [15] [i_3 - 1] [i_3 + 1])));
                    var_22 = (max(var_22, 33554431));
                    arr_19 [i_0] [i_2] [i_3] [i_3] = (13 || -100);
                }
                arr_20 [i_3] [i_2] [i_3] [i_3] = (arr_5 [i_3 + 1] [i_3] [i_2 + 2]);
                var_23 = -127;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_0] = ((~(arr_4 [i_5] [i_2 - 1])));

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_27 [0] [i_2] [15] [i_2] [i_2] = (arr_3 [i_2 - 1] [i_2 + 2]);
                    var_24 -= (-var_5 && var_3);
                    var_25 = (arr_3 [i_2 + 2] [i_2]);
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_26 = ((var_10 % (arr_29 [i_0] [i_2] [i_5])));
                    var_27 = (((arr_23 [i_7]) + var_6));
                }
                arr_30 [i_5] [13] [i_0] = ((-((~(arr_21 [i_0] [i_2] [i_5] [i_5])))));
            }
            var_28 = (min(var_28, (arr_26 [i_0] [i_0] [i_0] [i_2 - 1] [i_2])));
        }
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            arr_34 [13] [i_8] = (((arr_10 [12] [i_8 - 1]) == ((-(arr_31 [i_8 + 1] [i_0] [i_0])))));
            arr_35 [15] [i_8] = (~var_8);
        }
        arr_36 [0] = -0;
        arr_37 [i_0] &= ((var_11 && (arr_28 [i_0] [i_0] [i_0])));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        var_29 = (min((max(var_4, ((min(-13991, var_6))))), ((((min((arr_29 [5] [i_9 - 2] [5]), var_0)) >= 65154)))));
        var_30 *= ((256 <= (arr_29 [i_9 - 1] [i_9 + 1] [i_9 + 1])));
    }
    #pragma endscop
}
