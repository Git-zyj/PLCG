/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (((((arr_1 [i_0] [1]) == (arr_0 [3]))))) : (1292420069 / 1601396030)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = 1;
                        var_15 -= var_0;
                    }
                }
            }
        }
    }
    var_16 = 748276569045968920;
    #pragma endscop
}
