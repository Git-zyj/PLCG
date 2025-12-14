/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= ((~(min(-695475059, (112083823 + 12854)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] = max((arr_7 [9] [i_1 - 1] [i_1] [i_1]), ((695475053 ? 32763 : 102)));
                                var_15 += ((((1581839051128477392 != (arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 3])))));
                                var_16 = (min(var_16, ((((((((min((arr_1 [i_2]), var_5))) ? (((63 ? 2147483637 : 19663))) : 1376882052))) ? (var_4 < var_14) : var_13)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += max((var_14 < -0), (min(32763, 1581839051128477392)));
    #pragma endscop
}
