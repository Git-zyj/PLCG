/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_9;
    var_19 = var_0;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] = var_16;
                        arr_11 [i_0] [i_0] [i_3] = 2481250176120876497;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_20 = arr_7 [i_4] [i_4] [i_4] [i_0];
            var_21 = var_10;
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_22 = var_9;
                        arr_18 [i_6] = ((var_16 == ((((arr_0 [i_0 - 1]) == var_9)))));
                        arr_19 [i_6] [6] = 44654;
                    }
                }
            }
            var_23 |= (+(((var_14 / var_6) ? ((max(var_5, var_16))) : (!33))));
            var_24 = ((~(((arr_17 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_4] [i_4]) ^ (arr_17 [i_0 + 1] [i_4] [i_4] [i_4] [i_4] [0])))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_25 *= (((((~44675) + 2147483647)) << (((((((20857 ? 1 : 43))) ? ((var_11 ? 87 : 12)) : 20013)) - 87))));
            arr_22 [i_0 + 1] [i_0] = (arr_1 [i_0]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = ((((var_1 & (arr_12 [i_0 + 1]))) != (arr_7 [i_0] [i_0] [i_0] [i_8])));

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                arr_28 [i_8] = 1;
                arr_29 [i_8] [i_0] = (((!44680) < ((((arr_6 [i_9] [i_0 - 1] [i_0 + 1] [i_0]) <= ((var_15 ? -4484502207943193531 : var_7)))))));
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_27 = (~(~-1));
                var_28 = (min(var_28, ((((!var_6) % ((-767013543 ? 29575 : 1)))))));
                var_29 ^= (arr_26 [i_0] [i_8] [i_10] [i_0 + 1]);
            }
        }
    }
    var_30 = (((((var_1 != 91) != (min(var_8, 739286637)))) ? (((52 >= 20882) >> (var_13 + 29527))) : (((137438953471 > var_11) ? (var_17 * var_17) : (var_10 || 91)))));
    #pragma endscop
}
