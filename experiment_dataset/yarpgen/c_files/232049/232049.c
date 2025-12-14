/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 *= (max((min(6319379614807459779, ((max((arr_3 [i_0] [i_1] [i_0]), 2047))))), ((max(29, (var_7 || 6319379614807459769))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 &= var_0;
                    arr_6 [i_0] [i_0] [12] [12] = ((var_1 ? (((var_10 && (((96 ? 6319379614807459774 : 35344)))))) : 29740));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((41921 ? 4294965269 : 0)))));
                                arr_12 [i_0] = ((((min((arr_11 [i_0]), (arr_0 [i_4 - 2])))) ? ((~(min((arr_0 [i_3]), (arr_4 [i_3] [i_2] [i_2]))))) : ((min((arr_9 [i_0] [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    arr_13 [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = min(18446744073709551615, (((35335 ? -1464736740 : 121864252))));
                                arr_20 [i_0] [i_1] [i_0] [i_5 + 2] [i_6] = ((var_13 || ((max((arr_19 [i_0]), (arr_18 [i_2] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 - 2]))))));
                                var_21 = (((((((((arr_11 [i_0]) & 29724))) ? (min(30192, 4160544754)) : (((~(arr_10 [i_0] [i_1] [i_2] [i_5] [i_5 - 1]))))))) || (((var_11 ? (min((arr_9 [i_0] [i_2] [i_2]), 4294965263)) : var_1)))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] = (max((max(-5305183402769920364, (arr_18 [i_0] [i_0] [i_7] [i_1] [i_1]))), (arr_8 [i_0] [i_1] [i_0] [i_1] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_22 = 8146531805249692878;
                                var_23 = (min(var_23, ((((arr_7 [i_0] [i_1] [i_8]) ? (max((arr_14 [i_8] [i_9 + 1]), ((-76 ? (arr_16 [i_1] [i_1]) : (arr_19 [i_8]))))) : (arr_21 [i_0] [9] [i_7]))))));
                                arr_30 [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_7] [i_8] [i_9 - 1]);
                                arr_31 [i_0] [9] [i_7] [i_7] = 2924466027;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_35 [i_0] [i_1] [i_10] [i_1] = ((185 ? 2924466026 : 255));
                    var_24 = (min((-9223372036854775807 - 1), (-9223372036854775807 - 1)));
                }
                arr_36 [i_0] [i_1] [i_1] = (((arr_34 [i_0] [i_0] [i_0] [i_0]) % -1028348102828588076));
            }
        }
    }
    var_25 |= -11;
    #pragma endscop
}
