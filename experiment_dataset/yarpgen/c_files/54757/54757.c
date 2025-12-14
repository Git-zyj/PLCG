/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 &= ((((max((max(var_5, (arr_0 [i_0] [i_0]))), (arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : (arr_0 [i_0] [8])));
        var_13 = (max((((var_0 ? var_9 : var_1))), var_10));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = ((((max((arr_2 [i_1]), (max((arr_4 [i_1] [i_1]), var_4))))) ? ((~((var_11 ? (arr_4 [i_1] [i_1]) : (arr_2 [i_1]))))) : (!var_0)));
        arr_5 [i_1] = ((~(max(((max(var_11, (arr_4 [i_1] [6])))), var_1))));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_15 = (min(var_15, (((!(arr_4 [i_2 - 3] [i_2 - 1]))))));
            var_16 = (((arr_6 [i_2 - 3] [i_2] [i_2 - 4]) ? ((var_7 ? var_7 : (arr_4 [i_1] [1]))) : (((var_10 ? (arr_2 [i_1]) : var_11)))));
            arr_10 [i_2] = ((51250 ? (-2147483647 - 1) : 0));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_8 [i_1]) ? (arr_2 [i_2 - 4]) : (arr_9 [i_3] [i_5 + 1])));
                            arr_18 [i_2] = var_8;
                            var_18 = (max(var_18, (~var_10)));
                            var_19 = (arr_14 [i_1] [i_2]);
                        }
                    }
                }
            }
            var_20 = (((arr_8 [i_2 - 3]) ? (arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 1]) : (arr_12 [i_2 - 3] [i_2 + 1] [i_2 + 1])));
        }
        var_21 &= (max(((-((var_5 ? (arr_13 [i_1]) : (arr_2 [i_1]))))), ((var_6 ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    var_22 = (-((var_5 ? ((var_0 ? var_9 : var_7)) : (~var_10))));
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                {
                    var_23 = var_11;
                    var_24 = ((-(((((var_0 ? (arr_24 [i_6]) : (arr_22 [13] [i_6])))) ? (arr_25 [i_8 - 1] [0] [i_8 - 1] [i_8 - 1]) : (((var_11 ? var_5 : (arr_23 [i_6] [i_7]))))))));
                    arr_26 [i_6] [1] [i_8] = max(((((((arr_23 [i_6] [i_7]) ? var_8 : (arr_23 [i_8 - 1] [i_6])))) ? (((max(255, 14297)))) : (max((arr_19 [i_7] [0]), var_0)))), (((!((max(var_0, (arr_21 [i_7]))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_31 [8] [i_9] [i_9 + 1] [i_8] [i_9] [i_6] = ((+((253 ? (-2147483647 - 1) : 0))));
                                var_25 = ((!(((-99 ? var_1 : 7425392754963253638)))));
                            }
                        }
                    }
                    var_26 = ((+(min((~1), (((!(arr_19 [i_6 + 2] [i_6]))))))));
                }
            }
        }
    }
    #pragma endscop
}
