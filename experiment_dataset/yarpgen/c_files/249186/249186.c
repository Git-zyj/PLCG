/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((var_4 ? ((((arr_2 [i_0]) ? ((var_12 ? 3878006847448269882 : (arr_0 [i_0]))) : var_6))) : 16383));
        arr_4 [i_0] [i_0] = (max((min(var_14, (-9223372036854775807 - 1)), (max(var_6, (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_17 = ((-(arr_13 [i_3] [i_3])));
                    arr_16 [i_3] [i_3] = ((-(arr_14 [1] [i_2 - 1] [i_3] [i_4])));
                }
                arr_17 [1] [i_3] [17] = (arr_10 [i_2]);
                var_18 = (((arr_13 [i_3] [i_2 - 1]) & (arr_13 [i_3] [i_2 - 2])));
                var_19 = ((~(arr_5 [2] [i_1])));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_20 = (((var_0 + var_0) ? 16373 : (arr_18 [i_2 + 1] [2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    arr_20 [i_1] [i_3] [i_3] [i_5] = ((((!(arr_7 [i_1] [i_1] [i_1]))) ? ((((!(arr_6 [i_3] [i_2]))))) : (((arr_18 [16] [i_3] [i_2 - 2] [1] [i_1]) ? (arr_14 [i_1] [2] [17] [i_5]) : (arr_10 [i_2 - 1])))));
                }
            }
            arr_21 [i_2] [i_1] [i_1] = var_2;
            var_21 = ((var_6 ? var_13 : var_2));
            var_22 = (~var_14);
        }
        var_23 = ((var_4 ? (arr_7 [i_1] [i_1] [i_1]) : var_13));
        var_24 = (!(arr_15 [i_1] [i_1] [i_1] [i_1]));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 = (arr_19 [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_24 [i_6] = (arr_8 [i_6]);
        arr_25 [i_6] = (min((min(var_0, var_9)), (!var_4)));
        var_26 = ((!((!(arr_23 [i_6])))));
    }
    var_27 = var_2;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            {
                var_28 = ((+((((min((arr_28 [i_8]), (arr_27 [1] [i_8 + 1])))) ? var_5 : ((min(var_7, var_7)))))));
                var_29 = (arr_27 [i_8 - 2] [i_8]);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_30 = ((-((min(((min(var_12, (arr_35 [i_11] [i_10 - 1] [i_9] [i_8] [i_8] [i_8] [1])))), (arr_29 [i_7] [i_7] [i_7]))))));
                                var_31 = (arr_27 [i_11] [i_8]);
                                arr_36 [i_11] [16] [16] [i_11] [i_10] [i_11] = ((((min((((arr_29 [8] [8] [8]) ? var_13 : (arr_30 [i_11]))), ((max(var_5, (arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_8] [i_8]))))))) ? ((min((arr_35 [i_7] [i_7] [i_7] [i_8 - 1] [i_7] [i_10 - 1] [i_7]), (arr_31 [i_7] [i_7] [i_7])))) : (~var_10)));
                            }
                        }
                    }
                }
                arr_37 [i_7] [i_7] [i_8] = (((arr_30 [i_7]) ? (max(var_9, var_7)) : var_14));
            }
        }
    }
    #pragma endscop
}
