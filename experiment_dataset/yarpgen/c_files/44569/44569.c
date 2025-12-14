/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = var_7;
                                arr_13 [i_4] [i_3] [i_2] [i_1] = var_7;
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_1] = (~var_6);
                                var_21 = (arr_4 [i_0] [i_0]);
                            }
                        }
                    }
                    var_22 = (arr_7 [i_0] [i_0] [i_0] [i_0]);

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_23 *= (((((((arr_5 [i_2]) <= (((arr_17 [i_5] [i_1] [i_1] [i_0] [i_0]) ? (arr_5 [i_5]) : var_1)))))) / (max(var_18, (arr_9 [i_2])))));
                        var_24 = (max(var_24, ((((arr_12 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1]) ? (((arr_12 [i_0] [i_0] [i_2] [i_0] [i_1]) - (!-9))) : ((((arr_8 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 2]) + (arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2])))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = (((((var_11 | (arr_10 [i_0] [i_1 - 2])))) ? (((arr_10 [i_0] [i_1 - 1]) | (arr_10 [i_1] [i_1 + 3]))) : (~var_17)));
                    }
                    arr_19 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_0] [i_2]);
                    var_25 = ((var_0 ^ (((arr_7 [i_1 - 2] [i_1 + 3] [i_1 + 2] [i_1 - 2]) ? (arr_0 [i_1 + 1] [i_1 - 2]) : (arr_6 [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_26 = (max(var_26, ((~((max((arr_17 [i_8] [3] [i_7] [i_6] [i_0]), (((!(arr_28 [i_0] [i_0] [i_7] [i_8])))))))))));
                        var_27 &= var_15;
                        arr_29 [i_0] [i_6] [i_0] [i_8] = ((-28773 ? 18921 : 18921));
                        arr_30 [i_6] [i_6] [i_8] = ((~(((min((arr_9 [i_0]), var_2)) / -18947))));
                    }
                }
            }
        }
        var_28 = max(((((arr_27 [i_0]) && (var_5 == var_16)))), ((((max(var_13, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_22 [5] [i_0]))) : 18909)));
        var_29 ^= (((((arr_9 [i_0]) ? (arr_9 [i_0]) : var_11)) <= (arr_10 [i_0] [i_0])));
        var_30 = ((((-(((arr_25 [i_0] [i_0] [i_0]) / (arr_9 [i_0]))))) + (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_16 : (arr_24 [i_0] [i_0] [i_0] [i_0]))) : ((max(var_0, var_7)))))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_31 = (min(var_31, var_13));
        var_32 &= (~(arr_31 [i_9] [i_9]));
    }
    #pragma endscop
}
