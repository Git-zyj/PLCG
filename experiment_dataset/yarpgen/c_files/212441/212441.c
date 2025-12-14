/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((var_8 - -98) ^ (var_4 + 8490066703034175756)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, 2965448706));
                                var_14 -= (((arr_9 [i_4] [4] [4] [i_0]) + ((~((-114 ? (arr_10 [i_0] [i_1 - 1] [10] [i_2]) : 35))))));
                                arr_15 [i_0] [i_0] [2] [i_1 - 1] [i_1 - 1] [i_3] [i_4 - 3] |= ((arr_3 [i_2]) * (!1));
                                arr_16 [i_1] = (((arr_12 [i_0] [i_1] [i_4 - 4] [i_4 - 4]) ^ (arr_6 [i_1] [i_3] [i_1])));
                            }
                        }
                    }
                    var_15 = (arr_3 [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
