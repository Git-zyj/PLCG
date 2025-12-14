/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(arr_0 [i_0])));
        var_20 = ((arr_2 [i_0] [i_0]) ? -1 : (arr_2 [i_0] [i_0]));
        var_21 = (arr_1 [0]);
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) ? ((0 ? (arr_0 [5]) : 35646)) : var_3));
        arr_5 [i_0] = (((arr_0 [i_0]) % (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_2] [17] = ((arr_8 [i_2] [i_2] [i_2 + 2]) ? (arr_9 [i_2] [i_2] [i_2 - 1]) : (arr_8 [i_1] [i_1] [i_2 + 2]));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = ((((((arr_7 [i_3]) % -1387390352))) + (((arr_17 [i_2]) ? var_14 : 1622405452))));
                            var_23 = (((arr_15 [i_1] [i_1] [i_3] [i_4 - 1] [i_5]) ? ((~(arr_12 [i_1] [i_1] [i_1] [i_1]))) : 0));
                            var_24 = 1;
                        }
                    }
                }
            }
            var_25 = (max(var_25, -1));

            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_26 = ((3 << ((var_19 ? 1 : 4294967295))));
                            var_27 = ((((((-2147483647 - 1) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_19 [i_8])))) ? ((((arr_21 [i_7] [i_2] [i_8] [i_7]) ? (arr_6 [i_6 - 1]) : (-2147483647 - 1)))) : ((7 ? -939815850 : 3783863770))));
                            arr_28 [i_8 - 1] [i_2] [i_6] [i_2] [i_1] = 0;
                        }
                    }
                }
                arr_29 [i_2] [i_6] = ((var_1 >> (((arr_13 [16] [i_1] [i_2 + 1] [i_6 - 1] [i_6] [i_6 + 1]) + 1080818709))));
            }
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                var_28 = (~1534113095);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_29 = (arr_12 [i_9] [i_9 + 2] [5] [i_9]);
                            var_30 = 127;
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_42 [i_2] [i_1] [i_1] [i_9] [i_1] [12] = (arr_19 [6]);
                    var_31 *= 1;
                }
            }
        }
        var_32 = ((var_18 ? (((max(1848929976, var_12)) | (arr_15 [15] [15] [i_1] [i_1] [1]))) : ((max((arr_7 [i_1]), (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    var_33 = var_6;
    var_34 = var_15;
    var_35 = (~(((((var_11 ? 0 : var_12))) ? (!60190) : var_15)));
    #pragma endscop
}
