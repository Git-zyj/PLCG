/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (min((-9223372036854775807 - 1), 2955465468));
    var_17 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, (-4643603353826993651 * 0)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = (~-1931157986738435567);

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_19 -= (0 >= 13);
                arr_10 [7] [i_1] [i_0] = ((-(((arr_3 [i_2 - 1]) - var_0))));
                var_20 &= (arr_4 [i_2 - 2] [i_1]);
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_3] = (var_12 ? (arr_0 [i_3] [i_0]) : var_13);
                var_21 *= (((arr_5 [i_0]) == (arr_0 [i_0] [i_0])));
                arr_14 [i_0] [i_0] = 8518;
                var_22 = (arr_7 [i_0] [i_1] [7] [i_1]);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_23 = (min(var_23, (((0 + ((((arr_2 [i_1]) ? (arr_7 [i_0] [i_0] [6] [i_0]) : (arr_15 [i_0])))))))));
                var_24 = (min(var_24, var_3));

                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_25 -= (((arr_19 [i_0] [i_0]) + (((arr_7 [8] [1] [i_4] [1]) ? 16294 : (arr_3 [i_0])))));
                    var_26 = (min(var_26, (arr_0 [i_5 - 1] [i_5 - 1])));
                }
            }
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            arr_25 [i_0] [i_6] = ((var_1 ? (arr_5 [i_6 + 1]) : 0));
            arr_26 [0] = (((arr_4 [i_6 - 1] [i_6 + 2]) ? (((arr_8 [i_0] [i_6 - 1] [9] [i_6 + 3]) ? (arr_22 [11] [i_0] [7] [7] [i_6 + 2] [11]) : var_5)) : (arr_16 [i_0] [i_6 + 3] [3] [i_6])));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_27 = (((((var_11 ? var_6 : var_5))) ? (arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 4]) : (arr_5 [i_6 + 2])));
                var_28 = (arr_12 [i_0] [i_0] [i_7]);
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_29 = ((~(arr_8 [i_9] [i_9] [i_9] [3])));
                            var_30 = (((arr_2 [i_6 - 1]) < (arr_2 [i_6 + 4])));
                            var_31 = (((arr_21 [i_6]) ? (arr_1 [i_8] [7]) : (arr_20 [i_0] [i_9] [11] [i_6] [i_10])));
                            arr_37 [10] [i_9] [1] [10] [i_0] = arr_31 [0];
                        }
                    }
                }
                arr_38 [11] [i_6] [1] [3] = -5170743863323680096;
            }
        }
    }
    #pragma endscop
}
