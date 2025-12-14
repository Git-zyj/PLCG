/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_5 - var_7) / var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((174 < (arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 ^= 630137217;
                                arr_16 [i_0] [i_1] [i_1 + 1] [i_2 - 2] [i_3] [i_4] [i_4] = ((~(arr_7 [i_0] [i_0])));
                                var_12 &= arr_1 [i_0];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (~10685);
                                var_14 = (arr_20 [i_0] [i_1] [i_0] [i_5] [i_6 - 1]);
                                var_15 ^= (((((arr_13 [i_2] [7] [i_2]) == 11)) ? 0 : 1329362730));
                            }
                        }
                    }
                }
            }
        }
        var_16 = (arr_4 [6]);
    }
    #pragma endscop
}
