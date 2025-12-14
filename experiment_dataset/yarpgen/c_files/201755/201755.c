/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = min(2176116323564512538, (arr_1 [i_0]));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 -= -2443209119484281841;
                    arr_9 [i_0] [1] [i_0] [i_0] = ((max(3643367195242650463, (arr_0 [i_1 - 2] [i_1 - 2]))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [i_3] &= (((~(arr_1 [i_1]))));
                    var_17 = (min(var_17, (~249)));
                }
            }
        }
    }
    var_18 = (max(var_18, -31470));
    var_19 &= var_4;

    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_17 [9] [i_4 - 2] &= 9223372036854775807;
        arr_18 [i_4] = (--32757);
        arr_19 [i_4 - 2] [i_4] = (arr_7 [i_4] [i_4] [i_4]);
        arr_20 [i_4] [i_4] = (~72057594037927935);

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_20 = 2443209119484281837;
            arr_24 [i_4] [i_5] = 1123546488689028558;
            var_21 &= ((max(-1, 49256)));
        }
    }
    #pragma endscop
}
