/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 ^= (((arr_4 [2]) | (arr_4 [i_1])));
                arr_5 [i_0] = (max(((-(arr_4 [i_1]))), (140 == var_10)));
            }
        }
    }
    var_17 = 123;
    var_18 = var_5;
    var_19 = (min((!116), ((-(max(var_4, var_10))))));
    #pragma endscop
}
