/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(123, 4294967295)));
    var_18 = max(((min(var_5, (!var_0)))), ((var_6 ? (min(var_14, var_5)) : var_16)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (((arr_6 [i_0] [i_0 + 2] [i_2] [i_2]) ? (arr_6 [i_0] [i_0 - 3] [i_2] [i_0]) : (arr_6 [i_0] [i_0 - 3] [i_0 - 3] [i_2])));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] = ((var_12 > (arr_3 [i_0] [i_0 - 3])));
                        var_20 = ((arr_7 [i_1] [i_0 - 3]) ^ var_0);
                        var_21 = ((-(((!(arr_4 [i_0] [i_1] [i_0]))))));
                    }
                }
            }
        }
        var_22 -= (((var_12 + 2147483647) << (((arr_8 [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0]) - 4215151039))));
        arr_12 [i_0] = (123 << 1);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_7] [i_7] [i_7] [i_7] = ((1 ? 1 : 123));

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_23 = ((((((var_5 / (arr_26 [i_6] [i_6] [i_6] [i_6]))))) ? (arr_14 [i_5]) : (((var_4 != var_14) ? (arr_23 [i_5] [i_7] [i_7] [i_7]) : (((arr_19 [i_4] [i_6] [i_7]) ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : (arr_23 [i_4] [i_7] [i_4] [i_4])))))));
                            var_24 = (arr_24 [i_4] [i_7]);
                            var_25 = var_6;
                            var_26 = var_3;
                        }
                    }
                }
            }
        }
        var_27 = (arr_24 [i_4] [i_4]);

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_28 = (((((min(var_12, 123)))) - 0));
                var_29 ^= (min((1 && 16128), (((arr_27 [i_4]) && var_5))));
                var_30 = max(var_10, ((var_9 ? (arr_34 [i_9]) : (arr_34 [i_9]))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_31 = (((arr_17 [i_12 - 1] [i_12 - 1]) && var_16));
                            var_32 = (((!(arr_27 [i_9]))));
                            var_33 = var_9;
                            var_34 = ((var_12 && (arr_18 [i_9] [i_11] [i_12])));
                            var_35 = (min(var_35, ((min((((arr_37 [i_11] [i_12] [i_12] [i_12] [i_11] [i_12 + 1]) + (arr_32 [i_12 + 1] [i_11] [i_12 + 1]))), ((((((arr_16 [i_4] [i_4] [i_4]) ? (arr_24 [i_10] [i_11]) : (arr_24 [i_4] [i_4]))) > (min((arr_14 [i_4]), (arr_27 [i_11])))))))))));
                        }
                    }
                }
            }

            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                arr_41 [i_9] [i_9] [i_9] = ((6590478830767229670 ? 1 : -1072));
                var_36 += (min((arr_31 [i_4] [i_4] [i_13 - 1]), (arr_31 [i_4] [i_4] [i_4])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_37 = (0 / -127);
                            var_38 = (((((119 / ((max(var_11, var_16)))))) ? (((min((((var_13 && (arr_43 [i_13] [i_9] [i_13])))), (arr_13 [i_4] [i_4]))))) : (min(var_16, (((arr_38 [i_4] [i_9] [i_13] [i_14] [i_14] [i_15] [i_15]) ? var_3 : var_15))))));
                            var_39 = ((-(!var_1)));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                var_40 |= var_1;
                arr_52 [i_9] [i_9] = (max((((var_0 || (((arr_27 [i_9]) == var_6))))), ((((((arr_32 [i_4] [i_9] [i_16]) / var_12))) ? ((var_2 ? var_11 : var_2)) : var_5))));
                var_41 = ((((((arr_40 [i_9]) & (arr_51 [i_4] [i_9] [i_4])))) ? (~var_10) : (((-(arr_26 [i_4] [i_4] [i_4] [i_4]))))));
                var_42 -= (min(var_9, ((min(((123 ? 0 : 27)), 16128)))));
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            arr_57 [i_4] [i_4] [i_4] = ((var_8 >= (((((arr_40 [i_17]) > var_8))))));
            var_43 = (((arr_17 [i_4] [i_4]) || (((~(arr_26 [i_4] [i_4] [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 17;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_44 += (((((arr_24 [i_4] [i_4]) != (arr_13 [i_4] [i_19]))) ? (arr_14 [i_18 + 2]) : (arr_14 [i_18 - 1])));
                        arr_64 [i_4] [i_18] [i_18] [i_4] [i_18] = var_12;
                        arr_65 [i_18] [i_18] [i_18] [i_18] = ((-(arr_33 [i_18 - 1] [i_18 + 2] [i_18 - 1])));
                        var_45 *= (((arr_46 [i_18] [i_18] [i_18 + 2] [i_18] [i_4] [i_18] [i_18 - 1]) * var_16));
                    }
                }
            }
        }
        var_46 = (arr_14 [i_4]);
    }
    #pragma endscop
}
