/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_4);
    var_13 = var_3;
    var_14 = (min(var_14, (((+(((73 ^ -92) ^ (max(var_4, var_7)))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [13] = (arr_1 [i_0] [i_0]);
        var_15 = (((((~(max((arr_1 [i_0] [i_0]), var_5))))) && (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 = (arr_14 [i_1]);
                        var_17 &= ((arr_10 [i_1] [i_2] [i_1] [i_4]) ? (arr_8 [i_1] [i_3] [i_4]) : (max((~2992168289537142415), 122)));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((5459938914498021963 || ((max(var_0, ((851163949 - (arr_6 [i_3] [i_4]))))))));
                    }
                }
            }
        }
        arr_17 [i_1] = (arr_6 [i_1] [i_1]);
        var_18 = (max(var_18, ((((((((((arr_7 [17] [17]) | (arr_7 [i_1] [1])))) ? (402653184 / var_3) : (var_10 < 2992168289537142418)))) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : var_8)))));
        var_19 = (var_9 == 6932175197295765773);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 &= ((var_10 ? 126 : 1791236096));

        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            arr_24 [i_5] [i_5] [1] = 955533325;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_33 [i_5] [i_6 - 3] [i_8] [i_6 - 3] [i_9] |= var_6;
                            var_21 = (((arr_25 [i_6 - 4] [i_7] [i_8]) * (((arr_25 [i_6 - 3] [i_8] [i_9]) << (((arr_25 [i_5] [i_7] [i_7]) - 60))))));
                            var_22 = (max(var_22, (((var_0 ? 255 : -19)))));
                        }
                    }
                }
            }
            var_23 = (((min(119, 145))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_24 = 20;
                        var_25 |= var_8;

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_26 += 134184960;
                            var_27 = (min(((((arr_39 [i_13] [i_12] [i_11] [i_10] [i_5] [i_5]) <= (arr_1 [i_5] [i_10])))), (arr_1 [i_5] [i_10])));
                        }
                        for (int i_14 = 2; i_14 < 10;i_14 += 1)
                        {
                            var_28 = (((((!((((arr_44 [i_5] [i_10] [i_11] [i_12] [i_14]) >> (var_7 + 1867424752475487279))))))) + ((((arr_8 [i_5] [i_14 - 1] [i_5]) != 3436155961)))));
                            var_29 = (min(((min((var_2 && 6824734751388428236), (max((arr_20 [i_10]), var_3))))), 16));
                        }
                        for (int i_15 = 3; i_15 < 8;i_15 += 1)
                        {
                            var_30 = (arr_11 [i_12] [i_15]);
                            arr_48 [i_5] [i_10] [i_5] [i_15] = var_3;
                            var_31 = min((((((arr_14 [i_11]) - var_1)) + (arr_39 [i_5] [i_10] [i_15 - 1] [i_12] [2] [i_5]))), 106);
                        }
                        arr_49 [i_10] [1] [i_10] [i_10] = (max((max(32, (arr_20 [i_5]))), (arr_4 [i_5])));
                    }
                }
            }
            var_32 = (((((arr_38 [i_10] [7] [10] [i_5]) + (((~(arr_31 [i_10] [i_10])))))) | (arr_7 [i_5] [i_10])));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            var_33 = ((~(~var_6)));
                            var_34 = (-(var_8 == var_5));
                            arr_57 [i_5] [i_10] [i_5] [i_17] [i_10] &= var_9;
                        }
                        var_35 = (min(var_35, ((((max((arr_21 [i_16] [10]), var_9)) << (((arr_21 [i_10] [i_5]) - 1414491269)))))));
                    }
                }
            }
        }
        arr_58 [i_5] = ((-((((var_1 || (arr_39 [i_5] [i_5] [i_5] [i_5] [5] [i_5])))))));
    }
    #pragma endscop
}
