/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((252 / var_0) / var_8)) + var_5));
    var_21 = (min(var_7, var_4));

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 -= (((((max(var_2, var_9)))) || (!var_5)));
        arr_2 [i_0] = (max((((((var_17 > (arr_1 [i_0] [i_0])))))), ((348084529 ? 18446744073709551615 : 1))));
        var_23 = ((((18446744073709551609 ? 162 : 65532))) ? (((max((arr_1 [i_0] [i_0]), (((var_6 || (arr_1 [i_0] [i_0 - 3])))))))) : ((var_7 ? var_12 : (max((arr_1 [i_0] [i_0 + 2]), var_3)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_24 |= (((arr_4 [i_1 + 2]) << (((arr_4 [i_1 - 2]) - 3981440484787241416))));
                                arr_16 [i_1] [i_1] = var_3;
                                var_25 = ((4 ? var_3 : 33));
                                var_26 = 7;
                            }
                        }
                    }
                    var_27 = (var_14 * 31);
                    var_28 = (min(var_28, var_18));
                    var_29 = (arr_12 [i_1]);
                }
            }
        }
        arr_17 [i_1] = -var_7;
        var_30 = (min(var_30, ((((arr_9 [2]) ? (arr_9 [16]) : var_16)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_27 [4] [i_6] [i_6] [i_8] = ((-var_19 != (((arr_23 [i_6] [i_7] [i_6]) | var_1))));
                    var_31 = var_8;
                }
            }
        }
        var_32 -= (((arr_4 [i_6]) ? var_18 : var_17));
    }
    var_33 = ((-((((!var_16) || var_3)))));
    #pragma endscop
}
