/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((~(min(var_0, (arr_3 [i_1] [i_0] [i_0])))));
                var_11 = min((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_1] [i_0] [i_0]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_12 = (arr_9 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((!(arr_9 [i_2]))))));

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_14 = ((min(var_7, var_8)));
                                var_15 = (min(var_15, ((~((-(arr_1 [i_3 - 1] [i_4 + 2])))))));
                                var_16 = ((var_3 ? (((!(arr_12 [i_2] [i_3 - 2] [i_4] [i_6])))) : var_7));
                            }
                        }
                    }
                }
                var_17 ^= var_5;

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_18 = (~0);
                                var_19 = 2336893014;
                            }
                        }
                    }
                    var_20 = ((!(arr_9 [i_3 + 1])));
                    var_21 = (arr_17 [i_2] [i_3] [i_7]);
                }
                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 7;i_12 += 1)
                        {
                            {
                                var_22 = (min((-127 - 1), 263700263));
                                var_23 &= min(var_8, ((((((arr_8 [i_2] [i_2] [i_2]) ? var_7 : var_9))) ? (!var_4) : ((min((arr_29 [i_2] [i_10] [i_11 + 3] [i_11 + 3]), var_2))))));
                            }
                        }
                    }
                    var_24 = var_3;
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    arr_40 [i_2] [4] = (min(var_5, (arr_37 [i_2] [i_3])));

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_25 = (max(var_25, (((-((~(min(var_3, (arr_17 [i_2] [i_2] [i_2]))))))))));
                            arr_48 [i_2] [1] [i_14] [i_2] = (arr_45 [i_2] [i_3] [i_13] [i_3] [i_15] [i_14]);
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_26 = (min(((-(arr_2 [i_14] [i_16]))), var_1));
                            var_27 = (arr_11 [i_3] [i_13] [i_16]);
                            var_28 = (!2082446248);
                        }
                        arr_51 [i_2] [i_13] [i_3] [i_2] &= (((arr_11 [i_2] [i_2] [i_3]) ? (min(((var_1 ? var_8 : var_0)), var_2)) : ((~(min(-2082446254, 3393250147))))));
                    }
                    for (int i_17 = 2; i_17 < 7;i_17 += 1)
                    {
                        arr_54 [i_2] [9] [7] [9] = (arr_23 [i_3 - 1] [i_2] [i_3]);
                        var_29 = ((~(arr_2 [i_3 + 1] [i_13])));
                    }
                }
                var_30 = (arr_9 [i_2]);
            }
        }
    }
    var_31 = var_3;
    var_32 = (((!var_9) ? var_1 : (min((~var_1), var_7))));
    #pragma endscop
}
