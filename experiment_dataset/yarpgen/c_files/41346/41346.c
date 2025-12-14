/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_6 ? -7217 : var_3))) ? (0 - var_3) : var_8))) ? var_9 : var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [10] = (((((((-58 + var_4) && var_5)))) ^ (((((arr_0 [8] [i_0]) ? var_4 : var_2)) << (((min(var_5, (arr_1 [i_0]))) - 38437))))));
        arr_4 [i_0] [i_0] = (max(((var_6 ? (arr_2 [i_0]) : -1)), ((~(arr_2 [12])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_11 = (max((arr_2 [i_1]), ((((((arr_2 [i_1]) / (arr_5 [i_1])))) ? (max(var_0, (arr_1 [i_1]))) : (!-4)))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_12 = ((((var_6 / (arr_1 [i_2]))) - 25986));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [i_2] [i_3] [12] [4] [i_5] = ((~(((arr_9 [i_1] [7] [6]) | var_6))));
                            arr_18 [i_4] [i_1] [i_1] [i_1] [i_1] = ((((max((min(1, var_4)), (max((arr_5 [i_5]), var_6))))) ^ (~63)));
                            var_13 = (min(var_13, ((max((0 || var_4), (max(var_8, var_2)))))));
                            arr_19 [i_1] [i_2] [12] [i_3] [i_4] [i_2] [i_5] = ((((((min(4503599627370495, (arr_7 [i_1]))) * (((((arr_13 [i_1] [i_2] [i_3] [i_4]) && var_8))))))) ? var_5 : (arr_12 [9] [i_4] [i_3] [i_1])));
                        }
                    }
                }
            }
            arr_20 [i_2] [i_1] [i_1] = (arr_9 [i_2] [i_1] [6]);
        }
        var_14 = ((((((var_9 - (arr_14 [i_1] [0] [0] [6])))) ? (max((arr_6 [i_1]), var_1)) : var_2)));
        arr_21 [i_1] = (arr_0 [i_1] [4]);
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_15 ^= var_4;
        arr_26 [i_6] [11] = var_1;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_16 = (min(var_8, (arr_23 [i_7] [10])));
                        arr_34 [i_6] [i_6] [i_8] [i_9] = (arr_9 [i_6] [i_7] [i_7]);
                        arr_35 [i_6] [7] [i_6] [6] [i_6] [i_9] = (max(1, ((~(((arr_22 [i_8] [i_9]) ^ var_1))))));
                        arr_36 [i_6] = ((var_8 <= (min(((min((arr_15 [i_6] [10] [i_7] [i_8] [4] [i_9]), var_4))), var_9))));
                    }
                }
            }
        }
        var_17 = (min(var_17, (((!((min((arr_25 [i_6]), 8203101456151615597))))))));
    }
    for (int i_10 = 3; i_10 < 18;i_10 += 1)
    {
        var_18 = min(var_9, var_9);

        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_19 = var_9;
                            var_20 = (min(var_20, ((max(((max((var_4 < var_1), var_6))), ((~((1616375514 ? 1616375514 : (arr_43 [i_10 - 3] [i_10 - 3]))))))))));
                            var_21 = (max(((((var_6 / var_7) * ((-16 ? var_6 : (arr_44 [i_10 - 3] [i_11] [i_13 - 2] [i_11])))))), (max(0, var_3))));
                            arr_50 [i_10] [i_11] [i_11] [4] [8] [i_14] = (((((((((arr_44 [15] [9] [9] [i_13]) ? var_3 : (arr_48 [i_13] [i_14 + 2])))) ? var_9 : ((min(-25986, (arr_49 [i_10] [i_11] [i_10] [i_13]))))))) ? ((((((arr_46 [i_12]) && var_3)) || var_8))) : (((!((min(var_2, -3626016723892055734))))))));
                            arr_51 [i_10] [i_10] = ((var_3 <= (arr_45 [i_12 + 1] [i_10] [i_10])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 18;i_16 += 1)
                {
                    {
                        arr_58 [i_10] [i_10] = 13;
                        var_22 ^= (min(((((var_4 ? var_5 : (arr_46 [i_10 - 2]))) << (((max((arr_52 [i_11] [i_15] [i_10 + 1] [i_11]), 4597)) - 4592)))), 11508));
                    }
                }
            }
            arr_59 [2] [i_10] = ((~(((7669697523251615696 / (arr_45 [i_10] [i_10] [i_11]))))));

            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 17;i_19 += 1)
                    {
                        {
                            arr_70 [17] [i_11] [i_17] [i_10] [18] [i_17] [10] = var_7;
                            var_23 = arr_65 [12] [i_18] [i_10];
                            arr_71 [i_10 - 1] [i_11] [i_17] [i_18] [i_10] = var_1;
                            var_24 = (max((max((arr_40 [i_10]), (max(255, -11509)))), -27));
                            var_25 = 19935;
                        }
                    }
                }
                var_26 *= var_0;
            }
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    var_27 -= (arr_65 [i_20] [i_11] [18]);
                    var_28 ^= 11506;
                    arr_76 [i_10] [10] [i_10] = 146;
                    arr_77 [i_10] [i_11] [i_10] [1] = -8117;
                }
                var_29 = ((((((arr_62 [i_10 - 2]) / var_5))) * ((((arr_65 [i_10] [i_10] [i_20 - 1]) / (arr_54 [i_20 - 1] [i_11] [3]))))));
                arr_78 [i_10] [i_11] [i_10] = (min(var_7, (((((((arr_61 [i_10] [17] [17]) || 108))) >= (arr_57 [i_10] [i_10] [i_10 + 1] [i_11] [i_20] [10]))))));
                arr_79 [i_11] [i_11] [i_20] |= (((arr_65 [i_10] [i_11] [i_11]) <= var_3));
            }
        }
        var_30 = (arr_63 [14] [i_10]);
        arr_80 [i_10] [i_10] = ((~(min(var_9, var_3))));
    }
    var_31 |= var_8;
    var_32 = -1;
    var_33 = (((((((var_6 ? var_7 : var_1))) ? var_3 : var_9)) ^ (((((var_9 ? var_2 : var_6))) ? -var_9 : (var_1 / var_4)))));
    #pragma endscop
}
