/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (min(var_5, 4294967282));
                arr_4 [10] [10] = ((~((~(2147483647 % 2147483647)))));
            }
        }
    }
    var_19 |= (124 / var_11);
    #pragma endscop
}
