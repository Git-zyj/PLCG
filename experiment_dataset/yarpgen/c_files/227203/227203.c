/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = var_7;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] = (((((((var_13 ? (arr_1 [i_0 + 3] [1]) : var_0)) % (arr_4 [i_0 + 3] [i_0 + 1] [i_1])))) ? ((22993 ? 0 : 7)) : (((((-(arr_4 [i_0] [13] [14])))) * ((2229073499 ? 0 : 2164780705))))));
            var_19 = (((((var_10 ? (arr_0 [i_0 + 3] [i_0 + 4]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((((arr_0 [i_0 + 2] [i_0 + 2]) >= (arr_0 [i_0 + 2] [i_0 + 1]))))) : ((1 ? -19 : 2229073499))));
        }
        var_20 = ((2229073499 ? 1434194394 : 42596));
        var_21 = ((7 ? 42596 : 1));
        var_22 = (arr_4 [i_0] [i_0] [i_0 + 2]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_23 = ((~((-126 ? 126 : 1))));

                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_24 = (((var_0 ? 937020398707103845 : ((((arr_16 [i_2] [i_2] [i_2]) ? (arr_14 [i_2]) : 42596))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((((arr_9 [i_5 + 1]) ? (arr_9 [i_5 - 3]) : 16913969218303671039))))));
                                var_26 = (min(var_26, (((arr_16 [i_2] [i_3] [20]) < (((((1 >= (arr_10 [i_2] [22])))) * (arr_8 [i_2])))))));
                                arr_24 [i_6] = (((((12253167254862991477 ? 1101527112629263131 : 0))) << 0));
                            }
                        }
                    }
                    var_27 = var_3;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_2] [i_2] [i_3] [i_2] = (!((!(arr_15 [i_2] [i_3] [i_7] [i_7]))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_28 = (min(var_28, var_11));
                                var_29 = (arr_19 [i_2] [i_3] [7] [i_8 - 1]);
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_30 = var_5;

                    for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        var_31 = (((~(min((arr_21 [1] [1] [1] [i_10] [i_11]), var_0)))));
                        var_32 = ((8253877830459420301 ? 16855875167264775741 : 4294967295));
                        var_33 *= (var_9 ? (arr_13 [i_11 - 1] [i_3] [i_11 + 1]) : var_7);
                    }
                    for (int i_12 = 2; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_34 = (max(((67 ? var_11 : 126)), (((arr_26 [i_12 + 1]) ? var_6 : (arr_31 [i_12] [i_12 - 2] [i_12 + 1])))));

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_45 [i_10] [i_2] [1] [i_3] [i_10] = ((!var_0) ? 89 : (((arr_17 [8] [i_3] [i_10] [i_12] [4]) ? (max((arr_12 [i_10]), (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))) : -var_12)));
                            var_35 ^= (arr_44 [i_2] [i_2] [0] [24] [i_2] [i_2]);
                            var_36 = (((((!((((arr_25 [i_3] [3] [i_10]) ? (arr_17 [i_2] [i_3] [14] [i_12 + 1] [i_13]) : var_0))))))) <= (arr_19 [i_3] [i_10] [i_12] [i_13]));
                            var_37 = var_6;
                            var_38 = 63;
                        }
                    }
                }
                var_39 = ((var_5 ? -var_10 : var_6));
                arr_46 [i_3] = ((((((arr_44 [i_3] [i_3] [14] [14] [16] [16]) ? 4294967289 : -22))) >= (max((arr_37 [i_2] [i_3]), (max((arr_23 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]), var_11))))));
                arr_47 [6] [i_3] [i_3] = (((arr_34 [8] [i_3] [i_3] [i_3] [12]) ? ((((arr_35 [i_2] [i_2]) < (arr_35 [i_2] [i_3])))) : (arr_38 [i_2] [i_2] [i_2] [i_2] [12] [i_2])));
            }
        }
    }
    var_40 = var_12;
    #pragma endscop
}
