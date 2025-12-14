/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = (min(((8390737469494376207 ? 20977 : -20991)), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (min(((min((arr_3 [i_1]), (arr_3 [i_1])))), ((((min((arr_3 [i_1]), (arr_3 [i_1])))) ? ((~(arr_3 [i_1]))) : (arr_3 [i_1])))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((~(arr_3 [i_1])));
            arr_6 [i_1] [i_2] [i_2] = (min((arr_4 [i_1] [i_1] [i_2]), 10056006604215175399));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((arr_14 [i_4] [i_4 + 3] [i_4 - 1] [i_4]) ? (arr_14 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (arr_14 [i_4] [i_4 + 3] [i_4 - 1] [i_4]))))));
                        var_23 += (arr_12 [i_5] [i_3] [i_3] [i_1] [i_1] [i_1]);
                        var_24 = (min(8390737469494376207, ((max((arr_4 [i_1] [i_3] [i_5]), (-127 - 1))))));
                        var_25 = arr_8 [i_1] [i_1] [i_1];
                        var_26 = (arr_8 [i_1] [i_3] [i_1]);
                    }
                }
            }
            var_27 = ((~(((arr_8 [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_3] [i_1] [i_1]) : (arr_10 [i_1] [i_1])))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_28 = (min(((max((arr_3 [i_1]), (arr_3 [i_1])))), ((-((20977 ? 1 : -20958))))));

            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                arr_20 [i_1] [i_1] [i_1] [i_1] = -20974;
                var_29 *= ((+((min((arr_10 [i_1] [10]), (arr_10 [i_1] [18]))))));
                var_30 = ((!((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_12 [i_7] [i_6] [i_6] [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7]))))));
                var_31 |= (min((arr_2 [10] [10]), ((max((arr_7 [i_6]), (max(-111, 15)))))));
            }

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_25 [i_1] = ((-(min(-20991, 2868609189))));
                arr_26 [i_1] [i_1] [i_1] = ((min(0, 20964)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_32 = (min(1150154572, -111));
                            var_33 = min((arr_9 [i_1] [i_6] [i_9]), (max((((arr_22 [i_1] [i_6]) ? (arr_21 [i_1] [i_6] [i_1] [i_1]) : (arr_8 [i_1] [i_6] [i_1]))), (arr_10 [i_1] [i_1]))));
                            arr_31 [i_10] [i_1] [i_1] [i_1] = (arr_21 [i_1] [i_8] [i_1] [i_10]);
                        }
                    }
                }
            }
            arr_32 [i_1] [i_6] [i_6] = (min(20982, (~3049)));
            var_34 = (arr_10 [i_1] [i_1]);
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_35 = (arr_23 [i_1] [i_11]);
            var_36 = (min(var_36, ((min(((max((arr_3 [12]), (arr_15 [i_11])))), ((((!(arr_17 [i_1] [i_1] [i_11]))) ? ((30 ? 1 : 1)) : ((min((arr_29 [i_11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_5 [4] [4])))))))))));
            var_37 = (min((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (arr_3 [i_1])));
        }
        var_38 = (max(var_38, ((max((((arr_9 [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1]))), ((min((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1])))))))));
    }
    var_39 = ((var_8 ? (min((min(var_13, var_5)), var_13)) : var_14));
    #pragma endscop
}
