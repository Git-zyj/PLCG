/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [8] [i_1] [i_1] [4] = 2529501965;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 += ((6734640094763005806 ? (((((min((arr_4 [12] [i_1] [i_2] [15]), 60436))) && (arr_10 [i_0] [4] [7] [1] [i_4])))) : (((arr_4 [1] [i_1] [i_2] [i_3]) ? (!-1152921504606846976) : (((!(arr_4 [i_0] [14] [i_0] [1]))))))));
                                var_12 *= ((((min((-32767 - 1), (-32767 - 1)))) & ((min((arr_10 [i_4 - 2] [i_4 + 4] [17] [i_4 + 2] [4]), (arr_10 [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_6;

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_14 [2] = (min(0, (arr_12 [i_5])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_14 *= (arr_13 [i_5] [i_6]);
            arr_19 [17] [12] = (arr_16 [22] [i_6]);
            arr_20 [20] [12] [i_6] = (((arr_18 [9]) >= 194));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((arr_18 [i_7]) != (arr_17 [i_5]))))));
                        var_16 = (arr_25 [8] [i_6]);
                    }
                }
            }
        }
        var_17 = (((arr_25 [i_5] [i_5]) >= (arr_15 [i_5])));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_33 [1] = ((((arr_30 [i_9] [i_10]) ? (arr_30 [i_9] [5]) : (arr_30 [10] [i_10]))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 12;i_12 += 1)
                {
                    {
                        var_18 = (min(var_18, ((!((min(((((arr_2 [i_12]) - (arr_24 [i_10])))), (arr_25 [i_9] [7]))))))));
                        arr_38 [i_9] [i_10] [i_11] = (min(((((arr_8 [i_9] [i_10] [i_10] [11] [16]) || (1152921504606846992 <= var_7)))), (((arr_25 [i_9] [i_10]) + (arr_24 [i_12 - 1])))));
                        arr_39 [i_11] [i_10] [i_11] [i_12] = (arr_1 [i_9] [i_11]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                {
                    arr_46 [0] [3] [3] [i_14] = (arr_44 [i_9] [i_9] [i_9] [i_9]);
                    arr_47 [13] [1] [10] [1] = (arr_5 [i_9] [i_9] [i_13] [15]);
                }
            }
        }
        var_19 = ((((min(var_10, (((!(arr_29 [2]))))))) ? 1152921504606846992 : (((var_0 ? (((!(arr_2 [i_9])))) : ((((arr_32 [i_9] [i_9]) || 235))))))));
    }
    #pragma endscop
}
