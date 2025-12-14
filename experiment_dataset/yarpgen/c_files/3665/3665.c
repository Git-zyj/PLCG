/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_12, var_12))) ? ((min(var_8, (~var_6)))) : (max(14915148439364911695, ((min(var_6, var_8)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (~84);
        var_16 ^= (arr_2 [i_0]);
        var_17 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_12 [i_2] = ((((((arr_6 [i_2] [i_3]) ? (arr_6 [i_1] [i_2]) : (arr_6 [i_1] [i_3])))) ? ((min(147, (!10837612938085100035)))) : (arr_10 [i_1] [i_1] [i_2] [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 = arr_10 [i_4] [i_3] [i_2] [i_1];
                                var_19 = 132541889;
                            }
                        }
                    }
                    var_20 = (arr_16 [i_3] [i_2] [i_1]);
                    var_21 = (arr_2 [i_2]);
                    var_22 = (arr_5 [i_2] [i_3]);
                }
            }
        }
        var_23 = (max(var_23, ((max((((!(arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_24 = ((!((max(((((arr_22 [i_6] [i_7] [i_7]) >= (arr_21 [i_6] [i_7] [i_6])))), 132541873)))));
            var_25 ^= ((!((!(arr_19 [i_6])))));
            arr_23 [i_6] = 7213620477646352750;
            arr_24 [i_6] = ((!((!(((-(arr_20 [i_6] [i_6]))))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    var_26 = ((-((((((arr_22 [i_6] [i_8] [i_9]) ? (arr_20 [i_8] [i_6]) : (arr_29 [i_6] [i_8] [i_8] [i_9])))) ? ((min((arr_17 [i_6]), (arr_26 [i_6])))) : (arr_28 [i_6] [i_8] [i_9])))));
                    var_27 = 26293;
                }
            }
        }
        var_28 = (min(var_28, (arr_26 [10])));
        var_29 = ((((max(((max((arr_26 [i_6]), 4162425420))), ((~(arr_21 [i_6] [i_6] [i_6])))))) ? ((min(7609131135624451580, (arr_25 [i_6])))) : (min((arr_21 [i_6] [i_6] [i_6]), (!511)))));
    }
    #pragma endscop
}
