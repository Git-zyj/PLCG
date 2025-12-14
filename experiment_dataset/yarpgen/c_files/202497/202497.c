/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((~((((var_8 ? var_1 : var_2))))));
            var_12 = (((((arr_1 [i_0] [15]) ? (arr_3 [i_1] [0] [0]) : (arr_0 [i_0]))) >> (((max(48110, 8723749107548954196)) - 8723749107548954170))));
            var_13 = var_6;
        }
        arr_6 [i_0] = (((((-(arr_1 [i_0] [i_0])))) * (((arr_3 [i_0] [i_0] [i_0]) / var_3))));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = -8723749107548954197;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_2] [i_2] = (((arr_10 [i_2] [i_2 - 1] [i_2 + 1]) ? 230 : (arr_1 [i_2] [i_2 - 1])));

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_19 [i_2] = (((arr_3 [i_4] [i_3] [i_2]) ? -16889 : (arr_17 [i_3] [i_2 - 1])));
                arr_20 [i_2 + 1] [i_2] = (arr_1 [i_2 - 1] [i_2 - 1]);
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_14 = (((((11 / (arr_2 [i_3])))) ? var_6 : 25136));

                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_15 = ((!(((-14039 ? var_0 : 110)))));
                        var_16 = arr_4 [i_6 + 2] [i_3] [i_2 - 1];
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_34 [i_2] [i_3] [i_5] = 55;
                        var_17 ^= (arr_32 [i_8]);
                        arr_35 [i_2] [4] [4] [i_2 + 1] [i_2] [9] [i_2] = ((~(arr_11 [i_6 + 3])));
                    }

                    for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_18 = ((-14024 ? 23153 : -11878));
                        var_19 = ((~(arr_26 [8] [3] [i_5] [3] [i_2] [i_2])));
                        var_20 = var_5;
                        arr_39 [i_2] [i_9] [i_5] [i_5] [0] [i_2] = ((2 ? (arr_28 [i_2] [i_6] [i_6 + 3] [i_5] [i_2]) : (arr_28 [i_2] [i_6] [i_6 - 1] [i_5] [i_2])));
                    }
                    for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_2] [i_2] [i_3] [i_5] [i_6] [i_10] = var_10;
                        var_21 = (arr_25 [i_3] [i_2] [i_2] [i_2]);
                        arr_44 [i_2] = var_6;
                        var_22 = ((-((11 ? 16889 : 32767))));
                    }
                    var_23 = (((arr_30 [i_2 - 1]) & (~var_8)));
                    var_24 = (!var_0);

                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_25 = (arr_8 [i_2 + 1] [i_2]);
                        var_26 = (!var_8);
                        var_27 = ((-9223372036854775807 ? (arr_3 [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (arr_47 [i_11 + 1] [i_2] [i_6 + 3] [i_6] [i_6 - 1] [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
