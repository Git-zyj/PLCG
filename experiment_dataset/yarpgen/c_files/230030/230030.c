/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_8 ? var_4 : var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [1] [i_1] [i_1] [i_2] = (~var_1);
                        arr_12 [i_3] [i_3] [6] [i_3] = (((~15397) < (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 65535 : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3])))));
                        arr_13 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = (((((-(arr_7 [i_3] [i_3] [i_3] [i_3])))) ? 1 : (min((var_10 / 9), var_0))));
                        var_12 = var_3;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_13 = (max(var_13, ((max(var_3, (242 && 16383))))));
                            arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] = (arr_4 [i_1] [i_4]);
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, ((((((469762048 ? (((var_9 << (arr_18 [1] [1] [i_1] [i_2] [i_2] [i_2] [i_6 + 1])))) : ((var_1 << (65535 - 65517)))))) ? ((65510 ? (0 | 887696233) : var_10)) : ((((arr_6 [4] [i_1] [i_2] [i_6 - 1]) << ((((~(arr_0 [16]))) + 22190))))))))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [1] = (min(((((var_8 == var_1) ? 7 : var_5))), -36028797018963968));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_15 = var_3;
                            arr_26 [10] [i_1] [i_7 - 1] [i_4] [i_4] = (!(3746223678 && var_0));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = min((((~15728640) ? var_3 : var_3)), 65531);
                            arr_30 [9] [i_1] [i_1] [i_4] [i_4] = (((~var_1) ? ((-var_4 ? (arr_3 [i_4] [11] [17]) : ((var_5 ? var_1 : (arr_14 [i_4] [i_4]))))) : (arr_19 [i_8] [i_1] [6] [i_1] [i_8] [i_2])));
                        }
                        arr_31 [i_4] = 5977743529889816278;
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_9] = ((arr_2 [i_0]) ? -15728641 : var_8);
                        arr_35 [i_1] &= (12575924658503736779 >> 1);
                        arr_36 [2] [i_9] [2] [i_2] [i_9] = ((var_3 > (((((arr_7 [i_2] [i_0] [i_0] [i_9]) ? var_6 : var_2)) / ((var_9 ? 325734 : 52))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_16 = var_5;
                                var_17 = (max(var_17, var_4));
                                arr_43 [15] [15] [i_2] [i_11] [i_11] [i_2] [i_11] = (~var_3);
                            }
                        }
                    }
                }
                var_18 = 47015;
                var_19 = (max(((((((arr_4 [i_1] [i_0]) ? var_9 : var_3))) ? (min(var_0, 9223372036854775793)) : (((1623603086 ? 18520 : var_2))))), (var_4 | var_8)));
                arr_44 [i_0] [i_1] = (((((39386 ? ((554628815397104393 ? 26 : (arr_28 [i_1] [i_1] [6] [i_1] [i_1]))) : 42))) ? -4 : (arr_37 [i_0] [i_0] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_20 = (min(0, 70));
    #pragma endscop
}
