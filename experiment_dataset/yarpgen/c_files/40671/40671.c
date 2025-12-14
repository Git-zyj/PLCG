/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_1] [6] |= 0;
                        var_13 -= ((((((2021636694 ? var_10 : 2000963605456731213))) && ((max((arr_2 [i_0] [i_2] [2]), 106))))));
                        arr_14 [i_1] [i_1] = (min(((~((865920614 ? var_1 : 210)))), 11911569489579305500));
                        arr_15 [i_2] [i_1] [i_3] [i_3] [i_2] [i_1] = 1;
                        arr_16 [i_1] = (min(0, (((arr_6 [i_0] [i_1] [i_2] [i_3]) < (arr_7 [i_2] [i_3])))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_21 [i_0] [i_0] [i_0] = (((min(((12 + (arr_2 [i_0] [i_4] [i_4]))), (~-1))) % ((((var_7 % var_8) ? (((var_1 >= (arr_11 [i_4] [i_0] [i_0] [i_0])))) : 0)))));
            var_14 = (min((((~(!var_8)))), ((var_4 ? 224 : (max(var_6, (arr_7 [i_0] [6])))))));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            var_15 = var_6;
            var_16 |= (((arr_17 [i_5 - 3] [i_5 - 3]) == ((min(var_6, (arr_12 [i_0] [i_0] [i_0] [6]))))));
        }
        var_17 -= 1;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] = ((!(((max(294804817, (arr_25 [i_6] [i_6])))))));
        var_18 ^= (((arr_24 [i_6]) < (arr_25 [i_6] [i_6])));
        arr_27 [i_6] = var_2;
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_32 [i_7] [i_7] [i_7] = (arr_28 [i_7]);
            arr_33 [i_7] = -12;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_19 -= ((~(arr_30 [i_7] [i_9] [i_9])));
            var_20 |= ((var_0 ? (~-435876470) : var_8));
            arr_37 [i_7] = ((!((var_11 || (1 || 435876470)))));
        }
        arr_38 [i_7] [i_7] = 865920614;
        var_21 &= ((-4471932180673646747 ? var_0 : (arr_35 [i_7] [1] [i_7])));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    var_22 = ((((max(123, -1099356845)))) ? ((-var_9 ? -435876494 : 255)) : 14609);
                    arr_46 [i_7] [i_7] [i_7] = ((min((arr_35 [i_11] [i_7] [3]), (min((arr_35 [i_11] [i_7] [i_11]), (arr_43 [i_7] [i_7] [i_7]))))));
                }
            }
        }
    }
    var_23 |= ((var_1 ? (((!0) ? (max(var_2, 4294967270)) : (var_9 > var_5))) : ((((var_11 || ((min(-8, var_7)))))))));
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 22;i_13 += 1)
        {
            {
                var_24 = min(((((18 ? 1 : (arr_50 [i_13] [i_13] [i_13]))) ^ var_3)), 1);
                var_25 = (((((var_1 + ((min(243, 22)))))) ? ((((min(255, 6427744531537163671))) ? (arr_50 [i_12 + 1] [i_13 - 1] [i_13 + 1]) : 25)) : (arr_48 [i_13] [i_13])));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                arr_61 [i_12] [i_13 - 2] [i_14] [i_15] [i_15] [i_15] [i_16] = (!-var_6);
                                var_26 &= var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            arr_67 [i_12] [i_12 - 1] [1] [1] = (((arr_55 [i_17 + 2] [i_13 - 1]) ? ((((((arr_65 [i_12 + 1] [i_13 - 1] [i_18]) ? -5291197909024074796 : var_5))) ^ var_9)) : (((((22 ? var_1 : (arr_58 [i_13] [i_13 - 2] [i_13] [i_13])))) ? (min((arr_58 [i_13] [i_13] [i_17 + 2] [i_12]), -29)) : (max(-4126302133062525058, var_10))))));
                            arr_68 [i_18] [i_17] [i_13] [2] = ((((!(arr_54 [i_12 - 1] [i_17] [i_17 + 1] [i_18]))) && ((min((arr_50 [i_12 - 1] [i_12] [i_17 + 2]), var_1)))));
                        }
                    }
                }
                arr_69 [i_12] [i_13] = ((min(1, -23)));
            }
        }
    }
    #pragma endscop
}
