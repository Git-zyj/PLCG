/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 *= (min(var_4, ((((var_3 > (arr_5 [15] [21] [i_2])))))));
                    arr_10 [i_0] [i_1] = ((1 ? (arr_9 [15] [21] [i_1] [i_2]) : (arr_1 [i_1 - 3])));
                }
            }
        }
    }
    var_12 = var_1;
    var_13 = (max(61, 7));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_14 = (min((((arr_11 [i_4]) ? var_9 : 0)), ((max((((var_6 && (arr_3 [i_3] [20] [1])))), var_5)))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_15 = ((~((2541800726397483223 ? 47871 : 2541800726397483214))));
                    arr_17 [i_3] [i_4] [i_5] = -var_8;
                }

                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_16 ^= max((((((1 << (var_10 + 1813421025)))) ? (arr_9 [i_6] [i_6 - 1] [i_6 + 1] [i_6]) : (((var_5 ? (arr_5 [i_6] [i_4] [i_3]) : (arr_4 [i_3] [i_4] [i_6])))))), var_8);
                    arr_20 [i_3] [i_4] = ((-80 ? ((-4 ? 1 : var_8)) : -1));
                }
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_17 = (max(var_6, (137438953471 && 37340)));
                                var_18 = (min(var_18, (((((((-9223372036854775807 - 1) ? var_9 : 1))) ? ((12 ? -2658007125040715090 : 3172175463050630003)) : ((((-32755 + 2147483647) >> (1073741823 - 1073741809)))))))));
                                arr_28 [i_3] [i_3] [i_3] [i_3] [i_7] |= (arr_7 [i_3] [i_4] [19]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_33 [i_3] [i_4] [i_7] [i_10] [i_3] [8] [i_3] = (((arr_32 [1] [i_7 + 2] [i_7 - 2] [i_3] [i_7]) ? (((arr_32 [i_7] [i_7 - 2] [i_7] [i_3] [i_7]) ? (arr_32 [i_7] [i_7 + 1] [i_7] [i_3] [i_7]) : (arr_32 [i_7] [i_7 - 1] [i_7] [i_3] [i_7 + 2]))) : ((-(arr_32 [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_3] [i_7])))));
                                arr_34 [i_3] [i_4] [i_3] [i_10] [i_11] = (max(var_7, (arr_16 [i_11] [i_7 + 2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
