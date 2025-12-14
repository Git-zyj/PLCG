/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((-(~var_5)));
                            var_16 = ((8021164653127740076 ? 102 : 65535));
                            var_17 = ((-(max(var_10, 102))));
                        }
                    }
                }
                var_18 = (max(var_18, (((!(arr_4 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_17 [i_5] [i_5] = (((((~var_5) == (~106))) ? ((((((~(arr_10 [i_4] [i_4] [i_4] [i_4])))) ? (arr_2 [i_4] [i_5]) : (arr_4 [i_4])))) : (((((arr_1 [i_4]) <= 2302667444)) ? ((var_13 ? var_12 : (arr_2 [i_4] [i_4]))) : (((max((arr_12 [i_4]), (arr_4 [i_4])))))))));

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_19 &= (max((arr_10 [i_4] [i_4] [i_5] [i_6]), var_7));
                    var_20 = (((((-(((arr_16 [0] [i_5] [i_5]) ? (arr_19 [i_4] [i_4] [i_4]) : var_5))))) ? (((-30621 ? (arr_10 [i_6] [i_6] [i_5] [i_4]) : (arr_6 [i_4] [i_5] [15])))) : ((((-102 + 2147483647) >> (127 - 98))))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_23 [i_7] = ((~((((16252928 >= (arr_21 [i_7] [i_7]))) ? 404389048 : (((16252906 <= (arr_21 [1] [i_7]))))))));
        var_21 = (max(var_21, (((((((arr_21 [i_7] [i_7]) | var_5))) ? (arr_22 [i_7] [i_7]) : ((9223372036854775807 ? 35184371957760 : 26)))))));

        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            var_22 = ((~(((arr_25 [i_8] [i_8] [i_8]) ? (arr_24 [i_7] [i_7]) : ((-32 ? 246 : 255))))));
            arr_27 [i_7] = (((-105 * ((min((arr_22 [i_8 + 1] [i_7]), (arr_22 [i_7] [i_7])))))));
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            {
                arr_32 [i_9] [i_10] [i_10 + 1] |= (~(min((~-30621), (min((arr_6 [i_9] [i_10 - 3] [i_9]), (arr_5 [i_10] [i_10] [i_9]))))));
                var_23 &= ((~((((arr_5 [i_10 - 2] [i_10 + 2] [i_10 + 1]) == -30621)))));
            }
        }
    }
    var_24 += -var_0;
    #pragma endscop
}
