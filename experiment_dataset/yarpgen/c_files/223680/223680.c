/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((-5729 > (max(2147483647, -31879)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = (arr_2 [i_1 + 3]);
                    var_16 += (min((arr_3 [i_0] [i_1 + 3]), ((-(arr_3 [i_0] [i_1 + 3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_17 = (arr_5 [i_3 + 1]);
                var_18 = (min(var_18, (-31884 * 21656)));
            }
        }
    }
    #pragma endscop
}
