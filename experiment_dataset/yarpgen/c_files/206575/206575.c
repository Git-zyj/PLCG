/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min((min(var_17, var_12)), var_1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_0] = ((2 ? 371024938 : 2));
                    var_19 = ((var_17 && (arr_2 [i_2] [i_2 + 1] [i_2 - 1])));
                }
            }
        }
        arr_9 [2] [i_0 + 1] = (arr_0 [i_0 + 1] [i_0 - 1]);
        arr_10 [i_0 + 1] = var_5;
        var_20 = (arr_0 [i_0 + 1] [i_0 - 1]);
    }
    #pragma endscop
}
