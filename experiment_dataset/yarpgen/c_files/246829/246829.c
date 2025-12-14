/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min(((((arr_2 [i_0] [i_3]) == (arr_9 [i_0] [i_1])))), ((((arr_9 [i_3] [i_1]) ? (arr_0 [i_0] [i_0]) : (max(-1663747180, 901172231)))))));
                            var_12 = max((4294967295 && 4232358699), (max((arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (min(-37, (arr_3 [i_3]))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_13 = (max(var_13, ((min(4067468411, 11221)))));
                                var_14 += ((((12460122780470020525 & (arr_2 [i_0] [i_0]))) >> (((((650014688 & (arr_9 [i_3] [i_4])))) - 100953473))));
                                arr_13 [i_4] [i_0] [i_2] = (((arr_7 [i_1] [i_2 + 2]) - (((((max(var_6, var_6))) - 0)))));
                                var_15 = (((((var_5 && (arr_12 [i_2] [i_2 - 1] [i_3] [i_3] [i_4] [i_4] [i_4])))) >> ((((var_9 ? (arr_4 [i_0] [i_2] [i_2 + 1]) : ((-(arr_8 [i_0] [i_0] [i_0] [i_0]))))) + 127))));
                            }
                            var_16 = (min(var_16, ((((arr_6 [i_3 + 1] [i_2 + 2] [i_1]) ? (arr_5 [i_3 + 1] [i_2 + 2] [i_2]) : (((arr_6 [i_3 + 1] [i_2 + 2] [i_2 + 2]) ? (arr_6 [i_3 + 1] [i_2 + 2] [i_2 + 2]) : (arr_5 [i_3 + 1] [i_2 + 2] [i_2]))))))));
                            var_17 = (arr_4 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_18 = (arr_2 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_6] [i_7] [i_6] [i_9] = (((arr_11 [i_8] [i_9 + 1] [i_9] [i_8] [i_9 + 1]) <= (min((arr_24 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1]), (arr_24 [i_5] [i_9 + 1] [i_9] [i_9] [i_9 + 1])))));
                                arr_29 [i_7] [i_6] [i_6] [i_8] [i_9] |= -14;
                                var_19 = ((((~6932376293869646670) ? (max(522666737, (arr_23 [i_5] [i_9]))) : var_1)));
                                var_20 += ((((arr_23 [i_5] [i_9 + 1]) - (arr_23 [i_5] [i_9 + 1]))) > (arr_23 [i_5] [i_9 + 1]));
                            }
                        }
                    }
                    var_21 = (min(3772300527, 1848348821));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_22 = (((((0 ? (arr_4 [i_6] [i_7] [i_6]) : (arr_4 [i_5] [i_6] [i_7])))) ? ((((!(arr_4 [i_10] [i_7] [i_5]))))) : (69818988363776 - var_10)));
                        arr_32 [i_5] [i_6] &= ((max((min(var_2, (arr_19 [i_5]))), 2117695703)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_23 = 62838;
                        var_24 = ((var_7 && (arr_30 [i_11] [i_7] [i_6] [i_5])));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_12] [i_12] [i_7] [i_6] [i_5] [i_5] = (((min(0, 1179083809)) > (((var_6 | (arr_35 [i_5] [i_6] [i_7] [i_12]))))));
                        arr_39 [i_12] [i_7] [i_6] [i_5] = ((max((arr_16 [i_7]), (arr_4 [i_5] [i_5] [i_5]))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            {
                var_25 -= 2446618475;
                arr_47 [i_13] [i_14 - 1] = (min(11514367779839904945, 522666733));
            }
        }
    }
    #pragma endscop
}
