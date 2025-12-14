/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((((var_1 ? (arr_1 [i_0]) : (max(3949989459, 1149575699)))) - ((((!(arr_1 [i_0])))))));
        var_12 = (min(((4294967295 % (arr_0 [i_0]))), 3949989460));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_13 = (((arr_3 [i_1]) ? var_6 : ((-(!var_5)))));
        arr_5 [i_1 - 2] = ((((max((arr_4 [i_1 - 2] [i_1 - 1]), var_2))) && var_4));
        arr_6 [i_1 - 2] [i_1 + 2] = (min((arr_2 [i_1 + 2]), var_1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_15 [5] [i_3] [i_3] [i_4] = 84;
                        var_14 *= var_2;

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_15 *= (var_5 >> (((arr_9 [14] [i_3]) - 2812411593167188037)));
                            var_16 = var_0;
                            var_17 = (((arr_18 [i_6] [i_6] [i_6] [i_5] [i_4] [i_6] [i_2]) - var_3));
                        }
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_26 [i_2] [i_2] [i_4] [i_7] [13] = ((((var_3 ? 78 : (arr_24 [i_2] [i_3] [7])))) ? (arr_18 [i_2] [i_2] [i_3] [i_4] [i_7 - 2] [i_7 - 3] [i_8]) : var_0);
                            arr_27 [i_2] [i_2] [i_3] [i_2] [0] [i_8 - 1] [i_8] = ((((~(arr_8 [i_2]))) | var_3));
                        }
                        arr_28 [i_2] [6] = (arr_20 [i_7] [i_7 - 1] [i_7 - 3] [8]);
                        var_18 = (((arr_25 [i_3] [i_7 - 2] [i_7 - 2] [i_3] [i_7 - 1] [i_7 - 3]) ? (((((arr_0 [i_2]) + 9223372036854775807)) << (((-11635 + 11654) - 18)))) : 68));
                    }
                    var_19 = var_5;

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_32 [6] [i_3] [i_3] [i_3] [i_3] [i_3] = (var_4 % 32767);

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_35 [i_10] [i_4] [i_4] [0] [i_3] [13] = (arr_24 [2] [i_3] [i_3]);
                            var_20 = ((!(arr_30 [i_2] [i_3] [i_4] [i_9] [i_3] [i_3])));
                            arr_36 [0] [i_4] = (arr_31 [i_3] [i_2]);
                        }
                        var_21 = ((var_7 != (arr_17 [i_3] [i_4] [i_9])));
                        var_22 = (((arr_14 [i_4] [i_9] [i_4] [i_3] [i_2]) ^ var_2));
                    }
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        arr_40 [i_11] [i_4] [i_3] [i_3] [i_2] [10] = (arr_9 [i_2] [i_11]);
                        var_23 = (arr_11 [i_2] [i_3] [i_11 - 1]);
                    }
                }
            }
        }
        arr_41 [i_2] |= var_3;

        for (int i_12 = 3; i_12 < 11;i_12 += 1)
        {
            arr_45 [i_12] [i_12] = (((arr_16 [i_12 + 1] [i_12] [i_12]) || (arr_16 [i_12 + 3] [i_12] [i_12])));

            for (int i_13 = 3; i_13 < 12;i_13 += 1)
            {
                var_24 &= ((arr_34 [i_13 - 1] [i_13] [i_13] [i_12 - 2] [i_12 - 2]) ? (arr_34 [i_13 - 2] [3] [1] [i_13] [i_12 + 3]) : (arr_34 [i_13 - 3] [i_13] [i_13 + 2] [i_13 - 2] [i_12 - 3]));
                var_25 = ((((((arr_2 [i_13]) / (arr_2 [i_13 + 1])))) ? (((arr_11 [i_2] [i_12] [i_13 - 1]) / 172)) : var_5));
            }
        }
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_26 = (max(var_26, (3037361538 ^ 11092636432882264586)));
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 9;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 11;i_17 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_27 = (((((var_0 ? var_3 : (arr_9 [i_17] [i_16])))) ? 11092636432882264606 : (arr_55 [11] [11])));
                            arr_60 [i_15 + 1] [i_17 + 2] [i_18] [i_17] [11] [i_15] = ((var_7 ? (arr_39 [i_15] [i_15 + 1] [i_15 - 2]) : ((((arr_48 [i_14] [i_17]) ? (arr_13 [8] [4] [i_16] [i_15] [i_14]) : var_4)))));
                        }
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            arr_65 [i_14] [i_14] [i_14] [i_16] [i_17] [i_19] = (!5444049480354587214);
                            var_28 = (max(var_28, (arr_21 [i_14] [i_14] [i_16] [i_17])));
                        }
                        var_29 *= 9410051422636831158;
                        var_30 = (min(var_30, var_1));
                        arr_66 [i_17] = (arr_42 [i_14] [i_14]);
                        var_31 = var_2;
                    }
                }
            }
        }
        arr_67 [i_14] |= var_1;
    }
    #pragma endscop
}
