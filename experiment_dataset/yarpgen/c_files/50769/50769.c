/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (max((((((((arr_5 [i_0]) != (arr_5 [i_0]))))) >= (max(1, 549755813887)))), (((55428 * 0) || (8388544 % 20)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_0] = (((arr_10 [i_1 - 2] [i_0] [i_3] [i_4]) % (((((arr_0 [i_0]) > (((8388528 && (arr_1 [i_0]))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = -1655888336;
                                arr_16 [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_1] [i_1] [i_1] = (max(549755813887, 15));
                                arr_17 [i_0] [i_0] [i_2] [i_3 + 1] = (arr_0 [i_0]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] = (max(1, (arr_7 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_11 -= (max(((((arr_1 [i_2]) >= (arr_4 [i_2] [i_2] [i_2])))), (arr_3 [i_5] [i_2] [i_0])));
                                var_12 = (arr_0 [i_0]);
                                arr_23 [i_0] [i_5] [i_2] [i_1] [i_0] = (-9223372036854775807 - 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_13 += 255;
                                var_14 = ((((((((((arr_12 [2] [i_1] [2] [i_7] [i_8 + 1]) || (arr_2 [i_1]))))) <= (1 | 109171136486650688)))) / (((0 <= ((((arr_13 [i_0] [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_2]) == (arr_2 [i_8])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((max(1655059584, 0)) - 0)) ^ (max(185483396, 127))));
    var_16 -= var_4;
    var_17 = (0 >> 1);
    #pragma endscop
}
