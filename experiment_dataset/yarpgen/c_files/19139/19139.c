/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((max(var_7, -21975)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 -= 21986;
        var_14 = (arr_3 [i_0] [i_0]);
        arr_4 [i_0] [1] = ((!(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 = (((arr_8 [1] [i_1 - 1]) ? ((min((arr_3 [i_1] [i_1 + 1]), (arr_1 [i_1 + 2])))) : ((((65531 ? (arr_8 [i_1 - 1] [i_1 + 1]) : (-32767 - 1)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_16 = (!0);
                var_17 = -21986;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_18 = (arr_15 [i_2]);
                var_19 = (arr_9 [i_1]);
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 += (arr_17 [1] [i_1 + 2] [i_5 - 1]);
                            var_21 = 65531;
                            var_22 = (~255);
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_28 [i_1 - 1] [i_1 - 1] [i_5] = (arr_2 [i_1]);

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_23 = -1;
                        var_24 = (arr_13 [i_1 + 1]);
                    }
                    var_25 = 65500;
                    arr_33 [i_1] [i_2] [i_5 - 1] [i_8] [i_5] [i_5] = arr_5 [i_1 + 2];
                }
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_36 [i_1] [i_2] [1] = (arr_23 [i_1] [i_2] [i_2] [i_10] [i_10]);
                var_26 = -8176;
            }
            arr_37 [i_2] = (((arr_29 [i_2] [i_2]) ? (arr_11 [i_1 - 1] [i_1 - 1]) : (((!(arr_31 [i_1] [i_2] [i_2]))))));
            arr_38 [i_1] = ((!(arr_1 [i_1])));
        }
    }
    #pragma endscop
}
