/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = 144115188075855872;
                    arr_7 [i_1] = ((~(arr_6 [11] [11] [17] [i_2 + 2])));
                }
            }
        }
        var_12 = (!var_5);
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_13 ^= (max((-144115188075855858 || 144115188075855871), var_1));
        arr_11 [i_3] = ((((min(var_6, var_5))) ? 14 : var_6));
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_14 = (min(var_14, var_8));
        var_15 = (arr_9 [12] [12]);
    }
    var_16 = var_0;
    #pragma endscop
}
