/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(0, -268435456));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 - 1]);
        arr_4 [i_0 + 4] [i_0] = -9470781709301614069;
        arr_5 [i_0] = -699799552;
    }
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    arr_12 [i_1] [5] [i_3 + 1] = var_3;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_3 - 3] [i_4] [i_4] [i_3 - 3] [i_2 - 4] [i_4] [9] = ((((arr_7 [i_2 - 3]) && (arr_7 [i_2 - 4]))));
                                arr_19 [i_1] [i_2 - 4] [i_2 - 4] [i_1] [i_4] [i_4] = ((var_2 % (arr_10 [i_2 - 3] [1] [5])));
                                arr_20 [i_1] [i_2] [i_3] [i_2] [i_1] = 1956017010;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (~var_10);
    #pragma endscop
}
