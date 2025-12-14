/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_17);
    var_20 = 178;
    var_21 = (min(var_21, (((((((var_1 ^ var_1) ? (var_12 / -7163362053108344466) : var_13))) ? var_15 : var_16)))));
    var_22 = ((var_1 ? (var_18 > -1) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (max(16735101709758857722, ((max((arr_2 [i_0] [i_0] [i_1]), 34934)))))));
                var_24 *= var_8;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_25 ^= (((arr_10 [i_0] [i_1] [i_2] [i_1] [i_1]) ? (((arr_5 [i_1] [2] [i_4] [i_4]) & 1455066095)) : (((((var_1 + (arr_5 [i_1] [i_1] [8] [i_3]))) - 3)))));
                                var_26 = (arr_1 [i_0] [i_3]);
                                arr_11 [2] [i_1] [8] [4] [i_4 + 1] [i_4] [i_4] |= ((((min(var_14, (min(var_14, 18446744073709551615))))) ? var_9 : (1455066099 > var_12)));
                            }
                        }
                    }
                }
                var_27 = (min(((+((var_13 ? (arr_9 [i_1] [i_1] [i_1]) : var_2)))), ((~(arr_9 [i_1] [i_1] [i_1])))));
                arr_12 [3] = (((arr_2 [i_1] [8] [i_0]) ? ((((((217 ? 1169701501 : 11)) != var_6)))) : (min((arr_4 [i_0] [3] [i_1]), (arr_6 [i_0] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
