/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0 + 1] = ((max(5882965030544628578, (((var_2 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])))))) | (((((42405 | (arr_2 [i_0])))) ? var_1 : (min(var_1, var_7)))));
        var_12 = (min(125, ((((arr_2 [i_0]) == ((158 ? var_11 : var_10)))))));
        var_13 = (arr_0 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = ((((-659942987 ? 4294967295 : 23154)) > var_0));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_15 += ((-(arr_9 [7] [i_0 - 1] [i_0 + 1])));
                var_16 = (min(var_16, var_6));
                arr_10 [i_0] [i_1] [i_2] [16] = 19517;
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_14 [13] [i_1] [i_1] [i_1] = ((var_1 - ((var_7 ? 0 : (arr_1 [i_0] [i_0])))));
                var_17 = (((arr_3 [i_0 + 1]) ? var_9 : (arr_12 [i_0 + 1])));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_18 = (min(var_18, ((((arr_6 [i_0] [17]) ? 355639370 : (arr_1 [i_0 + 1] [i_0 + 1]))))));
                var_19 = (((arr_16 [i_0 - 1]) / (arr_16 [i_0 - 1])));
                arr_18 [8] [5] [i_1] [i_4] = 16692720356000933637;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_28 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] = -659942986;
                        var_20 = ((!(arr_16 [22])));
                    }
                }
            }
            var_21 = (~-5016303644968990230);
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            var_22 |= ((-((-((4294967279 ? (arr_13 [i_0] [i_0] [i_8]) : (arr_29 [i_0] [i_8])))))));

            for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
            {
                arr_33 [i_0] = ((max(var_4, 16692720356000933643)));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_23 = (((max((arr_17 [i_8] [i_10 + 2] [i_11 + 1]), var_0))) ? (((max((arr_17 [i_0 - 1] [i_0 + 1] [0]), (arr_17 [i_0 - 1] [i_8] [i_9]))))) : -1669792273);
                            var_24 = (min(var_24, ((max(1093567794, (arr_38 [i_11 + 1] [i_9] [i_10] [i_9] [i_8] [i_8] [i_0]))))));
                            var_25 = -935065349;
                            var_26 |= ((~(((!((max(var_4, -5016303644968990230))))))));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                var_27 = ((~(arr_2 [i_0])));
                var_28 = (max(var_28, (((var_7 ? (((((var_8 ? (arr_0 [i_8] [i_12]) : (arr_26 [7] [7])))) ? (arr_15 [17] [17] [i_12] [i_12]) : (((1 ? 5016303644968990216 : -2067063884))))) : (arr_31 [i_0 + 1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        var_29 = (max(var_29, (((~(~var_2))))));
        var_30 += ((-(var_9 || var_8)));
        var_31 = ((-5757531321162286268 && (arr_23 [i_13] [i_13] [i_13] [i_13])));
    }
    #pragma endscop
}
