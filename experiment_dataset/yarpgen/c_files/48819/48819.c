/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [1] [14] = (min((max((1803221234 * 1), 2257021176827062053)), (((var_2 ? (arr_4 [i_2 + 2] [i_2 + 2] [i_3] [i_3 + 2]) : ((((arr_9 [i_0] [i_0] [i_1] [0] [i_2] [i_3]) < 32))))))));
                            arr_11 [i_1] [i_0] = ((((arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2]) >= (arr_3 [i_1] [i_2 - 1] [i_3 - 1]))));
                        }
                    }
                }
                arr_12 [i_0] = ((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 464541161)) - 31)));
                arr_13 [i_0] [i_1] &= (arr_3 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_11 = 33;
    #pragma endscop
}
