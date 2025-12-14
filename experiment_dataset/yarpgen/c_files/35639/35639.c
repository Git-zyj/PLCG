/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((!(13383 >= var_7)))) / ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_18 = (min(var_18, (((((8 * (arr_1 [i_0]))) & (arr_1 [i_0]))))));
        arr_3 [i_0] = (((min((arr_0 [i_0]), 22))) ? (arr_0 [i_0]) : ((-(arr_0 [i_0]))));
        arr_4 [i_0] = arr_1 [i_0];
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (max((max((arr_6 [i_1]), ((var_16 ? (arr_5 [i_1]) : (arr_6 [i_1]))))), var_0));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_20 = var_9;
                    var_21 = min(((-(max(-5, 1372548533)))), 4);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_22 = (max((min((max((arr_11 [i_4] [i_4] [i_4]), (arr_0 [i_4]))), (7 / -15))), (arr_10 [i_4] [i_4] [i_4])));
        var_23 = (((((!((((arr_6 [i_4]) / (arr_14 [i_4]))))))) & (!10862155690616641574)));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = (max(var_24, ((max((((arr_17 [i_5] [i_5]) ? ((((arr_16 [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5])))) : (~-493896052423429999))), 15)))));
        arr_18 [i_5] = ((((max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5])))) | ((max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))))));
        var_25 = (max((arr_16 [i_5]), (min(3001313875, (((-8 ? 22105 : 724428289)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = (arr_23 [i_5] [i_5] [i_7]);
                    var_26 = (max(((((32768 >= (arr_16 [i_5]))) ? -20929 : (((arr_19 [i_7] [i_6]) / (arr_19 [i_5] [i_5]))))), (((!(arr_20 [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((((10862155690616641576 > -16403) * ((((arr_20 [i_9]) || (arr_16 [i_9]))))))) ? 43430 : (((max(-21, (arr_22 [i_8]))))))))));
                                arr_30 [i_5] [i_6] [i_6] [i_8] [i_9] = (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]);
                                arr_31 [i_5] [1] [i_5] [i_8] [i_9] = ((-122 + 2147483647) >> (22098 - 22067));
                                var_28 += (((min((((arr_20 [i_8]) / (arr_27 [i_5] [i_6] [i_7] [i_9] [i_9]))), ((((arr_26 [i_5] [i_5] [i_6] [i_7] [i_8] [i_9]) ? -3832339322566100316 : -29))))) <= -30023));
                            }
                        }
                    }
                    arr_32 [i_5] = 3001313899;
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] [i_10] = ((((arr_10 [i_10] [i_10] [i_10]) > (arr_10 [i_10] [i_10] [i_10]))));
        arr_36 [6] [6] = ((!((min((arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_11 [i_10] [i_10] [i_10]))))));
    }
    #pragma endscop
}
