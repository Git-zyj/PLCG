/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_4, var_7))) ? 707916112550317422 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-313047763 ? 1 : 88));
                arr_7 [i_0] [i_1] = (((min((arr_3 [i_0] [i_1]), 17738827961159234196))) ? (max(1, ((0 ? (arr_3 [1] [i_1]) : -7301)))) : ((var_2 ? (56102 || 15493230291524734842) : var_8)));
                var_16 = (((arr_1 [i_0]) && (arr_5 [i_1] [i_0] [i_0])));
            }
        }
    }
    var_17 = (((((min(var_3, (var_1 == var_4))))) <= (min((2458622521 + var_7), ((var_13 ? var_11 : 11869695889221359926))))));
    var_18 = (((var_2 ^ var_13) ? (max(17738827961159234198, -8271822123795234864)) : (((var_4 + ((max(var_3, var_11))))))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_3] [i_2] = ((-41249 ? ((min(-29787, 1))) : -var_12));
            var_19 = (arr_8 [i_2]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_16 [i_4] [15] [15] = (min(((((max((arr_12 [1]), var_0))) ? (((var_0 ^ (arr_8 [i_2])))) : 13044012078935187056)), ((((var_5 | var_1) | (min((arr_11 [i_4] [i_2]), 1)))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 = (min(var_7, (max(118, (707916112550317422 / 1)))));
                            var_21 = (((197 ? (arr_14 [i_2]) : (arr_14 [i_7]))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_22 = (arr_9 [i_8]);
                    var_23 = (-9223372036854775790 ^ -5019319931829493628);
                    var_24 = (arr_11 [i_2] [1]);
                    var_25 = var_5;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_37 [i_2] [i_8] [i_9] [i_10] [i_11] = ((((((2600139266 <= (((max((arr_28 [7] [i_10]), 7300)))))))) <= (min(5019319931829493597, 1))));
                                var_26 = (((((-(arr_18 [i_2] [i_8] [i_9])))) ? var_12 : (((-86 ? ((((arr_19 [i_2] [i_2] [i_2] [i_2]) <= 924989509))) : var_12)))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (((5019319931829493627 - -27952) ? (1 <= 64372) : (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_28 = ((-265419430 ? ((min(254, 1))) : -265419416));
        var_29 = (((-(((arr_40 [i_12]) ? (arr_38 [i_12]) : 0)))));
        arr_41 [i_12] = (((9699 ? 196 : 1739)));
    }
    #pragma endscop
}
