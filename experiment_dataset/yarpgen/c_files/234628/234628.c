/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] |= ((~(arr_1 [i_0])));
        var_20 = 7256023667354993021;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 -= -var_15;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        var_22 = (((arr_13 [i_1]) ? 1 : (arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])));
                        arr_14 [i_3] [13] = (((arr_7 [i_2]) <= -18545));
                    }
                }
            }
        }
    }
    var_23 = ((1 ? (((10159 >= (128 < var_3)))) : var_7));
    #pragma endscop
}
