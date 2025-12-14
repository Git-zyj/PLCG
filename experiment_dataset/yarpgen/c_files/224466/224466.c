/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = (((max(((var_14 ^ (arr_8 [i_3 - 3] [i_2 - 2] [i_0] [i_1] [i_0 + 1]))), var_12)) | ((-(arr_3 [i_2 - 2] [i_3 + 1] [i_3 - 3])))));
                            var_21 = (((((((((arr_5 [i_0 + 1] [i_1] [i_2 + 3] [i_3 + 1]) & var_0))) ? (arr_2 [i_0] [i_0]) : -338668826))) || (arr_3 [i_0 + 1] [i_1] [i_2 + 2])));
                            arr_10 [i_0] [i_1] [i_0] = (((arr_2 [i_0] [i_1]) & var_15));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_22 = ((((arr_7 [i_0] [i_0 - 1]) >= (arr_2 [i_0] [i_0 + 2]))));
                    arr_13 [i_0] [i_4 + 4] [i_4 + 1] [i_4 - 1] = (min(((((arr_9 [i_0 - 2] [i_0]) >= (min(var_10, (arr_7 [i_0] [i_1])))))), -15126412135122512171));
                }
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_23 = ((var_11 ? (arr_22 [i_7 + 1] [i_6 - 2] [i_5 + 1] [i_1] [i_0 + 1]) : ((-12558999496605605462 ? var_12 : (var_7 >= var_15)))));
                                var_24 = ((var_3 ? ((((min((arr_2 [i_0] [i_6 - 1]), var_19))) ? (min(var_0, 18446744073709551598)) : (((338668825 ? var_19 : (arr_20 [i_0] [i_7 - 3] [i_5 + 1] [i_6 + 1] [i_7 + 1])))))) : (+-17644)));
                                var_25 &= 31501;
                                var_26 = ((-((((max(0, var_17))) ^ var_6))));
                            }
                        }
                    }
                    arr_23 [i_0 - 1] [i_0 - 1] [i_0] = ((+(((((arr_6 [i_0 + 1]) ? 338668825 : 1)) - (arr_11 [i_0] [i_1] [i_5 - 1])))));
                }
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_27 = (min(var_27, (var_6 | -56)));
                                arr_31 [i_0 + 1] [i_1] [i_1] [i_8 - 2] [i_0] [i_10] = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_28 = (((((~(arr_35 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2])))) ? (((arr_20 [i_0] [i_1] [i_8 - 1] [i_11] [i_12]) | (arr_16 [i_12]))) : (((~(arr_25 [i_0] [i_8 - 2] [i_8 - 2] [i_8 + 1]))))));
                                var_29 -= 27556;
                            }
                        }
                    }
                    var_30 = (max(((((arr_11 [i_0] [i_0 - 1] [i_1]) ? (arr_11 [i_0] [i_0 - 2] [i_1]) : (arr_26 [i_0])))), (((arr_11 [i_0] [i_0 - 1] [i_8 - 1]) ? var_9 : (arr_29 [i_0 + 1] [i_1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1])))));
                }
            }
        }
    }
    var_31 += ((var_8 >> (-1 + 25)));
    #pragma endscop
}
