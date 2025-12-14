/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((min(var_7, var_7))) ? (!var_2) : var_9);
        arr_3 [i_0] = (((min(0, ((min(44, 0))))) <= (((((((arr_0 [i_0]) ? 5691 : var_9))) ? 2067316875 : ((((arr_1 [i_0 - 1] [i_0]) != (arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_11 += var_0;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_12 -= (min(var_4, (((!(!37187))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_3] = ((arr_9 [i_1] [i_2] [i_3]) ? (arr_9 [i_1] [i_2] [i_3]) : (min((arr_9 [i_1] [i_1] [i_3]), var_7)));
                        var_13 = (((0 || var_5) ? (((arr_9 [i_1] [i_2] [i_3]) * ((((arr_7 [i_2]) != var_6))))) : (((-347014375 || -13611) ? (var_5 * var_0) : var_0))));
                        var_14 = 503976118455377626;
                        var_15 = var_7;
                    }
                    arr_15 [i_1] [i_3] [i_1] = (!var_8);
                    var_16 *= (var_0 || ((min(1780546536, (((arr_13 [i_1] [i_2] [i_3] [i_3]) % 1))))));
                    arr_16 [i_1] [i_2] [i_3] [i_1] = ((((min((((arr_12 [i_1]) ? var_5 : var_1)), ((min(var_1, var_1)))))) ? (min(1, 576460752303423480)) : ((((!((min(var_5, (arr_10 [i_1] [i_2] [i_3] [i_2]))))))))));
                }
            }
        }
        var_17 = var_9;
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_18 = ((!(((7753 ? 57374 : (arr_17 [i_5 - 2]))))));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] = var_6;
                    var_19 = (max(var_19, (arr_12 [i_5])));
                    var_20 = ((var_4 ? 234 : 59854));
                    var_21 = (min((((!(arr_7 [i_5 - 2])))), (0 - 19199)));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_28 [i_5] [i_6] [i_8] = (arr_27 [i_5] [i_6] [i_8] [i_6]);
                    arr_29 [i_5] [i_6] [i_5] [i_8] = ((((-(arr_27 [i_8] [i_5 - 2] [i_6] [i_6])))) ? (min((arr_27 [i_8] [i_5 - 2] [i_5] [i_8]), (arr_27 [i_5] [i_5 - 1] [i_8] [i_5 - 1]))) : (((arr_27 [i_5] [i_5 - 1] [i_5 - 1] [i_8]) ? -1023777540 : (arr_27 [i_5] [i_5 + 1] [i_8] [i_6]))));
                    var_22 = (min(var_22, (((((((!(arr_13 [i_5] [i_6] [i_5] [i_5]))))) ? var_6 : var_4)))));
                    arr_30 [i_5] [i_5] [i_5] [i_5] &= ((!(((arr_26 [i_8]) != 12751489780969797020))));
                }
                var_23 = (((min((arr_6 [i_5 - 1]), var_5))) || (arr_7 [i_5 - 1]));
            }
        }
    }
    #pragma endscop
}
