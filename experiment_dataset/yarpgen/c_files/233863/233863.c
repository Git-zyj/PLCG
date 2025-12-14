/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((15 ? 65520 : 15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(((((~var_10) + 2147483647)) << (4095 - 4095)))));
                arr_5 [i_1] = (max((~7219), (((arr_3 [i_0]) ? 0 : (((arr_1 [i_1 - 1] [i_0]) ? (arr_2 [i_1] [i_1]) : 1))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max((((((arr_6 [i_1] [8] [i_3] [i_4]) == 61219)) ? (43939 & var_0) : ((215 ? (arr_8 [10]) : (arr_1 [i_1] [i_2]))))), (((((min((arr_8 [20]), 65521))) && ((((arr_2 [1] [1]) / var_7)))))))))));
                                var_19 = 0;
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = (arr_8 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_20 &= (!65521);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_21 *= (((((((arr_25 [i_5] [i_6] [i_6] [i_8] [i_9] [i_9] [i_8]) ? 127 : 441371913)))) ? -24106 : (((8929 == (var_3 << 1))))));
                                arr_27 [i_9] [i_8] [i_9] [i_8] [i_9] [i_6] [i_5] = ((4294967295 << (((var_4 - 18446744073709551615) - 118))));
                                arr_28 [i_9] [i_9] = (((arr_7 [i_9] [i_6]) ? ((((1 <= (arr_7 [i_9] [i_5]))))) : (min((arr_17 [i_6]), (arr_17 [i_5])))));
                                var_22 = (((((arr_2 [i_9] [i_9]) ? (arr_2 [i_9] [i_6]) : (arr_2 [i_9] [i_9])))) ? (((((((arr_15 [i_5]) && 65521))) >> ((((7367 ? 251 : (arr_0 [i_5]))) - 241))))) : (2084783354 + var_13));
                            }
                        }
                    }
                    var_23 = (~((((arr_26 [i_5] [i_7] [i_7] [i_5] [i_5] [i_5] [i_5]) <= var_1))));
                    var_24 |= ((((((((arr_25 [i_6] [i_6] [i_7] [i_5] [i_5] [i_6] [i_6]) % 4294967295))) ? ((var_6 ? var_16 : var_8)) : -24106)) == ((min((max(var_7, var_16)), (arr_6 [i_5] [4] [i_6] [i_7]))))));
                }
            }
        }
    }
    var_25 = 127;
    #pragma endscop
}
