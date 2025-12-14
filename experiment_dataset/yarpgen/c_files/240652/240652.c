/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 |= (arr_1 [i_0] [i_0]);
        var_21 = -1520314217630487643;
        var_22 = (!-5);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = ((-(((!((max((arr_2 [i_1]), (arr_3 [i_1])))))))));
        var_23 -= ((arr_0 [i_1 - 1]) ^ (((arr_0 [i_1]) & (arr_0 [i_1 - 1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] = (((((min(var_9, (arr_7 [i_1] [i_1 + 1] [i_1]))) + 2147483647)) << (((((min(-1520314217630487643, 0)) + 1520314217630487662)) - 18))));
                    arr_13 [i_1] [i_2] [i_2] = var_17;
                }
            }
        }
    }
    var_24 = -659301736;
    #pragma endscop
}
