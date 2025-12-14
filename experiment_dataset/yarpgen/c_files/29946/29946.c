/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 15784997912430671168;
                arr_4 [i_1] [5] = var_13;
                var_16 = 58219;
            }
        }
    }
    var_17 = ((127 ? var_11 : -8665711448664311568));
    #pragma endscop
}
