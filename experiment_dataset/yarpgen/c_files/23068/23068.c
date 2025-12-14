/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = ((((0 == (arr_14 [i_0] [i_0] [16] [i_3] [i_3 + 3] [i_4 + 1]))) ? ((((1 == -13239) < -984753190))) : 57551));
                                var_11 = (min(var_11, (0 - -103)));
                                arr_15 [i_0] [i_3] [12] [i_0] [i_0] &= 93;
                                var_12 = (max(var_12, 106));
                                var_13 = ((579137247 - (((~(arr_9 [i_3 + 2] [i_3] [i_3 + 3] [i_3 - 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_24 [9] [i_1] [1] [i_6] [i_6] = 4844467558318125776;
                                arr_25 [13] = ((61 <= ((((arr_22 [i_6] [i_1] [5]) < (arr_22 [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_14 &= ((((((arr_7 [4]) - (arr_7 [i_10])))) ? ((13602276515391425839 ? 13238 : -106)) : ((((arr_7 [i_10 - 2]) <= 8195831544920706625)))));
                            arr_35 [i_8] [i_8] [i_9] [i_11] [16] [8] &= (-86 ? ((15676341282966448713 ^ (arr_3 [0] [0] [i_8]))) : 94779038);
                            var_15 ^= (4844467558318125776 % 15805);
                            arr_36 [i_11] [i_10] [i_9] [i_8] [i_11] = ((17859666021975546462 ? (max(62, (arr_16 [9] [i_9] [1] [i_10 - 2]))) : 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_16 |= (1544341853 + -107);
                            var_17 = (1 ^ -5824);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((579137247 + ((((((arr_11 [i_9] [i_14]) <= 13258))) % (arr_9 [i_8] [i_9] [3] [i_15]))))))));
                            arr_48 [i_8] [i_14] = ((-((((~572897864) == 1195699240)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
