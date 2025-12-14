/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] = (arr_1 [i_0 + 1]);
            var_20 |= (((arr_5 [1]) && (arr_2 [i_1 + 1] [i_1 + 2])));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_21 = (min(var_21, ((((arr_4 [i_2 + 1] [i_2 - 2]) ? (arr_8 [i_2] [i_2] [i_2 - 2]) : (arr_8 [i_2] [i_2] [i_2 + 2]))))));
            var_22 = ((+(((arr_7 [i_2] [i_2]) ? var_17 : (arr_4 [i_2] [i_0 + 1])))));
            arr_10 [i_0] [i_0] [i_0] = (((arr_4 [i_0 + 1] [i_2 + 2]) ? ((-(arr_2 [i_0] [i_0]))) : (((var_12 ? (arr_5 [i_0]) : (arr_8 [i_0] [i_0] [i_0]))))));
            var_23 = ((var_2 ? var_2 : (arr_0 [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_24 |= ((var_0 ? ((var_14 ? var_19 : (arr_4 [i_0] [i_0]))) : (((var_14 ? var_13 : (arr_4 [i_4] [i_5]))))));
                            var_25 = (((arr_2 [i_5] [i_4 + 1]) ? (((var_11 ? var_5 : (arr_8 [i_0] [i_0] [i_0])))) : (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_4] [i_3] [i_0]) : (arr_3 [i_0])))));
                            var_26 = (((arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_5]) ? ((((arr_1 [i_0]) < (arr_0 [i_3])))) : (((arr_4 [i_5] [i_6 - 1]) ? (arr_13 [15] [i_3] [i_0 + 1]) : (arr_7 [i_5] [i_0])))));
                            arr_20 [i_3] |= (arr_3 [i_3]);
                            var_27 *= ((~(~var_14)));
                        }
                        var_28 = (arr_12 [i_0] [i_3] [i_0]);
                        var_29 ^= (arr_13 [i_0] [4] [i_4 + 1]);
                        arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = ((-(arr_8 [i_0] [i_0] [i_0])));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_26 [i_0] [i_3] [i_4] [i_4] [i_4] [i_5] [i_0] = (~var_17);
                            var_30 = (((arr_8 [i_0 - 1] [i_0 + 1] [i_4 + 1]) ? (arr_9 [i_0] [i_3]) : ((var_10 ? (arr_3 [i_0]) : (arr_24 [i_0] [i_3] [i_0] [i_7] [i_0])))));
                            var_31 = (arr_15 [i_0] [i_0] [i_0 - 1] [i_4 + 1]);
                            var_32 = (((arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) ? (arr_18 [i_0] [i_0] [i_4 - 1] [i_5] [i_0 + 1] [i_0 - 1] [i_4]) : ((var_10 ? var_2 : var_5))));
                            arr_27 [i_0] [i_3] [i_4 - 1] [i_5] [i_7] = ((+(((arr_4 [i_0] [i_0]) ? (arr_1 [i_5]) : var_15))));
                        }
                    }
                }
            }
        }
        arr_28 [i_0] = ((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_7 [i_0] [i_0]) : var_6))) && (((var_0 ? (arr_24 [i_0] [19] [19] [i_0 + 1] [i_0 + 1]) : (arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))))));
        arr_29 [i_0] = (arr_7 [10] [10]);
    }
    var_33 ^= var_13;
    var_34 = (max(var_34, (((-var_13 ? -var_11 : (max(var_7, (max(var_10, var_19)))))))));
    #pragma endscop
}
