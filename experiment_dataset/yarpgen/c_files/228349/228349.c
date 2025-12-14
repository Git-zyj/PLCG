/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 255));
    var_17 = var_4;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 &= (((0 ^ (min(var_14, var_7)))));
        arr_2 [i_0] = (arr_1 [3] [i_0]);
        var_19 = (max(var_19, (18446744073709551613 && 23)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 &= ((8 % (min((min(18446744073709551615, 18446744073709551577)), 9))));
        var_21 = ((((arr_0 [5] [i_1 + 2]) ? -1 : var_7)));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_22 = ((-((4294967295 ? (arr_7 [i_1 + 2] [i_1 + 1]) : -38298354))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_23 = (((((var_7 * (min(18446744073709551593, -38298348))))) && ((max(var_8, -var_0)))));
                            var_24 = (max(var_24, ((min(((-22 & (!18446744073709551615))), (!-1878789262))))));
                            var_25 += (((2 >> (((min(65535, 18446744073709551615) - 65489))))));
                            arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1] = (((min(((var_9 ? (arr_6 [i_1] [10] [i_1 + 2]) : (arr_3 [i_1] [i_2 - 1]))), (!-51)))) ? 18446744073709551608 : 0);
                            var_26 = 1679;
                        }
                    }
                }
            }
            var_27 = ((~(arr_17 [i_1] [i_1 + 2] [i_1 + 1])));
            arr_20 [i_1] [i_2] = (-32767 - 1);
            var_28 &= ((var_5 <= ((30400 ? (6 / 32764) : var_1))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_1] [i_1] [i_1] = var_12;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            var_29 += (!var_1);
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_12 [i_1 + 2] [i_1] [3] [5] [i_1]);
                            var_30 = ((~((var_5 << (var_10 - 3287236703)))));
                        }
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            arr_36 [i_1] [i_6] [17] [i_6] [i_6] = var_15;
                            var_31 *= (4294967294 > 0);
                            arr_37 [i_1] = (1 != 45);
                        }
                        arr_38 [i_1] [i_6] [i_6] [1] [i_6] = (((arr_18 [i_1 + 2] [i_6 + 1] [i_7 + 2]) ? 1 : (arr_18 [i_1 + 1] [i_6 + 2] [i_7 - 1])));
                    }
                }
            }
            arr_39 [16] &= ((((var_9 ? 18446744073709551607 : 1)) << (((arr_29 [i_6 - 1] [i_6 + 2] [i_6 + 2]) - 142303341))));
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            var_32 = 30400;
            var_33 &= (!var_12);
            var_34 = (30404 * -32756);
        }
        arr_43 [10] &= (((min(10, (arr_4 [i_1 - 1])))) ? (((min((arr_3 [12] [i_1 - 1]), (arr_3 [0] [i_1 - 1]))))) : (~18446744073709551613));
    }
    #pragma endscop
}
