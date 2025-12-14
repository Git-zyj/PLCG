/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 == 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0 + 1] = (arr_5 [i_0] [i_0 + 1] [i_0 + 1]);
                    arr_8 [i_0] [i_1] [i_1] = ((!(arr_0 [i_0 + 1])));
                    var_17 = (min(var_17, (arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])));
                    arr_9 [i_1] [i_0] = (-17461 ? -17461 : 119);
                }
            }
        }
        var_18 *= var_15;
        arr_10 [i_0] = (((((-87 ? -327780860 : (arr_1 [i_0])))) ? ((var_2 ? var_6 : var_12)) : (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
        arr_11 [i_0] = var_1;
        var_19 = var_2;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_3] = var_13;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 = (arr_15 [i_5] [i_4]);
                            arr_27 [i_7] [i_6] [i_5] [i_3] = ((17484 > (arr_12 [i_6] [i_4])));
                        }
                    }
                }
            }
            arr_28 [i_4] [i_4] [i_4] = var_9;
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            arr_31 [1] [i_8] [i_8] = (min((((31221 ? 2010062985 : 1))), -5091751305043034980));
            arr_32 [i_3] [i_8 - 2] [i_8] = (min(255, -95));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_35 [i_9] = (((((arr_29 [i_3]) ? (arr_14 [i_9] [i_3]) : (!var_8))) * var_10));
            arr_36 [i_3] = (min(((min((arr_29 [i_3]), 81))), 12025561059796753122));
        }
        arr_37 [i_3] = (arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] = var_12;
        arr_42 [i_10] = -var_15;
        arr_43 [i_10] = ((min(var_0, ((19912 ? 1 : 17018222469732611869)))));
    }
    var_21 ^= (min((241 != -31222), var_11));
    var_22 = var_11;
    #pragma endscop
}
