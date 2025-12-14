/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (max((max(17316, (arr_3 [i_0] [i_1 + 3]))), ((((var_11 ? 0 : (arr_4 [i_0] [i_1] [i_1] [i_2])))))));
                    var_21 = (min(((~(arr_2 [i_0]))), (arr_1 [i_1 + 3])));
                }
            }
        }
    }
    var_22 = min(5330424368432195299, (((var_5 << (var_16 - 19645)))));
    #pragma endscop
}
