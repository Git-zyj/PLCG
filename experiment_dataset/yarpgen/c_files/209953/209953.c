/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 *= (max((((arr_8 [i_2 - 1] [i_2 + 1]) / var_7)), -3531821114));
                    var_15 ^= -16;
                    var_16 = (!var_9);
                }
            }
        }
    }
    #pragma endscop
}
