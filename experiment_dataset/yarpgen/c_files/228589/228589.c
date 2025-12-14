/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [8] [8] [i_1] = 2147483647;
                var_11 = ((((var_1 ? (arr_0 [8] [i_1 + 2]) : var_3)) < (arr_3 [i_1 - 2] [i_1 + 3])));
            }
        }
    }
    var_12 = -1623685425;
    #pragma endscop
}
