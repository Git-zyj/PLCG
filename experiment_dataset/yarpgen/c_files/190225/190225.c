/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-7032752358012651576 != var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_1 [i_0] [i_1])));
                var_17 = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) ? var_3 : (arr_13 [i_0] [i_1] [i_1])))) ? (((var_9 != (arr_2 [i_2])))) : var_0));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 226;
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_18 = (arr_0 [i_0] [i_0]);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((max(1, (arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5]))) > (((6696778400051069933 ? (arr_0 [i_5] [i_3]) : (arr_0 [i_0] [i_0]))))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((var_0 >= ((var_10 ? var_2 : (arr_10 [i_5] [i_3] [i_2] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_19 = (arr_16 [i_0] [i_1] [i_2]);
                                var_20 ^= (((arr_18 [i_6] [i_3] [i_2] [i_1] [i_0]) >> (((arr_18 [i_0] [i_1] [i_2] [i_3] [i_1]) - 17334575099310842045))));
                                var_21 &= (arr_3 [i_2]);
                                var_22 ^= (((arr_18 [i_6] [i_3] [i_2] [i_1] [i_0]) + (((8630428857238964774 - (arr_7 [i_1]))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_25 [i_0] [i_0] [i_2] [i_3] [i_3] [i_7] = (((arr_22 [i_0] [i_1] [i_7]) ^ var_13));
                                var_23 = ((((!(arr_18 [i_0] [i_0] [i_2] [i_1] [i_7]))) ? 1480282916 : (var_2 & 20)));
                                arr_26 [1] [i_3] [1] [1] [i_0] = (((((1 ? -1626352061 : 1))) ? (((arr_8 [i_2] [i_3] [i_7]) ? 7371846291659072256 : var_13)) : 1048575));
                                var_24 = (min(var_24, ((((arr_2 [i_0]) <= (arr_11 [i_0] [i_1] [i_2] [14] [i_7]))))));
                            }
                            arr_27 [i_0] [i_1] [i_1] [i_3] = (arr_13 [i_0] [i_0] [i_2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
