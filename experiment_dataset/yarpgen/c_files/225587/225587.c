/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_1 ? var_8 : (max(var_5, var_13))))) ? (((max(var_2, 746457597)) * var_15)) : (((var_2 * (var_4 >= var_5))))));
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (arr_2 [i_0]);

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_3] [i_3] = (((arr_6 [i_2 + 1] [i_2 - 1] [9] [i_4]) | ((0 ? -6061 : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))));
                            var_18 = (arr_6 [i_4] [i_3] [i_2 + 1] [i_1]);
                        }
                        var_19 = ((~3002108206) ? (arr_4 [i_0] [i_3]) : (arr_7 [i_2 - 1]));
                    }
                }
            }
            var_20 = ((14 ? 49 : (arr_7 [3])));
            arr_16 [i_0] [3] = (arr_4 [i_0] [1]);
        }
        var_21 = ((-(((var_10 < ((~(arr_14 [i_0] [i_0] [5] [i_0] [i_0] [0]))))))));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_19 [1] [i_5] = max((((arr_18 [i_5]) ? (arr_6 [i_0] [i_5] [i_5] [i_0]) : var_1)), (arr_6 [i_0] [i_0] [i_0] [i_0]));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_22 = ((-7091021646852336619 ^ (((~(arr_6 [i_7] [i_7] [i_7 - 2] [i_7 - 2]))))));
                            var_23 = var_6;
                            var_24 -= var_0;
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_33 [8] [i_9] = (max(1, ((((max((arr_0 [i_9]), 1))) ? (((max((arr_4 [i_9] [i_9]), 68)))) : ((var_9 ? var_11 : 388369428099164520))))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_36 [4] [i_10] [i_10] |= (((((((arr_18 [i_9]) + 2147483647)) << (((arr_29 [i_9]) - 6192))))) ? var_8 : 32765);
            var_25 = (~796308195);
        }
        var_26 = 112;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_27 = min((1 <= var_9), 36);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_28 = (min(var_28, (arr_22 [i_9] [i_11] [i_12])));
                                arr_46 [i_9] [i_9] = ((((((var_4 == var_8) ? ((15144 ? var_4 : 112)) : (((arr_25 [4] [2] [4] [i_11]) & 129))))) || (((max(1, 131071)) < (max(41, 3115589667657440453))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 7;i_16 += 1)
                        {
                            {
                                var_29 = var_2;
                                var_30 = (min((arr_49 [i_9] [9] [1] [i_9]), var_9));
                                var_31 = (((~-125) <= ((-24 ? 15162 : -796308196))));
                            }
                        }
                    }
                    arr_52 [i_9] [2] = (((max(-6061, (1 == -69)))) ? (arr_8 [i_9] [i_11] [i_12]) : 255);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 7;i_18 += 1)
                        {
                            {
                                arr_61 [i_12] [i_12] [0] [i_12] [i_12] [9] [i_12] = ((((((arr_27 [i_18 + 2] [1] [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 2] [i_18 + 3]) ? -23555 : (arr_44 [6] [6])))) ? (((arr_43 [i_18 + 2] [5] [i_18 + 2] [6] [i_18 + 2]) / (arr_40 [i_18 + 3]))) : ((((arr_60 [i_11] [1] [i_11] [9]) - (arr_60 [i_18 + 1] [i_12] [1] [i_9]))))));
                                arr_62 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = (max((arr_38 [i_9] [i_9] [6]), (((var_0 && (((1 ? 1 : (arr_14 [i_18] [i_17] [3] [i_12] [7] [7])))))))));
                                arr_63 [4] = 1803934983;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
