/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(~493122251)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 |= ((max((arr_8 [i_3] [i_2] [i_1] [i_0 - 1]), 6618665451310837011)));
                            var_12 ^= ((var_4 ? (((max(-6618665451310837012, var_6)) ^ ((min((arr_2 [i_2]), var_3))))) : (var_7 ^ 77)));
                            var_13 = (arr_4 [i_0 + 1] [i_0 + 1]);
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [i_0] [i_6] = (arr_13 [i_0] [i_1] [i_4] [i_5] [i_6]);
                                var_14 = ((~((var_9 ? 0 : -6618665451310837012))));
                            }
                        }
                    }
                    var_15 = ((+(((arr_8 [i_0] [i_4 - 1] [i_0 + 1] [i_0]) ? var_5 : (arr_8 [i_0 + 1] [i_4 - 1] [i_0 + 1] [i_4 + 1])))));
                    arr_18 [i_0] [i_4] = (min(-1239792902487888753, var_7));
                    var_16 = ((-(((7495 || -1) | 1239792902487888753))));
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_17 = (max(var_17, ((max(((1239792902487888752 / ((2596138903 ? 12123894576059160025 : (arr_11 [i_7] [i_1] [i_0] [i_0 - 1]))))), (arr_20 [18] [18]))))));
                    var_18 = var_5;
                    arr_21 [i_0] [i_1] [i_0] = (arr_3 [i_0 - 1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_19 ^= (arr_24 [i_8]);
                                var_20 = (arr_7 [i_0 + 1] [i_1] [i_9] [i_0]);
                                var_21 = ((+((((arr_4 [i_0 + 1] [i_0 - 1]) > var_3)))));
                                var_22 *= (max(-1, 25643));
                            }
                        }
                    }
                    var_23 = (min(var_23, var_8));
                }
                var_24 = (max(((((3840 ? var_0 : var_9)) | ((((var_5 < (arr_2 [i_0]))))))), (!var_2)));
            }
        }
    }
    var_25 = (var_8 - 2596138903);
    #pragma endscop
}
