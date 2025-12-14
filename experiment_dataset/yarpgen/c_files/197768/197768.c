/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [3] [i_0] [i_0] [3] = (((-(arr_3 [i_2 - 1] [1] [i_2 - 1]))));
                    arr_10 [i_1] |= ((-(arr_7 [i_0] [10])));
                }
            }
        }
    }
    var_19 = (min(var_19, -var_10));
    var_20 = (((-((var_1 ? var_9 : var_10)))));
    var_21 = var_17;
    var_22 = (((((~var_1) + 2147483647)) << (((var_0 + 8408256371175303602) - 10))));
    #pragma endscop
}
