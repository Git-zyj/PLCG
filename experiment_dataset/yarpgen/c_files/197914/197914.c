/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_7;
    var_13 = -3624697207427264317;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        var_14 = (max(var_14, (((((57653 ? (max(18234433803918348656, var_6)) : var_10)) <= (((-1472246759397821494 - (arr_1 [i_0 + 1])))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (((arr_4 [i_1 - 1]) ? (((arr_5 [i_1]) * 0)) : (arr_4 [i_1])));
        arr_7 [i_1] [i_1] = (!15509785593859507663);
        var_16 = (var_10 ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]));

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_17 -= (((212310269791202959 > 1) ? (!1) : 255));
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_18 = (!142);
                            arr_18 [i_5] [i_1] [i_1] [i_1 - 1] = -1425874373;
                        }
                    }
                }
            }
            var_19 &= (((arr_15 [i_2 - 3] [i_2] [i_1 - 1] [i_2 - 2] [i_1] [i_1 - 1]) & (arr_15 [i_2 - 1] [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_1 - 1])));
            var_20 += (((arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_2 + 1] [i_2]) ? (arr_4 [i_1 - 1]) : (((232 || (arr_9 [8] [i_2 + 1]))))));
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = var_4;
        arr_22 [i_6] = ((((var_3 ? (!16393) : ((max(-2, var_3))))) < ((-1 ? (arr_11 [i_6 - 1] [i_6]) : (arr_10 [i_6])))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_21 |= ((((((!var_7) ? ((max(1, var_1))) : (arr_28 [i_6 - 1] [i_8] [i_9])))) ? (((!1) ? 5415819789070837702 : (arr_15 [i_6 - 1] [i_7] [i_8] [i_8] [i_9] [i_9]))) : (((((((arr_11 [i_6 - 1] [i_7]) && var_10)) && (arr_8 [i_8] [i_8])))))));
                        var_22 = var_3;
                        var_23 = 5177;
                    }
                }
            }
        }
        arr_29 [i_6] = ((((max(var_5, 2147483647)))) ? (((((5806215936065117346 ? 859007486 : var_9))) ? (19 & var_5) : (arr_26 [i_6] [i_6] [i_6 - 1] [i_6]))) : (1272850295 % 493));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] = ((((!(arr_11 [i_10] [i_10]))) ? var_10 : 18446744073692774400));
        arr_34 [i_10] = ((((((arr_9 [i_10] [i_10]) ^ (arr_28 [i_10 - 1] [i_10] [i_10 - 1])))) ? -9113724719902256824 : (arr_4 [i_10 - 1])));
        var_24 = ((arr_6 [i_10] [i_10 - 1]) ? (arr_13 [i_10 - 1] [i_10] [i_10 - 1]) : (((!(arr_24 [i_10])))));
    }
    #pragma endscop
}
