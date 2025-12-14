/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2147483620;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_15 = max((arr_1 [i_0]), var_5);
            var_16 = ((!((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = ((-((~(arr_6 [i_0] [i_0] [i_2])))));
            var_18 = (max(var_18, 1));

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (arr_14 [0] [i_3] [14] [14]);
                            var_20 = 6426967569654252497;
                        }
                    }
                }
                var_21 = ((!(((~(((arr_7 [i_0] [16]) ? var_8 : (arr_14 [i_0] [i_2] [i_2] [i_2]))))))));
                var_22 = (arr_13 [i_0]);
                var_23 *= (((262143 * 1) ? ((((!(arr_10 [i_3 + 1] [10]))))) : (max((!63), (~4294967273)))));
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    var_24 *= (((arr_7 [i_0] [21]) >= -69));
                    arr_23 [15] [i_0] [1] [i_0] [i_0] = (-(((arr_9 [i_6 - 1] [i_7 - 1] [i_6 - 1]) ^ (arr_9 [i_6 - 1] [i_7 - 1] [i_6 - 1]))));
                    arr_24 [i_0] [i_0] = ((-(0 * 127)));
                    var_25 = ((~(min(2147483605, 1))));
                    arr_25 [i_0] [17] [3] [i_7 - 1] [6] = -5;
                }
                var_26 = ((((max(-93, 15))) ^ (!1)));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_38 [12] [i_8] [i_9 - 1] [i_0] [i_11] = var_12;
                            var_27 ^= ((~(arr_10 [i_11] [i_11])));
                            var_28 = 11179;
                        }
                    }
                }
            }
            var_29 = ((!(arr_18 [17] [i_0] [i_8] [i_0] [i_8])));
            arr_39 [i_0] [4] [i_0] = (!var_10);
        }
        arr_40 [i_0] [i_0] = (arr_27 [i_0] [i_0]);
    }
    var_30 = (max(var_30, var_1));
    #pragma endscop
}
