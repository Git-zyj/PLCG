/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = ((((min((arr_2 [i_1 + 1] [i_1 + 1]), 58261))) ? (7265 || 83) : 7271));
                                arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = (min(((7275 ? (arr_5 [i_2]) : 52623)), -12909));
                                arr_16 [i_2] [i_1 - 3] [i_2] [i_3 - 1] [i_4 + 1] [i_4] [i_0] = (max(((((((arr_0 [i_1]) >> (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) + 502013690))))) & (min((arr_14 [i_4 + 1] [i_1] [i_1]), (arr_1 [i_1 - 3] [i_1 - 3]))))), (~58243)));
                                var_18 = (min((arr_0 [i_2]), (arr_0 [i_4 + 2])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((~(2 ^ 58235)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_19 += 12909;
                                arr_22 [i_6 + 1] [i_6] [i_2] [i_6] [i_0] = (arr_18 [i_0] [10] [i_2] [i_5]);
                                var_20 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 4462892382736810028;
    #pragma endscop
}
