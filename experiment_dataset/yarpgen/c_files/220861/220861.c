/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(2147483647, var_6))) > (((23204 % 1) ? ((min(var_4, 1))) : (1 + 42332)))));
    var_11 += ((!((((4902 ^ -1) * (!var_8))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (var_9 * -290431979);
        var_13 += ((1 != (arr_1 [i_0])));
        var_14 = var_2;
        arr_4 [i_0] [i_0] = (~(arr_3 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = (~var_4);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2 - 2] [13] = 1;

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_1] [i_2 + 1] [i_2] [i_4] [i_4 - 1] = (((((arr_8 [i_1] [i_1]) / var_0)) % ((1 + (arr_8 [i_1] [i_1])))));
                        var_15 = (min(var_15, (1 + 1)));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_16 ^= (var_2 <= 1);
                            arr_21 [21] [i_4] [i_4] [i_4] [1] [i_1] = (arr_9 [i_1]);
                            var_17 = arr_6 [i_1] [i_2];
                            var_18 = (arr_9 [11]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, (arr_10 [i_6] [i_4] [12] [i_1])));
                            arr_24 [i_1] [16] [i_1] [1] [i_4] = (i_4 % 2 == zero) ? ((((((arr_18 [i_1] [1] [i_4] [i_1] [i_3] [i_3]) + 2147483647)) << (((((arr_18 [i_1] [i_2] [i_4] [i_3] [i_4] [i_6]) ? var_7 : 1)) - 3615))))) : ((((((((arr_18 [i_1] [1] [i_4] [i_1] [i_3] [i_3]) - 2147483647)) + 2147483647)) << (((((arr_18 [i_1] [i_2] [i_4] [i_3] [i_4] [i_6]) ? var_7 : 1)) - 3615)))));
                            var_20 = (min(var_20, (((16383 != (arr_20 [i_1] [i_2 + 3] [i_3] [i_3] [i_4] [i_4 - 1] [i_4 - 1]))))));
                            arr_25 [1] [i_4] [i_3] [6] [i_6] = (~4095);
                        }

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_21 = arr_26 [i_7] [20] [i_3] [1] [i_1];
                            var_22 += ((((-20363 ? 40581 : 19331))) ? ((-882391511 ? var_4 : var_4)) : ((var_3 ? (arr_26 [i_1] [1] [i_3] [i_4] [13]) : var_9)));
                            var_23 &= (((~65534) | (arr_23 [i_1] [i_2] [i_3] [i_4 - 1])));
                            var_24 = (min(var_24, (var_6 ^ 1)));
                        }
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            var_25 = ((32767 * (1 - 23203)));
                            arr_32 [i_4] [17] [i_4] [i_3] [i_2] [i_2] [i_4] = ((-var_5 >> (!1524152448)));
                        }
                    }
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        arr_37 [i_1] [i_1] [i_1] [i_9] [i_1] [i_1] = (42327 ? (arr_15 [i_9 - 1] [1] [i_2 - 2]) : -1317667521);
                        arr_38 [i_9] = 1281672283;
                        var_26 = (arr_29 [i_1] [1] [i_9] [i_3] [i_3] [i_9 - 1] [i_9 - 1]);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_27 *= var_4;
        arr_42 [i_10] = var_4;
    }
    #pragma endscop
}
