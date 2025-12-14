/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (min((((((min(11551324731924686169, -271563476))) || var_10))), ((((var_16 ? 0 : 1)) >> (((arr_1 [i_0]) - 3655))))));
        arr_2 [i_0] = var_5;
    }
    var_19 = ((~(min((!271563475), (~var_6)))));

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (arr_6 [i_1]);
        arr_7 [i_1] = (((arr_1 [i_1]) ? (((arr_1 [i_1]) / var_15)) : (arr_0 [i_1])));
        var_21 = (((arr_3 [i_1] [i_1]) ? ((((arr_5 [i_1]) ? (arr_5 [i_1]) : 39075))) : ((var_17 ? (arr_1 [i_1]) : var_8))));
        var_22 = (max(var_22, (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_23 -= ((((var_16 << (-107742411 + 107742418))) * (!var_6)));
        arr_10 [i_2] [i_2] = (((((-(arr_9 [i_2] [i_2])))) != 1524348995));
        var_24 = (min(((max((arr_1 [i_2]), (26472 <= 53713)))), (min(((((arr_0 [4]) > 3615))), (min(var_11, var_12))))));
        arr_11 [i_2] = ((-(((!(arr_1 [i_2]))))));
        arr_12 [i_2] = ((-((~(arr_8 [i_2])))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_25 = (((((var_17 % (arr_15 [i_3] [i_4] [11])))) ? (min((arr_15 [i_3] [i_4] [i_5]), 39801)) : ((-1764294251 ? (arr_15 [i_3] [i_3] [i_3]) : (arr_15 [i_5] [i_4] [i_3])))));
                    var_26 -= ((+((((arr_0 [i_5]) != (max(61939, -1291033593)))))));
                    arr_19 [i_5] [i_5] = 4065482486764965449;
                    var_27 -= ((((503573948 ? (arr_18 [i_3] [i_3] [10] [i_5]) : (arr_18 [i_3] [i_4] [i_4] [i_5]))) | (max((!26115), -1291033593))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_28 = (max(3598, (((arr_14 [i_4]) % (arr_14 [i_6])))));
                    arr_23 [i_3] [i_4] [i_6] = 1934;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_27 [i_7] [6] [i_3] = (min((arr_14 [i_4]), ((-((((arr_16 [6] [i_4] [i_7]) <= var_17)))))));
                    var_29 -= (min((((arr_8 [i_3]) * (arr_0 [i_7]))), (~409391889)));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_30 = (((((((min(var_13, 34784)))) % (min(var_6, 271563475)))) >= 44347));
                    arr_30 [i_3] [9] [i_8] [i_8] = (((((((arr_29 [i_4] [1]) ? (~215) : (arr_25 [i_8] [i_8]))) + 2147483647)) >> (6018651384153603274 - 6018651384153603248)));
                    var_31 -= (((~(min(1673832706, (arr_14 [i_3]))))) << (min((((var_14 <= (arr_24 [i_8])))), ((2722573838 >> (9353759946930375439 - 9353759946930375420))))));
                }
                arr_31 [i_3] [i_3] [i_4] = (max(((var_0 || ((min((arr_28 [i_3] [6] [i_3]), var_14))))), ((var_9 >= ((((var_15 >= (arr_16 [i_3] [i_4] [i_3])))))))));
            }
        }
    }
    #pragma endscop
}
