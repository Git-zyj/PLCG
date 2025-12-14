/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_2 [0])));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_20 = ((((-(((arr_5 [1] [i_0] [i_2] [i_2]) ? 9 : 3699)))) - ((var_3 ? -986518430 : var_12))));
                    arr_9 [i_0] [i_2] = (((((var_4 ? var_17 : var_6))) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_0 [i_0])));
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_21 = arr_3 [i_0 + 2] [i_3 - 1];
                    arr_13 [i_0] [i_0] = ((121 ? 16924479015202983318 : 8940448895231119694));
                    var_22 = ((12288 ? 3730567807034669116 : 227));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    var_23 -= (((((3730567807034669116 >> (((arr_8 [i_0] [8] [i_1 + 1] [i_4]) + 7011750385937425748))))) ? (arr_16 [8] [i_0 - 2] [i_1 - 2] [i_4 + 3]) : var_14));
                    arr_17 [i_0] [i_1] [i_0] = ((+(((arr_3 [i_4] [i_0]) ? (-2147483647 - 1) : var_2))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_24 |= (((arr_22 [i_5 + 2]) ? (arr_20 [i_1 + 1] [i_1 - 2] [i_1 - 1]) : (arr_21 [i_4 + 1] [i_4 + 1] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_4 + 3])));
                                arr_23 [i_0] [i_0] [i_4 + 3] [i_4 + 3] [i_0] = var_17;
                            }
                        }
                    }
                }
                var_25 |= -108;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_28 [i_7] [i_0] [i_1 - 1] [i_0] [0] [i_0 + 3] = (0 <= 108);
                            var_26 = ((((min(70368744046592, 31))) ? ((max(1048575, 2768493514))) : var_11));
                            arr_29 [9] [9] [i_7] [i_0] = (((arr_6 [i_1] [i_7] [i_1]) ? var_7 : ((-79 + (((arr_11 [i_1] [i_0]) >> (((arr_6 [i_0] [i_0] [9]) - 47322))))))));
                            arr_30 [1] [i_1 + 1] [i_1] [i_8] [i_0] [i_1] = (arr_11 [i_0] [i_0]);
                            arr_31 [i_0] = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]);
                        }
                    }
                }
                var_27 += (((((var_10 & (arr_24 [8] [i_1 - 2])))) || (arr_7 [i_0] [i_1 + 1])));
            }
        }
    }
    var_28 = ((6455649540101048557 ? (-23 / -3700) : (((-2147483647 - 1) & 9223372036854775807))));
    #pragma endscop
}
