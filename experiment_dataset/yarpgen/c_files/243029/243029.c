/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 417));
    var_14 = (!var_4);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(-1791675177, 2407072210));
        var_16 = -var_11;
        var_17 ^= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (((((((((arr_3 [i_1]) ? (arr_3 [i_1]) : var_11))) ? (4250440641 + 1) : var_6))) || (((539350636 ? 12427 : 126)))));
        var_18 = ((var_12 ? (((((((arr_4 [i_1]) - 26))) ? (arr_3 [i_1]) : (arr_4 [i_1])))) : (((min(var_6, (arr_3 [i_1]))) - (arr_4 [i_1])))));
        arr_7 [i_1] [i_1] = ((-((-(arr_3 [i_1])))));
        arr_8 [i_1] = ((-(4205609120 == 5155245871300462741)));
        var_19 = 2941784241;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_20 = (((arr_11 [i_2] [i_3] [i_2]) >= 829284601));
                    var_21 = ((!(arr_5 [i_3] [i_4])));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_2] = (((arr_9 [i_2]) ? ((142 + (arr_16 [16] [i_3] [i_4] [i_5]))) : ((((arr_9 [i_2]) + var_7)))));
                        arr_19 [i_2] [i_2] [i_4] [i_4] = 5361848267754326972;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_6] [i_2] [i_3] = -5155245871300462737;
                        var_22 ^= ((55869 ? 5 : 12));
                        arr_23 [9] [i_2] [i_2] [i_4] [i_6] [i_2] = (((arr_13 [i_2] [i_3] [i_4]) ? (arr_13 [i_2] [i_3] [i_4]) : var_3));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_4] [i_2] [i_4] [i_6] [i_7] [i_2] = (((((arr_13 [i_2] [i_2] [i_4]) ? 4294967295 : var_9)) >= (arr_11 [i_6] [i_2] [i_2])));
                            var_23 = (~var_2);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_2] [i_3] [i_4] [i_6] [i_8] = (arr_17 [i_2] [i_2] [i_3] [i_3] [i_8] [i_3]);
                            arr_32 [i_2] [i_6] [i_4] [i_3] [i_2] = (((arr_4 [i_2]) ? 124 : var_9));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_24 = 12446;
                            var_25 = (9638 - 9223372036854775807);
                            var_26 = (((((var_11 ? (arr_29 [i_2] [i_3] [i_2] [i_2] [i_9]) : (arr_17 [i_2] [i_3] [i_3] [i_4] [i_6] [i_9])))) ? (arr_12 [i_2] [i_3]) : 20));
                        }
                        var_27 = (min(var_27, (((var_3 ? (arr_16 [i_2] [i_3] [i_4] [i_6]) : (arr_16 [i_2] [1] [i_4] [i_6]))))));
                    }
                }
            }
        }
        arr_35 [i_2] [i_2] = -var_8;
        var_28 = var_2;
    }
    #pragma endscop
}
