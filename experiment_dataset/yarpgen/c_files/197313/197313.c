/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = ((arr_3 [i_0] [i_1]) ? (var_3 % 69) : (((min((arr_0 [i_0 + 1]), ((((arr_0 [i_0]) < (arr_2 [i_2] [i_0])))))))));
                    var_13 = ((~(!57284)));
                }
            }
        }
    }
    var_14 = (max(var_14, ((((((var_10 ? var_7 : 13024482082249085795)) - (((-72 ? 72 : -14542))))) / ((69 ? (((min(var_11, var_5)))) : (min(var_4, var_7))))))));

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            var_15 = (min(var_15, (arr_12 [i_3] [i_3] [i_3])));
            arr_14 [i_4] = (arr_8 [19] [i_3]);

            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                arr_17 [i_5] [i_3] [i_3] [i_5] = (arr_8 [i_4] [i_4 - 3]);
                var_16 = (min(var_16, (((((((arr_10 [i_4 - 2] [i_5 - 1]) ^ (arr_10 [i_4 - 1] [i_5 + 1])))) ? (((((((arr_16 [6] [i_3] [i_5]) ? var_3 : (arr_9 [i_5] [i_4]))) != 71)))) : (arr_15 [i_3]))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_17 = (max(var_9, ((((arr_11 [i_5 + 1]) ? -4427 : (arr_13 [i_4 - 3] [i_5 - 1]))))));
                            var_18 ^= ((((((max((arr_22 [i_7] [i_7] [12]), (arr_21 [i_6] [i_4] [i_4] [i_6] [i_7])))) ? ((max(17533, 20155))) : ((max((arr_23 [i_4] [i_4] [i_5 + 1] [i_3] [i_7]), (arr_9 [8] [0]))))))) - (max(((((arr_23 [i_3] [i_4 - 1] [i_5] [i_6] [i_6]) ? (arr_23 [10] [i_4] [i_4] [i_4] [i_7]) : (arr_23 [i_3] [i_5] [i_5] [i_6] [i_6])))), (arr_16 [i_4] [i_7] [i_5 - 1]))));
                            arr_24 [19] [i_4] [i_5] [19] [19] = min((max((arr_20 [i_5 + 1] [i_5] [i_5] [i_5 - 1]), ((min(4095, 20160))))), -122);
                            arr_25 [i_3] [i_3] [i_5] [i_3] [i_3] [i_5] [i_3] = (arr_23 [8] [5] [15] [i_7] [i_5]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    arr_28 [i_3] [17] [1] [i_5] [2] = (((arr_13 [i_4 - 3] [i_5 - 1]) - (arr_13 [i_4 - 3] [i_5 + 1])));
                    var_19 = (arr_16 [i_4 - 1] [i_5] [i_5 + 1]);
                    var_20 = (((arr_22 [i_5 - 1] [17] [1]) | (arr_22 [i_5 - 1] [i_3] [i_3])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                {
                    var_21 = ((~(((arr_23 [i_3] [10] [i_9] [i_10] [i_3]) | (arr_23 [i_3] [i_3] [i_10 + 2] [i_10] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_22 = (arr_26 [12] [i_12 - 1] [i_11] [i_9 + 1] [i_3] [i_3]);
                                var_23 ^= ((((arr_11 [i_9 + 1]) ? (arr_11 [i_9 + 1]) : (arr_11 [i_9 + 2]))) / (arr_11 [i_9 + 1]));
                                var_24 = ((5453 ? 76 : -70));
                                arr_38 [i_3] [i_9] [i_10] [i_11] [i_11] [i_9] [i_11] = (~47988);
                            }
                        }
                    }
                }
            }
        }
        arr_39 [i_3] = ((+(min((min((arr_27 [i_3] [i_3] [1] [i_3]), var_9)), var_4))));
    }
    var_25 = (var_5 ? var_8 : (((min(var_1, 1800078702465311402)) >> (-15764 + 15816))));
    #pragma endscop
}
