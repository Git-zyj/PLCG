/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_4, 2630819278));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1 - 3] [12] [i_2] [i_1] = (((((arr_0 [i_2 - 2]) ? 3820882615 : (arr_1 [i_0] [i_0])))) ? 3972401550 : ((-(arr_3 [i_1] [i_1 - 1]))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] = (!2635652708);
                        var_17 += (3918291902 <= 1911721800);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_4]) ? 2789173669 : (arr_5 [i_0] [i_1 - 3] [i_1]));
                        var_18 = (arr_8 [i_0] [i_0] [i_1] [1]);
                        var_19 = 1911721800;
                        var_20 = arr_0 [8];
                        var_21 = (max(var_21, var_9));
                    }
                }
            }
        }
        var_22 &= 3159959850;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_23 = (arr_15 [i_5] [i_5]);

        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_24 = (445567766 ? 2 : 0);
            arr_19 [i_5] = ((arr_16 [i_6 - 3]) ? (arr_16 [i_5 - 3]) : (arr_15 [i_5] [i_5]));
            arr_20 [i_5] = (var_1 ? var_14 : (arr_15 [i_6 - 1] [i_6]));

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_25 = arr_23 [i_5] [i_6] [12];
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_26 = (((arr_31 [i_6 + 1] [i_8] [i_5 - 1] [i_8] [i_5 - 1]) || (arr_24 [i_5] [i_6])));
                            arr_32 [0] [i_8] [0] &= 1401618927;
                            var_27 &= ((arr_21 [i_5 + 1] [i_5 - 3]) ? (arr_21 [i_9 + 2] [i_9 + 2]) : (arr_21 [i_5 - 3] [i_5 + 2]));
                            var_28 = (min(var_28, (((arr_17 [i_5 - 1] [i_6 - 1] [i_9 + 1]) - var_15))));
                        }
                    }
                }
                var_29 = (((arr_15 [i_7] [i_7]) <= (arr_15 [i_5 - 3] [i_6 - 3])));
                var_30 = ((arr_26 [14] [14] [i_6] [i_7]) | (arr_26 [14] [14] [i_6 + 2] [i_7]));
            }
            arr_33 [i_5] [i_5] = (((((arr_30 [i_5] [i_5] [i_5] [i_6] [i_6]) / (arr_26 [4] [4] [i_6] [i_6]))) < (((arr_26 [4] [i_6] [4] [i_6]) - 1135007443))));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_31 = ((!(arr_26 [i_10] [i_5 + 1] [i_5 - 2] [i_10])));
            arr_37 [i_5] [i_10] [13] = ((arr_17 [i_5] [i_10] [i_5 - 2]) ? (arr_16 [i_5]) : ((((!(arr_26 [i_10] [i_10] [i_10] [i_10]))))));
            var_32 ^= (4294967295 ? ((4294967288 ? (arr_15 [i_5] [i_10]) : (arr_16 [i_5]))) : (arr_15 [i_5 + 2] [i_10]));
            var_33 = (min(var_33, (((((arr_35 [6]) % 1965622571)) ^ 3972401537))));
            arr_38 [i_10] = arr_17 [i_10] [i_5 - 3] [i_10];
        }
        var_34 = 3548376701;
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        var_35 = ((((var_7 >> (var_4 - 1697516922))) >= (((arr_40 [i_11]) * 1874097777))));
        var_36 += ((arr_12 [14] [i_11 - 1] [i_11 - 2]) ? (arr_40 [i_11 + 1]) : (((arr_39 [i_11]) | 2620982207)));
    }
    var_37 = (var_1 + ((((((var_4 ? 3339791139 : 1135007445)) != var_14)))));
    var_38 = min(var_11, (max(var_15, ((0 ? 262128 : var_1)))));
    var_39 *= var_12;
    #pragma endscop
}
