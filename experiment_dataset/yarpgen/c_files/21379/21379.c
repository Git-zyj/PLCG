/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((var_2 ? (arr_5 [i_1 - 1] [i_1 - 1]) : 34359738367)))));
                    var_15 = ((~(arr_2 [i_1 - 1])));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((((max(536870911, 4294967295))) == (max(-16, (arr_3 [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    var_16 = 268435455;
    #pragma endscop
}
