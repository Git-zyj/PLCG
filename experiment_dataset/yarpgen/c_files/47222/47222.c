/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = var_0;
                var_14 = (max((((0 ? 8 : 3361537982))), ((~(arr_1 [i_0 + 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                arr_8 [i_2] [i_2] = 118321805803921872;
                var_15 = (min((arr_4 [i_2 + 1]), (arr_4 [i_3])));
            }
        }
    }
    #pragma endscop
}
