/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -4503599627370495;
        var_13 = (min(var_13, ((((4294967295 != 13) <= ((((!0) || (arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [17] [i_2] [i_2 + 1] [i_2] = ((((max(var_1, ((26080 ? var_11 : -9717))))) != (max(26077, 4503599627370494))));
                    var_14 = (min(var_14, ((min((max((((!(arr_1 [i_0])))), 16106127360)), (36 > 0))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_15 = ((((13 ? ((1152921504606846720 ? 5 : 12)) : ((1152921504606846720 ? var_2 : 65535)))) >> (((min(((~(arr_5 [i_0]))), var_2)) + 4))));
                    arr_13 [12] [12] [i_3] [i_4] = -0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 = (118 % 8191);
                                var_17 = (arr_17 [i_6 - 3] [i_6] [23] [i_6] [i_6 - 3]);
                                arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] [i_6] = ((-(min((arr_12 [i_3 - 1] [i_6 - 3] [i_6 + 1]), (var_3 % 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_18 = 9223372036854775807;
                                arr_26 [i_3] = (arr_25 [i_0] [1] [i_4] [i_7] [i_8]);
                                var_19 ^= (((((-(arr_10 [i_3 - 1] [i_8 - 1] [i_8])))) != (1 & -1)));
                                arr_27 [i_4] [i_7] &= ((((37111 ? 18446744073709551615 : 1)) * (((var_1 << (((arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_8 - 1]) - 30807467688471317)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_0] = min((arr_11 [i_0] [i_0] [i_0] [i_0]), (20 ^ 28425));
    }
    var_20 = var_6;
    #pragma endscop
}
