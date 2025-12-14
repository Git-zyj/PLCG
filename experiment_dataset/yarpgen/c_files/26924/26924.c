/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max((min(var_10, -var_2)), ((var_4 ? (arr_6 [i_0] [i_0] [i_0]) : var_10))));
                    var_15 = (arr_5 [i_0] [i_0] [5] [i_1]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_9 [i_3] = 1;
        arr_10 [i_3] = (arr_1 [i_3]);
    }
    var_16 ^= ((!(~var_1)));
    #pragma endscop
}
