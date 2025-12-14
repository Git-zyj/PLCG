/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_13;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, var_7));
                        var_17 -= (((0 || -8083) ? 4294967295 : (((arr_7 [i_0 + 2] [i_0] [i_0]) ? (arr_2 [i_3 + 1]) : (arr_2 [i_3 - 1])))));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_11 [i_0] [22] [22] [i_0] |= (!((((!30) ? 4294967295 : 1))));
                            arr_12 [1] [i_1] [i_2] [i_0] [i_2] = ((!(((65535 ? 3129856616 : var_2)))));
                            var_18 = (((((var_9 ? 47217 : 25))) * 1165110680));
                            arr_13 [12] [i_0] [i_0] [i_0] [i_0] = ((~(arr_3 [i_0 - 2] [i_0 - 2] [i_2 - 2])));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_19 = (arr_3 [i_0] [i_1] [i_0]);
                            var_20 = (var_6 * 7992);
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_2 - 3] [19] = ((var_12 ? ((6942267404654277228 ? 1 : 18446744073709551615)) : var_5));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_21 *= 0;
                        arr_27 [0] [i_7] [i_0] [i_6] [i_0] = -var_8;
                        arr_28 [1] [i_0] [i_0] = min(-123, 619473132);
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_31 [1] [i_9] [i_0] = (arr_30 [i_0 + 1] [i_0] [i_9]);
            var_22 = 255;
            var_23 = (min(var_23, 2147483627));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_24 = -127;
            arr_36 [i_0] [i_0] [i_0] = (min((arr_1 [i_0]), ((((0 * 141) >= 23)))));
            arr_37 [i_0] [i_0] [i_10] = var_14;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (arr_0 [i_0 + 2] [i_11])));
            var_26 = (min(var_26, -24));
            arr_40 [i_0] = 58202;
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_45 [12] [i_12] |= ((0 << (2147483647 - 2147483634)));
        arr_46 [i_12] [i_12] = arr_0 [i_12] [i_12];
        var_27 -= ((((((arr_19 [10]) ? (arr_4 [10]) : ((var_3 ? (arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : 918214227))))) ? (((var_7 + ((var_4 ? var_3 : 1))))) : (17788 + var_11)));
        arr_47 [i_12] = ((((~(27 + 32767))) | -35));
    }
    #pragma endscop
}
