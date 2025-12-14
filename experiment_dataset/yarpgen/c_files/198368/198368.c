/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((!(var_0 / 256)));
    var_18 = var_15;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max(var_14, (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_17 [i_1] [1] = (((!(arr_5 [i_0 + 3]))));
                            arr_18 [i_4] [i_3] [i_1] [i_2] [i_4] = ((var_5 ? ((((max((arr_9 [i_3] [i_1]), var_8))) ? (arr_14 [i_0] [3] [i_2] [i_1 - 1] [i_4] [i_0]) : (arr_9 [i_0] [i_0]))) : ((((((-25250 + 2147483647) << (((-25221 + 25223) - 2))))) ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) : ((var_15 - (arr_8 [i_0] [i_0] [i_0] [i_1])))))));
                        }
                        arr_19 [i_3] [i_3] [i_2] [i_3] [i_0] |= ((1 * (arr_3 [i_1 - 1] [i_1 - 1] [i_0 + 3])));
                        var_19 = (max(var_19, (arr_9 [i_3] [i_1 - 1])));
                        var_20 ^= max((arr_3 [i_0 + 1] [i_0 + 3] [i_0 + 1]), (((max((arr_16 [i_3] [i_3] [1] [i_3] [12] [i_3] [i_3]), (arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] [12]))))));
                    }
                }
            }
        }
        var_21 ^= ((+(max((!var_8), (53376 / 25249)))));
        var_22 = (((max((((arr_11 [12]) - 1811858101)), (arr_3 [i_0] [i_0] [i_0]))) + 2483109195));
        var_23 = (((((((arr_3 [i_0] [4] [13]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0 + 1] [1]))))) | (arr_4 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] = (arr_20 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {
                        var_24 = (arr_31 [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 2]);
                        arr_32 [i_5] [i_5] [i_5] [i_5] = -0;
                        arr_33 [i_7] [i_5] = (arr_31 [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 2]);
                    }
                }
            }
        }
    }
    var_25 = var_5;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            {
                var_26 = (min(var_26, ((max((min(1811858101, 25250)), var_9)))));
                var_27 ^= (arr_35 [i_9]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_28 |= var_14;
                            var_29 -= ((((var_4 ? ((var_10 ? (arr_42 [i_9] [i_9] [i_10] [i_11] [i_12]) : var_11)) : (arr_40 [i_12 + 2] [i_12] [i_10 - 1] [18])))) ? -1811858101 : (((((((arr_37 [i_11]) || var_0))) % -var_3))));
                            var_30 = ((((max((((arr_41 [i_9] [i_10] [i_11] [i_12]) ? (arr_39 [i_12] [i_10] [i_9 + 1]) : (arr_40 [i_9 - 1] [i_10] [i_11] [i_11]))), 1811858100))) ? (((arr_37 [i_9 - 1]) ? 974 : 15203)) : (arr_41 [14] [1] [i_11] [i_12])));
                            var_31 = 65535;
                            var_32 = 3973865258;
                        }
                    }
                }
                var_33 |= ((((-(((arr_43 [2] [i_9 + 1] [i_9] [i_10] [8] [i_10 - 1]) + (arr_34 [10] [i_10 + 1]))))) > ((((arr_36 [i_9 - 1] [i_9 + 1]) ? (arr_36 [i_9 + 1] [i_9 - 1]) : (arr_36 [i_9 + 2] [i_9 - 1]))))));
                var_34 += (min((max(1811858101, 1811858113)), (max((max(1894437694, var_15)), (((3308522316 ? var_14 : var_4)))))));
            }
        }
    }
    #pragma endscop
}
