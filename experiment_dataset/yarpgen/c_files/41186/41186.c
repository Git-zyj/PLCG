/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0 - 2]) >> (((arr_1 [i_0 + 2]) + 18293))));
        var_19 = (min((min(27154, -114)), ((-(((arr_1 [i_0]) / (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = ((!(((477 ? (arr_5 [i_1] [i_1]) : (arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_21 = arr_5 [i_1] [i_1];
                    var_22 = (min(var_22, (arr_7 [i_3] [i_2] [i_3])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_23 = ((-((((min(176, var_17))) << (((arr_6 [i_4]) - 53))))));
        var_24 = 1;
        var_25 -= (min(((((arr_5 [i_4] [i_4]) && var_6))), (((((arr_2 [i_4]) > (arr_5 [i_4] [i_4]))) ? (min((arr_12 [i_4]), (arr_0 [i_4]))) : (((max(181, 477))))))));
    }
    var_26 |= (min((min((var_12 && 171), (max(1, -820790577)))), (((((-4192 ? 152 : 15125))) ? var_12 : (!-5625545739284363901)))));
    var_27 = 1400047683;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    var_28 = (arr_18 [i_5]);
                    var_29 -= ((var_13 | 74) >> ((((var_1 ? -4192 : var_10)) + 4193)));
                    var_30 = (max(var_30, ((((arr_18 [i_5 + 1]) ^ (arr_16 [i_7 - 1] [i_7 + 3]))))));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_31 = (max(var_31, (168 < -17600)));
                    var_32 = (35242 | 178);
                    var_33 = (min((((((min(-2089, var_0)))) * 1575302554)), 4192));
                    var_34 = (((((arr_17 [i_5] [i_6]) ? (arr_21 [i_5] [i_5] [i_5] [i_5]) : (((-1221826543 ? var_15 : 2236))))) ^ ((((((var_13 ? (arr_24 [i_6] [i_6] [i_6] [i_6]) : (arr_20 [i_5] [i_5] [i_5])))) ? ((~(arr_17 [i_8] [i_6]))) : var_2)))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_29 [i_9] [i_6] [i_6] [i_10] [i_9] [i_5] = (arr_21 [i_5 - 1] [i_10] [i_9] [i_10]);
                            arr_30 [i_10] |= (max(-128522555, (((arr_17 [i_10] [i_10]) ? (((arr_14 [i_10]) + 2236)) : 24))));
                            arr_31 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = (i_6 % 2 == 0) ? ((((min(var_8, var_13)) << (((arr_28 [i_6] [i_6] [i_6] [i_6]) - 837359371))))) : ((((min(var_8, var_13)) << (((((arr_28 [i_6] [i_6] [i_6] [i_6]) + 837359371)) + 1137055799)))));
                            arr_32 [i_5] [i_5] [i_5] [i_10] |= (((((((min((arr_23 [i_5] [i_10] [i_9] [i_10]), (arr_20 [i_9] [i_10] [i_9])))) ? (arr_14 [i_9]) : (arr_19 [i_5])))) ? ((var_2 ? ((min((arr_17 [i_5 + 1] [i_10]), var_13))) : (min((arr_28 [i_5 - 1] [i_5] [i_10] [i_5]), var_12)))) : (min(var_4, ((1 ? 186 : var_13))))));
                            arr_33 [i_5] [i_9] [i_6] [i_6] = -1;
                        }
                    }
                }
            }
        }
    }
    var_35 |= var_6;
    #pragma endscop
}
