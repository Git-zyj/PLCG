/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_0] [i_0] [i_0] [6]);
                    var_18 = (min(var_18, (((~(((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : 127)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            {
                var_19 += (arr_9 [i_4] [i_4] [i_3]);
                var_20 = (-((-(arr_5 [i_3] [i_3] [i_3]))));
                var_21 = (max(18014398375264256, (arr_6 [i_3])));
            }
        }
    }
    #pragma endscop
}
