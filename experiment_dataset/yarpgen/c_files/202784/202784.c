/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_1));
    var_11 *= var_4;
    var_12 = 10056635421786873552;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((-(arr_0 [i_0]))) + 2147483647)) >> var_8));
        var_13 = (((~65535) ? 65535 : ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? 18446744073709551615 : (((~(arr_0 [i_0]))))))));
        var_14 ^= ((~((((-(arr_0 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = max(((+(max((arr_3 [i_1 + 1]), (arr_3 [i_3 - 3]))))), (1 >> 1));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_16 = (min(var_16, 18713));
                        arr_11 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] = (arr_9 [i_4] [i_4 + 2] [i_3 - 1] [i_2] [i_2] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_1 - 3] [i_2] [i_3] [i_5] = (arr_3 [i_5 + 1]);
                        var_17 = ((((arr_9 [i_5 + 1] [i_5] [i_3] [i_2] [i_1 - 1] [i_1]) * (arr_9 [i_1] [i_1] [i_2] [i_2] [i_3 + 2] [i_5]))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_18 = (max(var_18, -1));
                        var_19 |= ((((((arr_5 [i_1] [i_3]) && (arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 4] [i_1])))) ? ((((((arr_10 [i_6] [i_3] [i_2] [i_2] [i_1]) << (arr_5 [i_1 - 3] [i_1])))) ? 46845 : (arr_6 [i_1] [i_1]))) : (((!(arr_12 [i_1 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_3] [i_3 + 2] [i_7] = 61234;
                        var_20 = 8;
                        arr_23 [i_1] [i_1] [i_1] [i_1] = (arr_18 [i_1 - 2] [i_3 - 2]);
                        arr_24 [i_1] [i_2] [i_3] [i_7] = -18446744073709551611;
                        arr_25 [i_1 - 1] [i_3] [i_7] = (arr_8 [i_1 - 3] [i_1 - 4] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 4] [i_1] |= (max(65528, (-32767 - 1)));
                                var_21 = (arr_27 [i_8] [i_3 - 2] [i_2] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (min(var_22, (arr_17 [i_1 - 4])));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_39 [i_1 - 2] = var_0;
                        var_23 ^= (arr_10 [i_10 + 2] [i_10 + 1] [i_10] [i_10] [i_10]);
                    }
                }
            }
        }
        var_24 = (max(var_24, 4294967288));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_25 = (min(var_25, (arr_28 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
        arr_42 [i_13] = (-32767 - 1);
    }
    #pragma endscop
}
