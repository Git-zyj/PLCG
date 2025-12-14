/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? (((var_2 || var_10) - 158)) : ((((var_5 / var_6) == ((max(-19370, 25480))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = 2706442328;
                                arr_12 [i_0] [i_3] [10] [i_3] [i_4] = -47;
                            }
                        }
                    }
                    arr_13 [i_0] [9] = ((((((-29231 + 2147483647) >> 26))) ? (44 == -9223372036854775806) : ((min((arr_10 [i_1 - 1] [i_1] [i_0]), var_16)))));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_21 *= 27;
                        var_22 = (((((var_1 ? var_0 : (arr_11 [i_0] [i_0] [i_0] [i_5] [i_0])))) ? 43 : (var_2 - var_15)));
                        var_23 = ((8098260378128296359 ^ 25461) / (((-3696417672754553171 ? var_17 : 52755))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        var_24 = (18446744073709551615 + 19389);
                        var_25 = ((((((arr_2 [i_2] [i_0]) ? 48 : 1))) ? (!2318974936) : 46));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            {
                var_26 += (((min((241 ^ -9223372036854775794), (2318974931 + 0))) / ((max((((0 << (((arr_20 [i_7]) - 266748615))))), (max((arr_25 [i_7]), var_16)))))));
                var_27 = ((((((min(-40, 12))) || ((min(var_3, (arr_25 [i_7])))))) ? ((max(((~(arr_23 [i_7] [i_8]))), (61 || var_18)))) : (max((min(var_2, -39)), (max((arr_25 [i_7]), (arr_22 [i_7])))))));
                var_28 *= (((((-(1 % var_12)))) ? (((!((min(var_7, var_10)))))) : var_11));
            }
        }
    }
    #pragma endscop
}
