/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 241;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = arr_3 [i_0] [i_0 + 2];
            arr_6 [i_0 + 4] [i_0 + 4] [0] = (((arr_2 [i_0 - 1] [i_1 + 2]) * var_0));
        }
        var_16 = ((-21868 != (arr_1 [i_0 + 2] [i_0 + 2])));
        arr_7 [i_0] [3] = ((-(((!(arr_1 [i_0] [i_0 + 3]))))));
        arr_8 [i_0] [i_0] = 8211233933799358088;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_12 [7] [i_2 - 1] = (((var_11 / -121) != -var_7));
        var_17 = (((arr_10 [i_2 - 1]) ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1])));
        arr_13 [i_2] [8] = ((arr_4 [i_2 - 1]) > (!var_10));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] = (((arr_17 [i_3 - 1] [i_4] [20]) ? (arr_17 [i_3 + 3] [i_3 + 3] [i_4 - 1]) : var_10));
            var_18 = (arr_15 [i_3]);
            var_19 = ((((arr_15 [i_3]) ? var_7 : (arr_16 [i_3] [i_4]))));
        }
        arr_20 [4] = var_3;

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_25 [i_3] [i_3 + 1] [i_5] = var_11;
            var_20 = var_9;
            var_21 = (var_6 / (arr_14 [i_3 + 3]));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_35 [i_8] = ((~((var_4 - (arr_23 [i_7] [i_7])))));
                            var_22 = (var_11 ? (((var_4 ? (arr_32 [7] [i_8] [i_7 + 1] [i_3]) : -1871694325))) : (~-4470565429505218164));
                        }
                    }
                }
            }
            var_23 = (arr_30 [i_3 + 1] [i_3 + 2] [i_3]);
            arr_36 [5] [5] = (arr_22 [i_6]);
        }
        arr_37 [i_3] [i_3] = (((arr_16 [i_3 - 1] [i_3 - 1]) << (-225595826 + 225595853)));
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_41 [i_10] [i_10] = ((~(!-225595826)));
        arr_42 [i_10] [i_10] = -27852;
        arr_43 [i_10] = -121;
    }
    var_24 = (27849 >= 1);
    #pragma endscop
}
