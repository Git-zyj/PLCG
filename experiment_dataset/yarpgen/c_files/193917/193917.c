/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_1 || 52) ? var_0 : (min(var_2, 2354057004))))) ? ((-(max(2977, var_15)))) : ((((max(var_14, 0)))))));
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_3] [0] = (max((arr_7 [i_0] [i_1 - 3] [i_2 - 1]), ((min((arr_1 [i_1]), (arr_1 [i_0]))))));
                        arr_11 [i_3] [i_1] [i_2 + 1] [i_2 + 1] = (((~var_17) ? (((max(1, 125)))) : (arr_9 [i_1 - 2])));
                    }
                }
            }
        }
        var_21 = (((min(((((arr_3 [i_0] [15]) ? (arr_5 [i_0] [i_0] [13]) : 1940910291))), (arr_2 [8] [i_0] [i_0]))) - ((((((var_1 ? 18 : 17512878132725172331))) ? 18 : (arr_1 [i_0]))))));
        arr_12 [i_0] = (max((((~(arr_4 [i_0] [i_0] [i_0] [i_0])))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [16] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_22 = (min((((1 ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4])))), ((1 ? 2974539556156628758 : 4194213614426659480))));
            var_23 = (min(var_23, (((((arr_16 [6] [i_5] [6]) ? 1663749854 : (arr_14 [i_4]))) | (((arr_14 [i_5]) ? var_5 : (arr_13 [i_4] [20])))))));
            var_24 += ((~((min(-49, var_17)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_20 [i_4] = (max((((!(arr_18 [i_4] [19] [i_6])))), (min(((var_3 ? var_1 : 66)), (((arr_13 [i_4] [i_4]) ? 32767 : -2968))))));
            var_25 = (min((((arr_15 [i_6] [i_4]) ? 131 : (arr_15 [i_4] [i_6]))), 2452694403277353714));
        }

        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            var_26 += ((((((min(var_4, 107))) ? ((17333827895487904921 & (arr_23 [i_7 - 2]))) : var_14)) + -30676));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_27 = 2354057004;
                        arr_28 [i_4] [0] [i_4] [i_9] = (((((5 ? ((var_4 ? 105 : 0)) : (((arr_16 [i_4] [i_7] [i_9]) & var_17))))) ? ((~(arr_18 [i_4] [i_7] [i_8]))) : (((arr_27 [i_4] [i_7] [i_8] [i_9]) & var_16))));
                    }
                }
            }
            var_28 = ((((-3778407382740115056 ? 10933559301598160648 : -123)) < ((((((((arr_24 [i_4] [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_27 [i_4] [i_4] [i_7] [i_7 - 3])))) && var_11))))));
            var_29 = 157;
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_31 [i_4] [i_4] = ((!((max(1940910291, 238)))));
            var_30 = 17333827895487904949;
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_31 ^= ((((-(arr_27 [i_4] [13] [13] [i_4]))) / (((arr_27 [15] [i_11] [i_11] [i_11]) ? (arr_27 [i_4] [i_11] [10] [i_4]) : (arr_27 [i_4] [i_11] [i_11] [i_11])))));
            var_32 = ((((arr_32 [i_4] [i_4] [i_4]) ? var_3 : (arr_19 [i_4] [i_11] [i_11]))));
        }
    }
    #pragma endscop
}
