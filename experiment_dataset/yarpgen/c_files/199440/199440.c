/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, (~var_11)));
        var_15 = (min(var_15, var_12));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [20] [i_1 - 1] [20] &= (((var_2 ? var_1 : var_3)));
                    var_16 *= (arr_1 [i_1] [18]);
                    var_17 = ((~(arr_0 [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_18 &= (arr_5 [i_3 + 2] [i_3]);
                    var_19 = 4183812796;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (!636285760)));
                                var_21 = var_8;
                                arr_23 [i_0] [i_5] [16] [i_3] [i_0] = var_5;
                            }
                        }
                    }
                    var_22 &= (!var_1);
                }
            }
        }
        var_23 = 1974089442;
    }
    var_24 = ((((min((min(3795261396, var_13)), var_13))) ? (((!(!var_10)))) : (!var_12)));

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = ((max(1, var_3)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_25 = (arr_2 [1] [i_10]);
                                arr_38 [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_11] = (arr_28 [i_8] [i_8 - 2] [i_10]);
                                var_26 = ((var_11 ? (((-882 + 2147483647) << (((((~182) + 212)) - 29)))) : (((((arr_13 [i_7] [i_8 - 2] [i_7] [i_7]) ? 5671096271913193610 : (arr_0 [i_10])))))));
                                arr_39 [i_7] [i_8 - 2] [i_8 - 2] [13] [i_7] [i_9 - 1] [i_10] = (!1);
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, (!4294967287)));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_28 *= (!1);
        var_29 = ((((!(arr_10 [i_12] [i_12] [i_12])))));
        var_30 |= (min((!73), 4294967286));
        var_31 += 4294967289;
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_32 |= 3671537398;
        var_33 = 20;
        var_34 = 113;
        var_35 = (max(var_35, ((max(((((arr_10 [i_13] [i_13] [i_13]) ? (~var_1) : 623429906))), (arr_9 [i_13] [i_13] [i_13]))))));
        var_36 += var_10;
    }
    #pragma endscop
}
