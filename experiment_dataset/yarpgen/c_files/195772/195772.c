/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((-(arr_0 [i_1]))) : var_9)))));
                arr_5 [i_1] = (i_1 % 2 == 0) ? ((((var_8 + 2147483647) << (((arr_3 [i_1]) - 2389710821520909219))))) : ((((var_8 + 2147483647) << (((((arr_3 [i_1]) - 2389710821520909219)) - 2824307109839607580)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 *= (((((18446744073709551615 ? 18446744073709551615 : (arr_3 [i_0])))) ? (((var_0 != (arr_9 [i_0] [i_2])))) : (var_3 != var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 *= ((!((((arr_3 [i_3]) ? (arr_3 [i_3]) : var_3)))));
                                var_14 = (max(var_14, ((((arr_11 [i_4] [i_4] [i_4] [i_3]) >= (((((0 ? (arr_6 [i_0] [i_1] [i_1] [i_4]) : var_10)) != ((((arr_3 [i_0]) != 0)))))))))));
                                var_15 = (((arr_14 [i_4 - 2] [i_1] [i_2] [i_3] [i_1]) ? (((((((arr_8 [i_1]) + -134217728))) >= (arr_13 [11] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 2])))) : ((((arr_4 [i_0] [i_1] [6]) >= (arr_1 [i_0] [i_2]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] |= ((((max(var_0, var_8))) < (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_16 += ((var_2 < ((583737310 ? ((1188347007 ? 0 : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))) : (~var_0)))));
                    arr_16 [i_1] [i_1] [i_2] = (((((arr_7 [i_2] [i_1]) << (18446744073709551615 - 18446744073709551614))) >> 12));
                    var_17 = (min(var_17, (((-((+(((arr_14 [i_0] [i_1] [i_2] [i_1] [i_2]) ? var_5 : var_10)))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_18 -= ((arr_7 [i_0] [i_0]) >= (arr_0 [i_0]));
                    arr_19 [i_1] [i_5] [i_1] [i_1] = (((arr_0 [i_1]) & (arr_0 [i_0])));
                    arr_20 [i_1] = ((arr_13 [i_0] [i_0] [14] [i_1] [i_5] [i_5]) ? (arr_3 [i_1]) : -120);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_19 = ((((((((arr_14 [i_6] [i_7] [i_7 + 1] [i_8] [i_8]) + 2147483647)) << (((((arr_9 [i_6 - 1] [i_7]) + 44)) - 17))))) ? (((((arr_9 [i_8] [i_7 + 1]) >= (arr_9 [i_6 - 1] [i_7 - 2]))))) : ((~(arr_13 [14] [i_6] [i_6 - 1] [i_7 - 2] [i_7 - 2] [12])))));
                    arr_29 [i_6] [8] = (((arr_0 [i_7 - 1]) << (((arr_28 [i_7 + 1] [i_6 - 1]) - 48))));
                }
            }
        }
    }
    var_20 = (((max((13 + -72), ((min(var_7, var_5)))))) ? var_8 : ((16424969592220528601 << (var_5 != 127))));
    #pragma endscop
}
