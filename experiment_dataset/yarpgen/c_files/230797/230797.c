/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (max((arr_0 [i_0 + 2]), ((0 ? ((max((arr_1 [i_0]), 1))) : var_10))));
        var_13 = 45;
        arr_3 [3] = (!0);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_14 = (max(var_14, 8));
        arr_8 [i_1] = 3;
        var_15 = ((!((((min((arr_7 [i_1]), (arr_7 [i_1]))) / 8388607)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_16 = (min(var_16, (arr_9 [i_1 - 1] [i_2] [i_4])));
                        arr_17 [i_1] [1] [i_3] [i_4] = var_3;
                        arr_18 [i_1] [i_2] [i_3] [i_1] [i_3] = (!var_10);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 |= 33912;
                                var_18 = 51;
                                var_19 = (((((((var_10 ? (arr_11 [i_3] [i_5] [2]) : 18446744073709551615)) ^ (0 <= 13341)))) ? ((-((max((arr_11 [i_2] [i_3] [i_6]), var_8))))) : (((arr_11 [1] [i_2] [1]) - (var_10 - var_3)))));
                                var_20 = 25;
                                var_21 = (max(var_7, (max((((var_7 * (arr_20 [i_1] [i_2] [i_5] [i_3] [i_1] [i_6])))), (arr_23 [i_1 - 1] [i_2] [i_3] [i_5] [i_6])))));
                            }
                        }
                    }
                    var_22 = ((((((((3337666008 ? 0 : (arr_13 [i_1] [i_3] [i_3])))) ? (arr_21 [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_3]) : (min(var_5, 8))))) ? 1 : ((((var_11 ? var_5 : var_6)) >> (((max((arr_19 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2]), -33)) - 4294967240))))));

                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_23 ^= (arr_12 [i_1 - 1]);
                        var_24 = ((~((-(~var_0)))));
                    }
                }
            }
        }
        var_25 = var_10;
    }
    #pragma endscop
}
