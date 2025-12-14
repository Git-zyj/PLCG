/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_11);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((arr_1 [i_0]), (((arr_1 [i_0]) | (arr_1 [i_0])))));
        var_13 -= (7761373803998781201 < 60136);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_1));
        var_15 = (((-26400 * -1) ? ((max(7462, 7467))) : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_16 = (((((-(arr_6 [i_3 + 2] [i_1])))) ? (!-7470) : ((~(((arr_3 [i_1]) ? 7761373803998781201 : var_3))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_17 = (arr_11 [i_1] [i_1] [18] [i_1] [i_1] [8]);
                            arr_17 [i_1] = 7761373803998781200;
                            var_18 = 26384;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_19 = (min(var_19, -7466));
                            arr_20 [i_1] [i_2] [i_1] [i_4] [i_6] = ((min(1080996500, (min(2076094377, 531850778715234747)))));
                        }
                        arr_21 [i_1] [i_2] [i_1] = (748462142 > 4095);
                        var_20 = (((((-7464 ? ((-(arr_4 [i_1]))) : -7483))) <= (min(-3570195787887024525, 7449))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_21 = (arr_1 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_22 ^= (max(1335147714, (min(3086922519, (arr_25 [i_10] [i_9] [i_8 - 2])))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_23 = (arr_12 [i_11] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 2]);
                            var_24 = (!1370367564);
                            arr_35 [i_11] [i_11] [i_10] [2] [i_8] [i_11] [14] = (((arr_26 [i_8 - 1] [i_8]) ? (arr_26 [i_8 - 1] [i_11]) : (arr_26 [i_8 - 1] [i_8 - 2])));
                            var_25 = (arr_6 [i_7] [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_26 = ((10685370269710770411 ? (((arr_32 [8] [i_10] [i_9] [i_8]) ? (arr_32 [i_7] [i_7] [i_10] [i_12]) : (arr_32 [i_7] [3] [i_7] [i_7]))) : (((arr_32 [i_7] [i_9] [i_10] [12]) ? (arr_32 [i_10] [8] [i_8] [i_7]) : (arr_32 [i_12] [i_9] [i_8 - 2] [i_7])))));
                            var_27 = ((((((((arr_7 [i_9] [i_10] [i_10]) ? var_4 : (arr_1 [i_10])))) ? (((~(arr_4 [i_8])))) : ((var_0 & (arr_6 [i_8] [i_9]))))) * (((max((arr_37 [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 2]), (!15)))))));
                        }
                        arr_38 [i_9] [i_10] = var_7;
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        arr_41 [8] [i_8 - 1] [5] [i_13] [i_9] = (((((~(arr_10 [i_7] [i_7] [i_7] [i_13])))) ? (((arr_15 [0] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 2] [i_8 + 1]) | (arr_40 [i_8 + 1] [i_8 - 1]))) : 3843785922635728259));
                        var_28 = ((((-var_11 <= (max(38300, (arr_40 [i_7] [i_7]))))) ? (max(var_1, (min(63, var_1)))) : (!var_0)));
                    }
                    var_29 -= var_3;
                }
            }
        }
    }
    #pragma endscop
}
