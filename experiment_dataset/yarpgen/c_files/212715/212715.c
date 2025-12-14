/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 += (var_1 * 6803518296755478201);
                    var_14 = (var_7 >> (((((arr_3 [i_0] [i_0] [i_2 + 1]) * var_0)) - 18323650397475290412)));
                    var_15 |= arr_0 [i_0];
                    var_16 = var_9;
                }
            }
        }
        arr_8 [i_0] = (var_6 << var_11);
    }
    var_17 = var_11;
    #pragma endscop
}
