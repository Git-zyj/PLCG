/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] = ((~(arr_8 [i_0] [i_1 + 1] [i_1] [1] [15])));
                        var_12 = 51;
                    }
                }
            }
        }
        var_13 ^= -4931002718453003963;
        arr_11 [i_0] [i_0] = (((arr_0 [i_0] [6]) / var_1));
        var_14 = 51;
        var_15 *= ((0 ? 2722578005 : (arr_5 [20])));
    }

    for (int i_4 = 3; i_4 < 7;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((-(((~var_5) ? (arr_0 [i_4] [i_4 + 2]) : var_7))));
        var_16 = (arr_8 [i_4] [i_4] [i_4] [i_4] [1]);
        arr_15 [i_4] = ((~(((var_2 ? var_5 : var_6)))));
        var_17 = ((((204 & (arr_9 [i_4] [i_4] [i_4 - 3] [1] [i_4] [i_4])))) && (~104));
    }
    var_18 = ((min(55, var_0)));
    var_19 += (-2147483647 - 1);
    #pragma endscop
}
