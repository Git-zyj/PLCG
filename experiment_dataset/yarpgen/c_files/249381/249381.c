/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_0 + var_4) >> (((max((var_6 >> var_5), ((65516 ? 40536 : -97)))) - 40509))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((~0) + ((-(arr_2 [i_0]))))) < (((-2002214622 ? var_5 : 84)))));
                var_12 = (arr_0 [i_1]);
                var_13 ^= (arr_0 [i_1]);
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
