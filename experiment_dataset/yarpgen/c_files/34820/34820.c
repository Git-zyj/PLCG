/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 *= 2448;
        var_21 = (((((arr_1 [i_0]) - (arr_1 [i_0]))) == (arr_1 [i_0])));
        var_22 *= ((~((((max((arr_0 [i_0 - 1] [i_0 + 1]), (arr_1 [20])))) ? ((((arr_0 [i_0] [i_0]) && (arr_1 [16])))) : (((63088 != (arr_2 [20] [20]))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                arr_10 [i_0] [i_1 - 1] [i_2] [i_0] = ((2468 ? 2448 : 63089));
                var_23 *= (((arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) * (arr_0 [i_0 + 1] [i_0])));
                arr_11 [i_0] [21] [22] = ((~(((arr_2 [i_0] [i_1 + 1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_5 [5] [i_1] [i_1])))));
            }
            var_24 = 63088;
            var_25 = ((var_6 ? (arr_6 [i_0] [i_1 + 2] [i_1 + 1] [i_1 - 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_26 *= (((arr_8 [i_0 + 1]) ? (((arr_4 [i_0] [i_0] [16]) + (arr_6 [2] [16] [i_0] [i_3]))) : ((((arr_0 [i_3] [i_3]) ? (arr_1 [6]) : (arr_2 [14] [14]))))));
            arr_16 [0] [i_0] = (((arr_9 [i_0 + 1] [i_3] [i_3] [i_3]) ? (arr_15 [i_0 + 1]) : var_0));
            var_27 = 2447;
        }
        var_28 = (~var_11);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_29 = (arr_8 [i_4]);
        arr_20 [i_4] [i_4] = ((2 * ((((arr_12 [i_4] [i_4] [i_4]) * ((((var_16 == (arr_5 [i_4] [i_4] [i_4]))))))))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_30 *= var_10;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_31 = (max((((arr_3 [i_5] [i_6 + 1] [i_6]) ? (arr_4 [i_5] [i_5] [i_5]) : 2417)), (((63088 / (arr_4 [i_5] [17] [i_6 - 2]))))));
                    var_32 = ((((((arr_27 [i_5]) | ((2431 ? (arr_6 [i_6] [i_6] [i_6] [i_6]) : 2448))))) ? (((((arr_28 [13] [13] [i_7]) ? (arr_2 [i_6] [i_6]) : 63093)))) : ((2442 ? (arr_26 [i_6 + 2] [i_6 + 1] [i_6 - 2]) : 2431))));
                    arr_30 [i_5] [i_5] [i_5] [i_7] = var_9;
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_33 = (min(var_33, ((-((min((arr_33 [i_8 + 2]), (arr_33 [i_8 + 2]))))))));

        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_34 *= (arr_31 [i_8 + 2] [i_9 - 1]);
            arr_36 [i_8 - 1] [i_9] [i_9] = (arr_33 [i_8 + 2]);
        }
        var_35 = (max(var_35, (((((((arr_31 [i_8] [i_8 + 2]) ? ((-(arr_31 [12] [12]))) : (((arr_34 [i_8]) ? 63094 : (-32767 - 1)))))) * (((((arr_31 [i_8] [i_8]) + (arr_32 [19] [8]))) % ((((arr_34 [16]) ? 32754 : (arr_35 [i_8] [i_8] [i_8 + 2])))))))))));
    }
    var_36 = ((((min(((var_15 ? var_10 : var_6)), var_7))) ? (((var_0 / var_13) * (((var_1 ? var_14 : var_6))))) : 2425));
    #pragma endscop
}
