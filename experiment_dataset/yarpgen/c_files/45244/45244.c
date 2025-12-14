/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((!4294967288) ? -27537 : 27555));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((min(var_0, (min(116, (arr_5 [i_0] [0] [4]))))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_15 = -var_7;
                        var_16 = (arr_3 [i_0] [i_1]);
                        var_17 = (((617818816 <= var_7) ? (((~(arr_4 [i_3] [i_2] [i_0])))) : -537732388));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_18 ^= (!-27536);

                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_19 -= (((~65535) > 81));
                            var_20 = (max(var_20, (arr_10 [i_2 - 1] [2])));
                            arr_15 [i_2] [i_1] [i_2] [i_4] [i_5] = ((!-88) << -4294967268);
                            var_21 = (min(var_21, var_3));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_18 [3] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = (arr_6 [i_2] [i_2 - 1] [i_2] [i_2]);
                            var_22 = 3799024676;
                            var_23 = var_2;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_7] [i_7] [i_7] [i_7] [i_2] = (1914706131 & 8873);
                            arr_22 [i_0] [i_2] = (27536 ? 4294967254 : var_7);
                            var_24 &= (~(arr_6 [i_1] [i_1] [i_0] [i_7]));
                        }
                        var_25 = (max(var_25, (arr_12 [i_2] [6] [9] [i_2 + 1] [i_2 - 1])));
                    }
                    var_26 = (max(var_26, (min(-5116, ((var_10 ? (arr_9 [i_2 - 1] [2] [i_2 - 1]) : var_5))))));
                }
            }
        }
    }
    var_27 = ((((max(-1012552840, 47))) ? (((~61) | 244)) : 0));
    #pragma endscop
}
