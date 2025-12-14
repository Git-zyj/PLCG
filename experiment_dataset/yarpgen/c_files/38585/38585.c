/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(var_14, ((min(var_6, (!var_10)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = 1;
        var_18 = (((arr_1 [i_0]) && ((var_6 || (arr_0 [i_0])))));
        arr_2 [i_0] = (((arr_0 [i_0]) && -86));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    var_19 = (max(var_19, (var_8 >= var_14)));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] = var_8;
                        var_20 = (arr_11 [i_1] [i_1] [i_1 - 1] [i_3 + 2] [i_3 - 1] [i_1]);
                        var_21 = (arr_8 [i_4] [i_4]);
                        var_22 = (min(var_22, ((((var_3 ? var_11 : 38038))))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((arr_7 [i_1 - 1] [i_3 - 2]) && (arr_7 [i_1 - 1] [i_3 - 2]))))));
                        var_24 += ((-2420 ? 38032 : 1));
                        var_25 += (-(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_26 |= 3723320410;
                        var_27 -= ((var_13 ? (arr_10 [i_2] [i_2] [i_2]) : (((arr_10 [i_6] [i_2] [5]) << 1))));
                        var_28 = (min(var_28, (((1 ? (((arr_7 [i_1] [i_1]) % (arr_15 [i_1] [i_1 - 1] [i_2] [i_3 + 2] [i_1 - 1]))) : 2333402520)))));
                        arr_20 [i_6] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] = (629326748 == 140187732541440);
                    }
                }
            }
        }
        var_29 = (min(var_29, ((((((arr_17 [1]) ? var_0 : 15568270020473383098)) << ((((8191 ? 117 : 35644)) - 55)))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_30 = (max(var_30, ((((arr_22 [i_7] [i_7]) || (arr_22 [i_7] [i_7]))))));
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_31 = ((var_8 + (arr_24 [i_8] [i_8 + 2] [i_9 - 1])));
                        var_32 = (min(var_32, var_1));
                    }
                }
            }
        }
        var_33 += 131;
        var_34 = (min(var_34, (((!(arr_21 [i_7]))))));
    }
    var_35 = (~-0);
    var_36 |= var_13;
    #pragma endscop
}
