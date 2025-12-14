/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);
                var_19 = 19489;
                var_20 |= (arr_0 [i_1 - 2]);
                var_21 = (max((min((~var_10), (arr_5 [i_1 - 1] [i_1 - 2] [i_1]))), (arr_2 [i_0 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_22 += (min(-323380628012378888, (min((arr_8 [i_2 - 1]), (var_1 % -218659117)))));
                var_23 -= ((((max(var_10, (arr_11 [i_2] [i_2] [i_2 + 1])))) ? (arr_7 [i_3]) : ((150694710760259487 ? (arr_11 [i_2] [i_2] [i_3 + 2]) : (arr_11 [i_3] [i_3 - 1] [i_3 + 1])))));
                var_24 = (min((arr_8 [i_3 + 2]), ((min((arr_12 [i_3 + 2] [i_2 + 2]), (arr_11 [i_2] [i_2] [14]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                var_25 -= (((arr_16 [i_4]) % var_17));
                arr_17 [i_4] = -1;
                arr_18 [i_4] [i_4] = (min(7, (max(((5494318121353580293 ? 3636788121955864574 : var_9)), 727748533))));
                var_26 ^= (max((((((727748533 ? -579422903 : 727748539))) ? (!0) : 727748533)), (arr_10 [i_4 - 1])));
            }
        }
    }
    var_27 += var_14;
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            {
                var_28 = (min(var_28, ((min((!var_5), (727748533 && 252))))));
                arr_23 [i_7 - 1] [i_6] [i_6] = ((((arr_0 [i_6 - 1]) != (arr_1 [i_7 + 1] [i_6 + 1]))));
                arr_24 [i_6] [i_6] [i_6] = (min((((arr_3 [i_6 - 2]) ? (arr_14 [10] [i_7]) : (3567218762 | var_16))), ((min((min(var_12, 4294967286)), (~727748533))))));
                var_29 = (min(var_29, ((min(((var_0 * (arr_16 [i_7 + 1]))), ((((arr_8 [i_6 + 3]) ? (arr_6 [i_6 + 3] [i_6 - 1]) : (arr_6 [i_6 - 1] [i_6 + 3])))))))));

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_30 += 9223372036854775795;
                    var_31 |= (min((((var_7 ? (arr_15 [i_6] [i_7 + 1] [8]) : var_11))), (0 * 0)));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_32 -= (((arr_28 [i_7 - 2] [6] [i_7] [i_7 + 1]) == (arr_28 [i_7 - 2] [i_7] [1] [i_7 - 2])));
                                var_33 = (arr_8 [i_9 - 1]);
                            }
                        }
                    }
                    arr_37 [i_7] [i_7] [i_7] [7] = (arr_31 [i_7] [i_7] [i_7 - 2] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
