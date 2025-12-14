/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = 7067580334930435414;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, (arr_2 [i_0] [i_1])));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_13 [1] [i_1] [i_0] [7] = var_2;
                                var_11 += (arr_1 [i_0] [14]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [8] &= 7067580334930435414;
                    arr_18 [i_0] [i_1] [i_0] [i_5] = 7067580334930435423;
                    var_12 ^= 11379163738779116202;
                    var_13 += 106;
                    var_14 = 11379163738779116202;
                }
            }
        }
    }
    var_15 -= var_9;
    var_16 = var_8;
    #pragma endscop
}
