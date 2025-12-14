/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_2);
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [17] [i_0] [5] = ((-(arr_2 [i_0] [3] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] = ((~((~((max(11, -9)))))));
                                arr_14 [i_4 + 2] [i_4] [i_3] [7] [i_3] [i_1] [i_0 - 1] = (((((var_7 ? var_10 : (arr_12 [i_0 - 1] [14] [i_4 - 1] [i_4] [i_4])))) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4] [i_4]) : (arr_12 [i_0 - 1] [i_2] [i_4 - 1] [8] [i_4])));
                                arr_15 [i_3] = (max(-46433, ((-((16 ? -1633302598 : 5155592075675604551))))));
                            }
                        }
                    }
                }
                arr_16 [12] = (((((min(127, -49944)) + 2147483647)) << ((((((min(129, 57836))) ? (((arr_12 [i_0] [i_0] [6] [i_0] [i_1]) | (arr_11 [i_0] [i_1]))) : 35573)) - 230))));
            }
        }
    }
    #pragma endscop
}
