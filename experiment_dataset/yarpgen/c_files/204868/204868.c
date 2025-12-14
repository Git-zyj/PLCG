/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = arr_2 [i_0] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_12 [i_4]);
                                var_14 = (arr_2 [6] [i_1]);
                                var_15 = (min(var_15, (arr_8 [i_0] [i_0] [i_2 - 1] [i_4] [0])));
                                var_16 = (min(var_16, (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_4])));
                                var_17 ^= (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_4]);
                            }
                        }
                    }
                }
                arr_13 [i_0] = (arr_11 [i_1] [i_1] [i_0] [i_0] [i_0]);
                arr_14 [i_0] [12] [i_0] = (7863530146680855001 * 7121360831211143395);
                arr_15 [i_0] [i_0] = (((((7121360831211143372 ? 11325383242498408220 : 7121360831211143407))) ? ((((((arr_0 [20]) & (arr_0 [i_0])))) ? (((arr_2 [i_0] [i_1]) ? (arr_6 [i_1] [i_0] [i_0] [4]) : (arr_10 [i_0] [0] [22] [i_1] [i_0] [i_0]))) : (arr_9 [i_0] [i_0]))) : ((((arr_3 [0] [5] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : (((arr_7 [i_0] [3]) ? (arr_9 [i_0] [i_0]) : (arr_11 [23] [i_1] [i_1] [12] [i_1]))))))));
            }
        }
    }
    var_18 = (min(var_18, ((((var_10 + 9223372036854775807) << (((var_5 + 611665720) - 58)))))));
    #pragma endscop
}
