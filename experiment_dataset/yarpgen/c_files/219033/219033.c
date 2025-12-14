/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = (!var_9);
        var_15 -= (((arr_0 [i_0 - 1]) ? (var_2 <= -9872) : -2517));
        arr_2 [i_0] = ((((1 ? var_0 : 126)) >= 15));
        arr_3 [i_0] = (((((-1 ? 4938644755388632204 : 1))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] = (!3675);
                        arr_13 [4] |= (max(14336, 5224489400953856167));
                    }
                }
            }
        }
        var_16 = (min(((~(min((-9223372036854775807 - 1), 6986626141660018136)))), ((min((~var_6), ((max(11748, 24585))))))));
        var_17 = (min(var_17, (((-(arr_5 [i_1 - 3] [i_1 - 1]))))));
    }
    var_18 *= (max(1, (((var_2 / var_3) / -28672))));
    #pragma endscop
}
