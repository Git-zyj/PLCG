/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_9, 37239);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max((arr_3 [i_0] [8]), (arr_2 [i_0] [i_1 - 1] [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = ((-1073741824 ? (arr_4 [i_0] [i_0] [i_2]) : -23208));
                            arr_8 [i_0] [17] [i_0] [i_3] = (max(((2428254133 ? -23208 : -23208)), -23230));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
