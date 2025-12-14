/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((-(+-18446744073709551615)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = (((arr_11 [i_1] [i_1] [i_2]) ? (arr_2 [i_0]) : 0));

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_13 = (((arr_14 [i_4] [0] [0] [i_3] [i_4] [i_4 - 1]) ? 491520 : var_0));
                            var_14 |= (arr_10 [i_0] [i_1] [i_4 - 1] [i_3] [i_2] [10]);
                            var_15 = (((arr_1 [i_0] [i_0]) ? (arr_6 [i_3] [i_2] [i_1]) : (arr_13 [i_3] [i_1] [i_4 - 1] [11] [i_4] [i_0])));
                        }

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_16 = (max(var_16, ((((~var_6) ? (arr_15 [i_5 + 2] [i_2]) : -32321)))));
                            var_17 = ((-(((arr_1 [0] [0]) ? var_1 : var_4))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_18 *= (((arr_15 [i_0] [i_3]) ? (arr_0 [i_6]) : (arr_0 [i_6])));
                            arr_23 [i_3] = ((1099511627775 ? (arr_1 [i_3] [i_3]) : (arr_1 [i_0] [i_1])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_19 ^= (max((((var_2 || (~var_5)))), (~18446742974197923848)));
                        var_20 &= ((((min((~40), (arr_21 [i_0] [i_1] [1] [9])))) % (((((~(arr_22 [i_0] [10] [8] [i_1])))) ? (min(var_4, var_5)) : var_6))));
                        var_21 = (max(-127, (min(((var_5 % (arr_8 [i_0] [i_0] [11]))), (arr_22 [i_7] [i_2] [i_2] [i_1])))));
                    }
                    var_22 = min(((max(((min(var_5, 16))), (arr_16 [i_2] [i_1])))), (((((491496 ? 23621 : (arr_20 [i_0] [i_0] [i_0] [18] [i_2] [18])))) ? var_3 : ((0 ? 7 : (arr_1 [i_0] [i_1]))))));
                    var_23 = (min(var_23, ((min((min((min((arr_14 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]), (arr_16 [i_1] [10]))), ((((arr_2 [i_2]) ? (arr_7 [2] [2] [2]) : (arr_0 [i_0])))))), (((var_0 ? (arr_10 [i_2] [18] [18] [i_1] [5] [i_0]) : (!18446742974197923858)))))))));
                }
            }
        }
    }
    #pragma endscop
}
