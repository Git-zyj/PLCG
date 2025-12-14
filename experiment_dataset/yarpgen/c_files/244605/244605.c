/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 24;
    var_13 = (max(var_1, var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (1568990853 + (arr_5 [i_0] [i_1 - 3]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (max((((((arr_6 [i_2] [i_2]) != (arr_0 [i_1 - 1]))) ? ((~(arr_7 [i_2]))) : 97)), (!174)));
                            var_16 = ((min((arr_9 [i_2] [i_1 + 4] [i_2]), (arr_5 [i_3 + 1] [i_1 + 1]))) ^ (((arr_9 [i_2] [i_1 + 1] [i_2]) ^ (arr_5 [i_3 - 2] [i_1 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((!((max(17, var_2)))));
    #pragma endscop
}
