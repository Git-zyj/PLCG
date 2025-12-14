/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [2] [12] [i_2] [10] [i_0] = var_14;
                                var_16 = (((((max(var_3, (arr_7 [i_0] [2]))) != (((max(var_9, 3)))))) ? (max((arr_8 [i_0] [i_4] [i_2] [i_2]), 6754594602221444954)) : (((arr_9 [i_4]) ? (arr_0 [i_0] [i_1 - 1]) : (arr_10 [i_0] [i_3] [i_2] [i_1 + 2])))));
                                arr_17 [i_0] [i_1 + 1] [10] [i_1] [4] = (max(((var_9 ? var_11 : (arr_13 [i_0] [i_1 + 1] [i_1 + 2]))), (arr_13 [i_0] [i_1 - 1] [i_1 + 2])));
                            }
                        }
                    }
                }
                var_17 = ((((max(((45151 ? var_2 : var_11)), (4024980275 > 4024980264)))) ? ((((max(-14279, 1))) ? (arr_1 [i_1 + 2]) : (3243459254970562317 << var_6))) : (~-13442)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_18 += ((((((var_12 / (arr_8 [8] [i_1] [i_1] [i_1]))) * (arr_11 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2]))) & (var_10 <= var_0)));
                                var_19 -= (max(((269987032 % ((0 ? 556479336652305798 : 4024980269)))), (((4024980277 <= (max(var_13, var_10)))))));
                                var_20 &= (!(((var_2 ? var_6 : (arr_0 [i_6] [5])))));
                                var_21 = (max(var_21, var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
