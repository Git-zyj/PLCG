/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 2] [i_1 - 3] [1] = 51112;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 = ((((((arr_12 [i_0 - 1] [i_1] [i_1 - 2] [3] [i_4]) ? (arr_11 [15] [22] [i_2] [17]) : ((~(arr_12 [i_4] [i_3] [i_2] [22] [i_0])))))) ? (arr_12 [i_0] [i_1] [14] [i_3] [i_4]) : (var_4 ^ var_4)));
                                var_11 = (((arr_9 [i_0 - 2] [i_1 - 3] [i_2] [i_3]) ? ((9223372036854775807 ^ (arr_3 [i_0 - 1] [i_1 - 1]))) : (((((((arr_0 [i_3] [i_4]) ? (arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_4]) : (arr_9 [i_0 - 2] [i_1 - 1] [5] [i_0 - 2]))) != var_5))))));
                                arr_13 [1] [i_1 - 2] [1] [i_3] [i_4] [i_3] = (~((~(((arr_2 [i_0] [i_0 - 3]) ? var_6 : 14424)))));
                                var_12 = var_4;
                            }
                        }
                    }
                    var_13 = (arr_9 [7] [i_1 - 2] [i_2] [i_2]);
                }
            }
        }
    }
    var_14 &= (((1 && 14433) >= var_2));
    var_15 = var_8;
    var_16 = ((((var_2 - var_3) + -var_9)));
    #pragma endscop
}
