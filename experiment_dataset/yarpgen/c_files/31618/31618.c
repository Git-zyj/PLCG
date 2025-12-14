/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(var_3, (min(-1444663668323026216, ((((arr_3 [i_0] [i_1] [19]) > var_8)))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = -49;
                    var_17 = (arr_2 [i_0 + 2]);
                }
            }
        }
    }
    var_18 = (max((((-(205 - 234)))), var_2));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                var_19 ^= ((!(((((min(-11446, 230))) / (((arr_1 [i_3]) ? 39574 : (arr_11 [i_3]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_3] [i_3] = (arr_10 [i_3] [2] [i_5]);

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_20 = ((((arr_19 [i_3] [12] [i_3]) / 2961291350241703591)));
                                arr_24 [6] [i_4] [i_7] &= ((((((((!(arr_5 [i_5])))) * ((19 >> (49 - 19)))))) ? (min((~var_6), (((-9 ? var_13 : var_14))))) : (((32767 ? -57 : ((max(65535, 207))))))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [1] = (min(((-((max((arr_19 [i_4 + 2] [i_5] [i_3]), var_1))))), (8191 * 11)));
                            }
                            for (int i_8 = 4; i_8 < 12;i_8 += 1)
                            {
                                arr_28 [i_3] [i_3] [i_5] [i_5] [i_8 + 1] [i_5] |= ((~(arr_5 [i_5])));
                                arr_29 [i_8] [i_3] [i_3] [i_3] [i_3] [9] = var_11;
                                var_21 = (min((~18446744073709551615), ((((arr_8 [i_3]) << ((var_5 & (arr_22 [i_3] [i_3] [1] [i_6] [9] [i_5] [i_4]))))))));
                            }
                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                var_22 = (arr_15 [i_3] [i_4] [i_9] [i_3]);
                                arr_34 [i_3] [i_3] [i_3] = 120;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
