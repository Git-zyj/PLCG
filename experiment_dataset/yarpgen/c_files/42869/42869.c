/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (arr_2 [i_0 + 1]);
                    var_15 = (min(var_15, (((var_2 + (max(((var_7 ? (arr_6 [1]) : 5291622031902511633)), var_5)))))));
                }
            }
        }
    }
    var_16 = var_14;
    #pragma endscop
}
