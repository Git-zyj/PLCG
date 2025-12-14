/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((0 ? -3941557 : 255))) > var_9))))));
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 ^= var_5;
                var_13 -= (((((arr_5 [i_0 + 3] [i_1 - 1]) / (arr_3 [i_0 + 1] [i_0] [5])))) ? ((max((arr_5 [i_0 - 3] [i_1 - 1]), (arr_5 [i_0 - 3] [i_1 - 1])))) : ((max((arr_5 [i_0 - 1] [i_1 + 1]), (arr_5 [i_0 + 2] [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((((max(var_2, (arr_2 [8] [8])) ^ (((240 ? var_3 : 15))))))))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_15 = max(15, ((((arr_2 [i_0] [i_0]) ? -309516055 : (arr_10 [5] [i_3] [0] [0])))));
                                arr_13 [i_0] [i_1] [i_0] [1] [i_4] = min(15, (min(var_7, var_3)));
                                var_16 = (((((~(arr_1 [i_0 + 3])))) ? ((~(max((arr_11 [i_0] [i_0] [i_1 + 2] [9] [8] [i_4] [1]), (arr_2 [i_0] [i_0]))))) : (240 <= var_3)));
                                var_17 -= 2875121245;
                            }
                            arr_14 [i_0] [2] [i_2] [i_0] = ((-(max(109, (arr_10 [i_0] [5] [i_0 - 1] [i_3])))));
                        }
                    }
                }
                var_18 = (((((arr_10 [8] [i_1] [8] [i_1 + 2]) ? (min(240, 2875121217)) : (((-56933771 ? 48 : (arr_9 [8] [i_0]))))))) ? 1331233623 : (((((-8192 && (arr_4 [i_1] [i_0]))) || (arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_1 - 1] [5] [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
