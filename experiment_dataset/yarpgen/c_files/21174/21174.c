/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 &= (min(((-1 ? -20 : 0)), (!4294967278)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = ((8 == (~31462)));
                            var_17 = ((!(((-2 ? var_7 : var_9)))));
                            var_18 = (-(arr_3 [i_0]));
                            var_19 = (min(((max(-4, -496959373))), (max((var_12 | 65280), var_6))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_0] = (var_2 && -var_4);
                    var_20 = ((3159434502 ? (arr_11 [i_4 - 3] [i_0] [i_4 - 3] [i_4]) : (arr_7 [i_1] [i_4] [i_4 + 1] [i_1])));
                    var_21 ^= (arr_1 [i_4 - 2]);
                    arr_15 [i_0] [i_0] [i_0] = ((!((((arr_10 [i_0]) ? -2 : var_2)))));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_4 - 2] [i_1] [i_4 - 2] = ((arr_2 [i_4 + 2]) >= (arr_3 [i_0]));
                        var_22 += arr_16 [i_0] [i_1] [6] [0];
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_23 = 275;
                        arr_21 [i_0] = (~var_12);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_24 [21] [i_0] [i_1] [i_7] [i_7] [i_4 - 3] = ((~(arr_22 [i_0] [i_4 - 4] [i_0])));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_27 [i_8] [4] [i_1] [i_1] [i_1] [4] [i_0] &= -5;
                            arr_28 [i_0] [i_8] [i_1] [i_7] [i_0] = ((((!(arr_8 [i_0] [i_1] [i_4] [i_0])))));
                        }
                        arr_29 [i_0] [i_1] [20] [i_0] = -2;
                        arr_30 [2] [i_1] [2] [i_1] [i_1] [i_1] &= (arr_8 [i_0] [i_0] [i_0] [0]);
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((0 ? 2147483640 : 32745));
                    }
                }
                var_24 = ((-(min(-1, (max(var_11, 3193986541))))));
                var_25 = (min(((min(-1, 0))), ((((arr_4 [1] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_2 [i_1]))))));
            }
        }
    }
    var_26 = ((var_5 ? ((var_2 & (~32))) : ((~((1 ? var_8 : var_10))))));
    var_27 = (max(var_27, var_0));
    #pragma endscop
}
