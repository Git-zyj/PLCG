/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (((((((-576460752303423488 != var_2) > var_11)))) % (((arr_4 [i_1 + 1] [i_1]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : var_4))));
                    var_12 = ((-(var_2 || var_5)));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_13 ^= (226 + 576460752303423481);
                        var_14 = ((~62) || ((120 || (arr_2 [i_1 + 1]))));
                        arr_14 [i_0] = (((((arr_5 [i_0] [i_0]) - 9423848450819888419))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] = (((~255) / (var_10 & 3055642788031352183)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_15 = 9423848450819888419;
                        var_16 = (min(var_16, 68685922304));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (((var_5 / 18446744073709551611) * ((9423848450819888419 * (arr_18 [i_0] [i_1] [i_4] [i_1 + 1])))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] = ((-576460752303423466 ? (arr_6 [i_1 + 2] [i_5]) : var_9));
                        arr_25 [i_1] [i_2] = ((-(!-576460752303423466)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_31 [i_6] = (((65011712 ? -22061 : -22060)));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((93 != ((-(~3996192550)))));
                            }
                        }
                    }
                    var_17 = (((728970085956987475 * -1889003460) && 134201344));
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = ((((var_1 ? var_6 : var_10))));
    var_20 = var_11;
    #pragma endscop
}
