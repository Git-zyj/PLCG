/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = (arr_0 [i_0 - 1]);
        var_21 &= ((~(((((449707442 ? 122 : 29)) <= (arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_2] [i_1] = -449707431;
                arr_9 [i_2] [i_2] [i_1] = 449707425;
            }
        }
    }
    var_22 = (max(var_22, (!var_1)));
    #pragma endscop
}
