/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((var_1 < var_10) ? var_7 : (min(var_4, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [i_2] [i_2] [i_1] [i_1] &= ((~(((160 < -6122234019672192636) ? ((var_2 - (arr_7 [i_0] [i_1] [i_1] [i_3]))) : (((~(arr_9 [i_0] [i_0] [i_0]))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_0] = (((((~(arr_4 [i_2] [i_3] [i_2])))) ? ((var_4 / (((arr_4 [i_2] [i_1] [i_1]) ? -6122234019672192636 : 6122234019672192646)))) : -9223372036854775786));
                                arr_16 [i_1] [i_2] [i_2] [i_1] [i_2] [i_0] = ((~((((arr_4 [i_2] [i_2 - 2] [i_2]) != var_4)))));
                                var_13 &= (((max((~var_10), (arr_9 [i_1] [i_1] [i_0]))) != (((((~0) + 2147483647)) >> (((arr_7 [i_0] [i_0] [i_1] [i_4]) - 239))))));
                            }
                            for (int i_5 = 2; i_5 < 9;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] [i_2] [i_3] = ((var_10 ? (arr_4 [i_2] [i_2 - 2] [i_2]) : 255));
                                arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] = var_6;
                                var_14 = ((~((~(var_1 || -3)))));
                            }
                        }
                    }
                }
                var_15 = (~14);

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_16 = var_8;
                    var_17 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_23 [i_6] [i_1] [i_0] = ((((((arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1]) / (arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1])))) | ((var_4 ? (arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_6]) : 6122234019672192635))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {

                            for (int i_9 = 2; i_9 < 9;i_9 += 1)
                            {
                                var_18 = (min(var_18, (~var_1)));
                                var_19 = (max(var_19, ((max(((((arr_13 [i_1] [i_1] [i_9 - 2] [i_9] [i_9]) || (arr_13 [i_8] [i_9] [i_9 - 2] [i_9] [i_8])))), ((3118809744 ? 0 : ((-(arr_24 [i_0] [i_1] [i_9]))))))))));
                            }
                            for (int i_10 = 2; i_10 < 8;i_10 += 1)
                            {
                                var_20 -= 65535;
                                var_21 = ((((arr_2 [i_0] [i_1] [i_10]) ? (arr_28 [i_10] [i_10] [i_7] [i_10 + 2] [i_7] [i_1 - 4]) : (arr_22 [i_0] [i_1] [i_7] [i_10 + 2]))));
                                arr_33 [i_7] = (-127 - 1);
                            }
                            var_22 *= var_2;
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_9));
    var_24 = ((4294967287 == ((var_4 ? (((var_5 ? var_6 : var_8))) : 3118809744))));
    #pragma endscop
}
